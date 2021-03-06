
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct snd_ice1712_card_info {int subvendor; int eeprom_size; int eeprom_data; int name; scalar_t__ model; } ;
struct TYPE_4__ {int subvendor; int version; int size; int* data; int gpiomask; int gpiostate; int gpiodir; } ;
struct snd_ice1712 {TYPE_2__ eeprom; TYPE_1__* card; int pci; } ;
struct TYPE_3__ {int dev; } ;


 int EIO ;
 int ENXIO ;
 int I2C_CTRL ;
 int ICE1712_I2C_EEPROM ;
 int ICEREG (struct snd_ice1712*,int ) ;
 size_t ICE_EEP1_GPIO_DIR ;
 size_t ICE_EEP1_GPIO_MASK ;
 size_t ICE_EEP1_GPIO_STATE ;
 int ICE_I2C_EEPROM_ADDR ;
 int PCI_SUBSYSTEM_ID ;
 int PCI_SUBSYSTEM_VENDOR_ID ;
 struct snd_ice1712_card_info** card_tables ;
 int dev_dbg (int ,char*) ;
 int dev_err (int ,char*,...) ;
 int dev_info (int ,char*,int ) ;
 int dev_warn (int ,char*,int) ;
 int inb (int ) ;
 int memcpy (int*,int ,int) ;
 int pci_read_config_word (int ,int ,int *) ;
 int snd_ice1712_read_i2c (struct snd_ice1712*,int,unsigned int) ;
 int strcmp (char const*,scalar_t__) ;
 unsigned int swab16 (int ) ;

__attribute__((used)) static int snd_ice1712_read_eeprom(struct snd_ice1712 *ice,
       const char *modelname)
{
 int dev = ICE_I2C_EEPROM_ADDR;
 unsigned int i, size;
 struct snd_ice1712_card_info * const *tbl, *c;

 if (!modelname || !*modelname) {
  ice->eeprom.subvendor = 0;
  if ((inb(ICEREG(ice, I2C_CTRL)) & ICE1712_I2C_EEPROM) != 0)
   ice->eeprom.subvendor = (snd_ice1712_read_i2c(ice, dev, 0x00) << 0) |
    (snd_ice1712_read_i2c(ice, dev, 0x01) << 8) |
    (snd_ice1712_read_i2c(ice, dev, 0x02) << 16) |
    (snd_ice1712_read_i2c(ice, dev, 0x03) << 24);
  if (ice->eeprom.subvendor == 0 ||
      ice->eeprom.subvendor == (unsigned int)-1) {

   u16 vendor, device;
   pci_read_config_word(ice->pci, PCI_SUBSYSTEM_VENDOR_ID, &vendor);
   pci_read_config_word(ice->pci, PCI_SUBSYSTEM_ID, &device);
   ice->eeprom.subvendor = ((unsigned int)swab16(vendor) << 16) | swab16(device);
   if (ice->eeprom.subvendor == 0 || ice->eeprom.subvendor == (unsigned int)-1) {
    dev_err(ice->card->dev,
     "No valid ID is found\n");
    return -ENXIO;
   }
  }
 }
 for (tbl = card_tables; *tbl; tbl++) {
  for (c = *tbl; c->subvendor; c++) {
   if (modelname && c->model && !strcmp(modelname, c->model)) {
    dev_info(ice->card->dev,
      "Using board model %s\n", c->name);
    ice->eeprom.subvendor = c->subvendor;
   } else if (c->subvendor != ice->eeprom.subvendor)
    continue;
   if (!c->eeprom_size || !c->eeprom_data)
    goto found;

   dev_dbg(ice->card->dev, "using the defined eeprom..\n");
   ice->eeprom.version = 1;
   ice->eeprom.size = c->eeprom_size + 6;
   memcpy(ice->eeprom.data, c->eeprom_data, c->eeprom_size);
   goto read_skipped;
  }
 }
 dev_warn(ice->card->dev, "No matching model found for ID 0x%x\n",
        ice->eeprom.subvendor);

 found:
 ice->eeprom.size = snd_ice1712_read_i2c(ice, dev, 0x04);
 if (ice->eeprom.size < 6)
  ice->eeprom.size = 32;
 else if (ice->eeprom.size > 32) {
  dev_err(ice->card->dev,
   "invalid EEPROM (size = %i)\n", ice->eeprom.size);
  return -EIO;
 }
 ice->eeprom.version = snd_ice1712_read_i2c(ice, dev, 0x05);
 if (ice->eeprom.version != 1) {
  dev_err(ice->card->dev, "invalid EEPROM version %i\n",
      ice->eeprom.version);

 }
 size = ice->eeprom.size - 6;
 for (i = 0; i < size; i++)
  ice->eeprom.data[i] = snd_ice1712_read_i2c(ice, dev, i + 6);

 read_skipped:
 ice->eeprom.gpiomask = ice->eeprom.data[ICE_EEP1_GPIO_MASK];
 ice->eeprom.gpiostate = ice->eeprom.data[ICE_EEP1_GPIO_STATE];
 ice->eeprom.gpiodir = ice->eeprom.data[ICE_EEP1_GPIO_DIR];

 return 0;
}

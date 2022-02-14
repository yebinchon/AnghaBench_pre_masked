
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_info_entry {struct snd_ice1712* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_4__ {unsigned int subvendor; unsigned int size; unsigned int version; unsigned int* data; unsigned int gpiomask; unsigned int gpiostate; unsigned int gpiodir; } ;
struct snd_ice1712 {TYPE_2__ eeprom; TYPE_1__* card; } ;
struct TYPE_3__ {unsigned int longname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 unsigned int VAR_7 ;
 size_t VAR_8 ;
 unsigned int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int FUNC_1 (struct snd_ice1712*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct snd_ice1712*) ;
 scalar_t__ FUNC_6 (struct snd_ice1712*,int ) ;
 int FUNC_7 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_8(struct snd_info_entry *VAR_16,
      struct snd_info_buffer *VAR_17)
{
 struct snd_ice1712 *VAR_18 = VAR_16->private_data;
 unsigned int VAR_19;

 FUNC_7(VAR_17, "%s\n\n", VAR_18->card->longname);
 FUNC_7(VAR_17, "EEPROM:\n");

 FUNC_7(VAR_17, "  Subvendor        : 0x%x\n", VAR_18->eeprom.subvendor);
 FUNC_7(VAR_17, "  Size             : %i bytes\n", VAR_18->eeprom.size);
 FUNC_7(VAR_17, "  Version          : %i\n", VAR_18->eeprom.version);
 FUNC_7(VAR_17, "  Codec            : 0x%x\n", VAR_18->eeprom.data[VAR_8]);
 FUNC_7(VAR_17, "  ACLink           : 0x%x\n", VAR_18->eeprom.data[VAR_6]);
 FUNC_7(VAR_17, "  I2S ID           : 0x%x\n", VAR_18->eeprom.data[VAR_10]);
 FUNC_7(VAR_17, "  S/PDIF           : 0x%x\n", VAR_18->eeprom.data[VAR_11]);
 FUNC_7(VAR_17, "  GPIO mask        : 0x%x\n", VAR_18->eeprom.gpiomask);
 FUNC_7(VAR_17, "  GPIO state       : 0x%x\n", VAR_18->eeprom.gpiostate);
 FUNC_7(VAR_17, "  GPIO direction   : 0x%x\n", VAR_18->eeprom.gpiodir);
 FUNC_7(VAR_17, "  AC'97 main       : 0x%x\n", FUNC_1(VAR_18, VAR_2));
 FUNC_7(VAR_17, "  AC'97 pcm        : 0x%x\n", FUNC_1(VAR_18, VAR_3));
 FUNC_7(VAR_17, "  AC'97 record     : 0x%x\n", FUNC_1(VAR_18, VAR_5));
 FUNC_7(VAR_17, "  AC'97 record src : 0x%x\n", VAR_18->eeprom.data[VAR_4]);
 for (VAR_19 = 0; VAR_19 < 4; VAR_19++)
  FUNC_7(VAR_17, "  DAC ID #%i        : 0x%x\n", VAR_19, VAR_18->eeprom.data[VAR_9 + VAR_19]);
 for (VAR_19 = 0; VAR_19 < 4; VAR_19++)
  FUNC_7(VAR_17, "  ADC ID #%i        : 0x%x\n", VAR_19, VAR_18->eeprom.data[VAR_7 + VAR_19]);
 for (VAR_19 = 0x1c; VAR_19 < VAR_18->eeprom.size; VAR_19++)
  FUNC_7(VAR_17, "  Extra #%02i        : 0x%x\n", VAR_19, VAR_18->eeprom.data[VAR_19]);

 FUNC_7(VAR_17, "\nRegisters:\n");
 FUNC_7(VAR_17, "  PSDOUT03         : 0x%04x\n", (unsigned)FUNC_4(FUNC_0(VAR_18, VAR_14)));
 FUNC_7(VAR_17, "  CAPTURE          : 0x%08x\n", FUNC_3(FUNC_0(VAR_18, VAR_13)));
 FUNC_7(VAR_17, "  SPDOUT           : 0x%04x\n", (unsigned)FUNC_4(FUNC_0(VAR_18, VAR_15)));
 FUNC_7(VAR_17, "  RATE             : 0x%02x\n", (unsigned)FUNC_2(FUNC_0(VAR_18, VAR_12)));
 FUNC_7(VAR_17, "  GPIO_DATA        : 0x%02x\n", (unsigned)FUNC_5(VAR_18));
 FUNC_7(VAR_17, "  GPIO_WRITE_MASK  : 0x%02x\n", (unsigned)FUNC_6(VAR_18, VAR_1));
 FUNC_7(VAR_17, "  GPIO_DIRECTION   : 0x%02x\n", (unsigned)FUNC_6(VAR_18, VAR_0));
}

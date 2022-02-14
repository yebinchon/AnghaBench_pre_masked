
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_info_entry {struct snd_ice1712* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_4__ {unsigned int size; int * data; int gpiostate; int gpiomask; int gpiodir; int version; int subvendor; } ;
struct snd_ice1712 {scalar_t__ profi_port; scalar_t__ port; TYPE_2__ eeprom; TYPE_1__* card; } ;
struct TYPE_3__ {int longname; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_4(struct snd_info_entry *VAR_5,
     struct snd_info_buffer *VAR_6)
{
 struct snd_ice1712 *VAR_7 = VAR_5->private_data;
 unsigned int VAR_8;

 FUNC_3(VAR_6, "%s\n\n", VAR_7->card->longname);
 FUNC_3(VAR_6, "EEPROM:\n");

 FUNC_3(VAR_6, "  Subvendor        : 0x%x\n", VAR_7->eeprom.subvendor);
 FUNC_3(VAR_6, "  Size             : %i bytes\n", VAR_7->eeprom.size);
 FUNC_3(VAR_6, "  Version          : %i\n", VAR_7->eeprom.version);
 FUNC_3(VAR_6, "  System Config    : 0x%x\n",
      VAR_7->eeprom.data[VAR_3]);
 FUNC_3(VAR_6, "  ACLink           : 0x%x\n",
      VAR_7->eeprom.data[VAR_0]);
 FUNC_3(VAR_6, "  I2S              : 0x%x\n",
      VAR_7->eeprom.data[VAR_1]);
 FUNC_3(VAR_6, "  S/PDIF           : 0x%x\n",
      VAR_7->eeprom.data[VAR_2]);
 FUNC_3(VAR_6, "  GPIO direction   : 0x%x\n",
      VAR_7->eeprom.gpiodir);
 FUNC_3(VAR_6, "  GPIO mask        : 0x%x\n",
      VAR_7->eeprom.gpiomask);
 FUNC_3(VAR_6, "  GPIO state       : 0x%x\n",
      VAR_7->eeprom.gpiostate);
 for (VAR_8 = 0x12; VAR_8 < VAR_7->eeprom.size; VAR_8++)
  FUNC_3(VAR_6, "  Extra #%02i        : 0x%x\n",
       VAR_8, VAR_7->eeprom.data[VAR_8]);

 FUNC_3(VAR_6, "\nRegisters:\n");

 FUNC_3(VAR_6, "  PSDOUT03 : 0x%08x\n",
      (unsigned)FUNC_2(FUNC_0(VAR_7, VAR_4)));
 for (VAR_8 = 0x0; VAR_8 < 0x20 ; VAR_8++)
  FUNC_3(VAR_6, "  CCS%02x    : 0x%02x\n",
       VAR_8, FUNC_1(VAR_7->port+VAR_8));
 for (VAR_8 = 0x0; VAR_8 < 0x30 ; VAR_8++)
  FUNC_3(VAR_6, "  MT%02x     : 0x%02x\n",
       VAR_8, FUNC_1(VAR_7->profi_port+VAR_8));
}

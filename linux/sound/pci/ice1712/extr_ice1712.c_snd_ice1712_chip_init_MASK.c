
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ subvendor; int* data; int gpiomask; int gpiodir; int gpiostate; } ;
struct TYPE_3__ {int write_mask; int direction; } ;
struct snd_ice1712 {TYPE_2__ eeprom; TYPE_1__ gpio; int pci; int dxr_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (struct snd_ice1712*,int ) ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct snd_ice1712*,int,int) ;
 int FUNC_5 (struct snd_ice1712*,int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct snd_ice1712 *VAR_25)
{
 FUNC_2(VAR_15 | VAR_14, FUNC_1(VAR_25, VAR_1));
 FUNC_6(200);
 FUNC_2(VAR_14, FUNC_1(VAR_25, VAR_1));
 FUNC_6(200);
 if (VAR_25->eeprom.subvendor == VAR_17 &&
     !VAR_25->dxr_enable)




  VAR_25->eeprom.data[VAR_20] = 0x3a;
 FUNC_3(VAR_25->pci, 0x60, VAR_25->eeprom.data[VAR_20]);
 FUNC_3(VAR_25->pci, 0x61, VAR_25->eeprom.data[VAR_19]);
 FUNC_3(VAR_25->pci, 0x62, VAR_25->eeprom.data[VAR_21]);
 FUNC_3(VAR_25->pci, 0x63, VAR_25->eeprom.data[VAR_22]);
 if (VAR_25->eeprom.subvendor != VAR_18) {
  VAR_25->gpio.write_mask = VAR_25->eeprom.gpiomask;
  VAR_25->gpio.direction = VAR_25->eeprom.gpiodir;
  FUNC_5(VAR_25, VAR_8,
      VAR_25->eeprom.gpiomask);
  FUNC_5(VAR_25, VAR_7,
      VAR_25->eeprom.gpiodir);
  FUNC_5(VAR_25, VAR_6,
      VAR_25->eeprom.gpiostate);
 } else {
  VAR_25->gpio.write_mask = 0xc0;
  VAR_25->gpio.direction = 0xff;
  FUNC_5(VAR_25, VAR_8, 0xc0);
  FUNC_5(VAR_25, VAR_7, 0xff);
  FUNC_5(VAR_25, VAR_6,
      VAR_16);
 }
 FUNC_5(VAR_25, VAR_9, 0);
 if (!(VAR_25->eeprom.data[VAR_20] & VAR_4)) {
  FUNC_2(VAR_2, FUNC_1(VAR_25, VAR_0));
  FUNC_6(100);
  FUNC_2(0, FUNC_1(VAR_25, VAR_0));
  FUNC_6(200);
  FUNC_5(VAR_25, VAR_5, 0);
 }
 FUNC_4(VAR_25, 48000, 1);

 FUNC_2(((VAR_25->eeprom.data[VAR_20] & VAR_3) == 0 ?
       VAR_12 : 0) |
      ((VAR_25->eeprom.data[VAR_20] & VAR_4) ?
       VAR_13 | VAR_10 | VAR_11 : 0),
      FUNC_1(VAR_25, VAR_24));
 FUNC_2(0x00, FUNC_0(VAR_25, VAR_23));

 return 0;
}

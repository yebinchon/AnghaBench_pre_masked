
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* data; int gpiostate; int gpiodir; int gpiomask; } ;
struct TYPE_3__ {int direction; int write_mask; } ;
struct snd_ice1712 {TYPE_2__ eeprom; TYPE_1__ gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (struct snd_ice1712*,int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct snd_ice1712*,int ) ;
 int FUNC_4 (struct snd_ice1712*,int ) ;
 int FUNC_5 (struct snd_ice1712*,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_ice1712 *VAR_14)
{
 FUNC_2(VAR_14->eeprom.data[VAR_6], FUNC_1(VAR_14, VAR_10));
 FUNC_2(VAR_14->eeprom.data[VAR_3], FUNC_1(VAR_14, VAR_0));
 FUNC_2(VAR_14->eeprom.data[VAR_4], FUNC_1(VAR_14, VAR_2));
 FUNC_2(VAR_14->eeprom.data[VAR_5], FUNC_1(VAR_14, VAR_9));

 VAR_14->gpio.write_mask = VAR_14->eeprom.gpiomask;
 VAR_14->gpio.direction = VAR_14->eeprom.gpiodir;
 FUNC_5(VAR_14, VAR_14->eeprom.gpiomask);
 FUNC_4(VAR_14, VAR_14->eeprom.gpiodir);
 FUNC_3(VAR_14, VAR_14->eeprom.gpiostate);

 FUNC_2(0, FUNC_1(VAR_14, VAR_8));


 FUNC_2(VAR_11 | VAR_12 , FUNC_1(VAR_14, VAR_7));




 FUNC_2(VAR_13, FUNC_0(VAR_14, VAR_1));

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int gpiostate; int gpiodir; int gpiomask; } ;
struct TYPE_3__ {int direction; int write_mask; } ;
struct snd_ice1712 {TYPE_2__ eeprom; TYPE_1__ gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ice1712*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_ice1712 *VAR_3)
{
 VAR_3->gpio.write_mask = VAR_3->eeprom.gpiomask;
 VAR_3->gpio.direction = VAR_3->eeprom.gpiodir;
 FUNC_0(VAR_3, VAR_2, VAR_3->eeprom.gpiomask);
 FUNC_0(VAR_3, VAR_1, VAR_3->eeprom.gpiodir);
 FUNC_0(VAR_3, VAR_0, VAR_3->eeprom.gpiostate);
 return 0;
}

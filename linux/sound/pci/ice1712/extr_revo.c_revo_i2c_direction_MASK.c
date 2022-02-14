
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int direction; } ;
struct snd_ice1712 {TYPE_1__ gpio; } ;
struct snd_i2c_bus {struct snd_ice1712* private_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*,unsigned int) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct snd_i2c_bus *VAR_2, int VAR_3, int VAR_4)
{
 struct snd_ice1712 *VAR_5 = VAR_2->private_data;
 unsigned int VAR_6, VAR_7;

 VAR_7 = 0;
 if (VAR_3)
  VAR_7 |= VAR_0;
 if (VAR_4)
  VAR_7 |= VAR_1;
 VAR_6 = VAR_0 | VAR_1;
 VAR_5->gpio.direction &= ~VAR_6;
 VAR_5->gpio.direction |= VAR_7;
 FUNC_0(VAR_5, VAR_5->gpio.direction);
 FUNC_1(VAR_5, ~VAR_6);
}

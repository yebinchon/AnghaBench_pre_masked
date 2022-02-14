
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subvendor; } ;
struct snd_ice1712 {TYPE_1__ eeprom; } ;
struct snd_i2c_bus {struct snd_ice1712* private_data; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;


 int FUNC_0 (struct snd_ice1712*,unsigned char,unsigned char) ;
 int FUNC_1 (struct snd_ice1712*) ;

__attribute__((used)) static void FUNC_2(struct snd_i2c_bus *VAR_3)
{
 struct snd_ice1712 *VAR_4 = VAR_3->private_data;
 unsigned char VAR_5;

 FUNC_1(VAR_4);

 VAR_5 = VAR_2;
 switch (VAR_4->eeprom.subvendor) {
 case 128:
  VAR_5 |= VAR_1;
  break;
 case 129:
  VAR_5 |= VAR_0;
  break;
 }
 FUNC_0(VAR_4, VAR_5, VAR_5);
}

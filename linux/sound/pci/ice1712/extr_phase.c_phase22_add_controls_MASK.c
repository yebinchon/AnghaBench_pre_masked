
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subvendor; } ;
struct snd_ice1712 {TYPE_1__ eeprom; } ;




 int FUNC_0 (struct snd_ice1712*) ;

__attribute__((used)) static int FUNC_1(struct snd_ice1712 *VAR_0)
{
 int VAR_1 = 0;

 switch (VAR_0->eeprom.subvendor) {
 case 129:
 case 128:
  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1 < 0)
   return VAR_1;
 }
 return 0;
}

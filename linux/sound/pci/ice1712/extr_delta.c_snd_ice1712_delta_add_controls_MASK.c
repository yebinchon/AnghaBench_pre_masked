
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subvendor; } ;
struct snd_ice1712 {TYPE_1__ eeprom; int card; } ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct snd_ice1712*) ;
 int FUNC_2 (struct snd_ice1712*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct snd_ice1712*) ;

__attribute__((used)) static int FUNC_4(struct snd_ice1712 *VAR_6)
{
 int VAR_7;


 switch (VAR_6->eeprom.subvendor) {
 case 138:
 case 129:
  VAR_7 = FUNC_0(VAR_6->card, FUNC_1(&VAR_0, VAR_6));
  if (VAR_7 < 0)
   return VAR_7;
  VAR_7 = FUNC_0(VAR_6->card, FUNC_1(&VAR_1, VAR_6));
  if (VAR_7 < 0)
   return VAR_7;
  break;
 case 131:
  VAR_7 = FUNC_0(VAR_6->card, FUNC_1(&VAR_5, VAR_6));
  if (VAR_7 < 0)
   return VAR_7;
  break;
 case 137:
 case 136:
  VAR_7 = FUNC_0(VAR_6->card, FUNC_1(&VAR_2, VAR_6));
  if (VAR_7 < 0)
   return VAR_7;
  VAR_7 = FUNC_0(VAR_6->card, FUNC_1(&VAR_3, VAR_6));
  if (VAR_7 < 0)
   return VAR_7;
  break;
 }


 switch (VAR_6->eeprom.subvendor) {
 case 138:
 case 131:
 case 133:
 case 129:
  VAR_7 = FUNC_3(VAR_6);
  if (VAR_7 < 0)
   return VAR_7;
  break;
 }


 switch (VAR_6->eeprom.subvendor) {
 case 138:
 case 131:
 case 133:
 case 129:
  VAR_7 = FUNC_0(VAR_6->card, FUNC_1(&VAR_4, VAR_6));
  if (VAR_7 < 0)
   return VAR_7;
  break;
 }


 switch (VAR_6->eeprom.subvendor) {
 case 136:
 case 139:
 case 135:
 case 134:
 case 133:
 case 128:
 case 132:
 case 130:
  VAR_7 = FUNC_2(VAR_6);
  if (VAR_7 < 0)
   return VAR_7;
  break;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subvendor; } ;
struct snd_ice1712 {int card; TYPE_1__ eeprom; int * cs8427; } ;


 unsigned int FUNC_0 (int *) ;







 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,struct snd_ice1712*) ;
 int * VAR_0 ;
 int FUNC_3 (struct snd_ice1712*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (struct snd_ice1712*) ;

__attribute__((used)) static int FUNC_5(struct snd_ice1712 *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;


 if (VAR_5->cs8427 == ((void*)0)) {
  VAR_7 = FUNC_4(VAR_5);
  if (VAR_7 < 0)
   return VAR_7;
 }


 switch (VAR_5->eeprom.subvendor) {
 case 130:
 case 132:
 case 131:
 case 129:
 case 128:
 case 134:
  VAR_7 = FUNC_3(VAR_5);
  if (VAR_7 < 0)
   return VAR_7;
  break;
 }


 switch (VAR_5->eeprom.subvendor) {
 case 130:
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++) {
   VAR_7 = FUNC_1(VAR_5->card, FUNC_2(&VAR_4[VAR_6], VAR_5));
   if (VAR_7 < 0)
    return VAR_7;
  }
  break;
 case 132:
 case 131:
 case 129:
 case 128:
  VAR_7 = FUNC_1(VAR_5->card, FUNC_2(&VAR_2, VAR_5));
  if (VAR_7 < 0)
   return VAR_7;
  VAR_7 = FUNC_1(VAR_5->card, FUNC_2(&VAR_3, VAR_5));
  if (VAR_7 < 0)
   return VAR_7;
  break;
 case 133:
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
   VAR_7 = FUNC_1(VAR_5->card, FUNC_2(&VAR_1[VAR_6], VAR_5));
   if (VAR_7 < 0)
    return VAR_7;
  }
  break;
 case 134:
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
   VAR_7 = FUNC_1(VAR_5->card, FUNC_2(&VAR_0[VAR_6], VAR_5));
   if (VAR_7 < 0)
    return VAR_7;
  }
  break;
 }
 return 0;
}

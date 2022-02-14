
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subvendor; } ;
struct snd_ice1712 {int num_total_dacs; int num_total_adcs; int vt1720; int akm_codecs; TYPE_1__ eeprom; struct snd_akm4xxx* akm; } ;
struct snd_akm4xxx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 struct snd_akm4xxx* FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct snd_akm4xxx*,int *,int *,struct snd_ice1712*) ;

__attribute__((used)) static int FUNC_3(struct snd_ice1712 *VAR_5)
{
 struct snd_akm4xxx *VAR_6;
 int VAR_7;


 switch (VAR_5->eeprom.subvendor) {
 case 129:
 case 128:
  VAR_5->num_total_dacs = 2;
  VAR_5->num_total_adcs = 2;
  VAR_5->vt1720 = 1;
  break;
 default:
  FUNC_1();
  return -VAR_0;
 }


 VAR_5->akm = FUNC_0(sizeof(struct snd_akm4xxx), VAR_2);
 VAR_6 = VAR_5->akm;
 if (!VAR_6)
  return -VAR_1;
 VAR_5->akm_codecs = 1;
 switch (VAR_5->eeprom.subvendor) {
 case 129:
 case 128:
  VAR_7 = FUNC_2(VAR_6, &VAR_3,
      &VAR_4, VAR_5);
  if (VAR_7 < 0)
   return VAR_7;
  break;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ subvendor; } ;
struct snd_ice1712 {int num_total_dacs; int num_total_adcs; int akm_codecs; int pm_suspend_enabled; int pm_resume; void* akm; TYPE_1__ eeprom; struct aureon_spec* spec; } ;
struct snd_akm4xxx {int dummy; } ;
struct aureon_spec {void** master; void** vol; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct snd_ice1712*) ;
 int VAR_4 ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_ice1712*,int,void*,void*) ;

__attribute__((used)) static int FUNC_3(struct snd_ice1712 *VAR_5)
{
 struct aureon_spec *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_5->spec = VAR_6;

 if (VAR_5->eeprom.subvendor == VAR_2) {
  VAR_5->num_total_dacs = 6;
  VAR_5->num_total_adcs = 2;
 } else {

  VAR_5->num_total_dacs = 8;
  VAR_5->num_total_adcs = 2;
 }


 VAR_5->akm = FUNC_1(sizeof(struct snd_akm4xxx), VAR_1);
 if (!VAR_5->akm)
  return -VAR_0;
 VAR_5->akm_codecs = 1;

 VAR_8 = FUNC_0(VAR_5);
 if (VAR_8 != 0)
  return VAR_8;

 VAR_6->master[0] = VAR_3;
 VAR_6->master[1] = VAR_3;
 for (VAR_7 = 0; VAR_7 < VAR_5->num_total_dacs; VAR_7++) {
  VAR_6->vol[VAR_7] = VAR_3;
  FUNC_2(VAR_5, VAR_7, VAR_6->vol[VAR_7], VAR_6->master[VAR_7 % 2]);
 }






 return 0;
}

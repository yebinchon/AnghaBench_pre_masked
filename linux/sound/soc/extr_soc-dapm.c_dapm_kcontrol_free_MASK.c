
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct dapm_kcontrol_data {struct dapm_kcontrol_data* wlist; int paths; } ;


 int FUNC_0 (struct dapm_kcontrol_data*) ;
 int FUNC_1 (int *) ;
 struct dapm_kcontrol_data* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static void FUNC_3(struct snd_kcontrol *VAR_0)
{
 struct dapm_kcontrol_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->paths);
 FUNC_0(VAR_1->wlist);
 FUNC_0(VAR_1);
}

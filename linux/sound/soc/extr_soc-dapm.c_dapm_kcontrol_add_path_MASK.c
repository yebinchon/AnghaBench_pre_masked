
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_path {int list_kcontrol; } ;
struct snd_kcontrol {int dummy; } ;
struct dapm_kcontrol_data {int paths; } ;


 int FUNC_0 (int *,int *) ;
 struct dapm_kcontrol_data* FUNC_1 (struct snd_kcontrol const*) ;

__attribute__((used)) static void FUNC_2(const struct snd_kcontrol *VAR_0,
 struct snd_soc_dapm_path *VAR_1)
{
 struct dapm_kcontrol_data *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->list_kcontrol, &VAR_2->paths);
}

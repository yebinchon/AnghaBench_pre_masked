
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget_list {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct dapm_kcontrol_data {struct snd_soc_dapm_widget_list* wlist; } ;


 struct dapm_kcontrol_data* FUNC_0 (struct snd_kcontrol const*) ;

__attribute__((used)) static struct snd_soc_dapm_widget_list *FUNC_1(
 const struct snd_kcontrol *VAR_0)
{
 struct dapm_kcontrol_data *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->wlist;
}

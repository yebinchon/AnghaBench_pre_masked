
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget_list {int num_widgets; struct snd_soc_dapm_widget** widgets; } ;
struct snd_soc_dapm_widget {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct dapm_kcontrol_data {struct snd_soc_dapm_widget_list* wlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_dapm_widget_list* FUNC_0 (struct snd_soc_dapm_widget_list*,int ,int ) ;
 struct dapm_kcontrol_data* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_soc_dapm_widget_list*,int ,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
 struct snd_soc_dapm_widget *VAR_4)
{
 struct dapm_kcontrol_data *VAR_5 = FUNC_1(VAR_3);
 struct snd_soc_dapm_widget_list *VAR_6;
 unsigned int VAR_7;

 if (VAR_5->wlist)
  VAR_7 = VAR_5->wlist->num_widgets + 1;
 else
  VAR_7 = 1;

 VAR_6 = FUNC_0(VAR_5->wlist,
        FUNC_2(VAR_6, VAR_2, VAR_7),
        VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->widgets[VAR_7 - 1] = VAR_4;
 VAR_6->num_widgets = VAR_7;

 VAR_5->wlist = VAR_6;

 return 0;
}

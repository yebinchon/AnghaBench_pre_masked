
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget_list {int num_widgets; struct snd_soc_dapm_widget** widgets; } ;
struct snd_soc_dapm_widget {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct snd_soc_dapm_widget_list *VAR_0,
  struct snd_soc_dapm_widget *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_widgets; VAR_2++) {
  if (VAR_1 == VAR_0->widgets[VAR_2])
   return 1;
 }

 return 0;
}

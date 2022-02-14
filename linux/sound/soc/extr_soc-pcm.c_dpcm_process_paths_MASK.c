
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_dapm_widget_list {int dummy; } ;


 int FUNC_0 (struct snd_soc_pcm_runtime*,int,struct snd_soc_dapm_widget_list**) ;
 int FUNC_1 (struct snd_soc_pcm_runtime*,int,struct snd_soc_dapm_widget_list**) ;

int FUNC_2(struct snd_soc_pcm_runtime *VAR_0,
 int VAR_1, struct snd_soc_dapm_widget_list **VAR_2, int VAR_3)
{
 if (VAR_3)
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2);
}

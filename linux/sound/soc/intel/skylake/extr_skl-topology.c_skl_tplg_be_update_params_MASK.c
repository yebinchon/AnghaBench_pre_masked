
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dummy; } ;
struct snd_soc_dai {struct snd_soc_dapm_widget* capture_widget; struct snd_soc_dapm_widget* playback_widget; } ;
struct skl_pipe_params {scalar_t__ stream; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_soc_dai*,struct snd_soc_dapm_widget*,struct skl_pipe_params*) ;
 int FUNC_1 (struct snd_soc_dai*,struct snd_soc_dapm_widget*,struct skl_pipe_params*) ;

int FUNC_2(struct snd_soc_dai *VAR_1,
    struct skl_pipe_params *VAR_2)
{
 struct snd_soc_dapm_widget *VAR_3;

 if (VAR_2->stream == VAR_0) {
  VAR_3 = VAR_1->playback_widget;

  return FUNC_1(VAR_1, VAR_3, VAR_2);

 } else {
  VAR_3 = VAR_1->capture_widget;

  return FUNC_0(VAR_1, VAR_3, VAR_2);
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dummy; } ;
struct snd_soc_dai {struct snd_soc_dapm_widget* capture_widget; struct snd_soc_dapm_widget* playback_widget; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct snd_soc_dapm_widget *
 FUNC_0(struct snd_soc_dai *VAR_1, int VAR_2)
{
 if (VAR_2 == VAR_0)
  return VAR_1->playback_widget;
 else
  return VAR_1->capture_widget;
}

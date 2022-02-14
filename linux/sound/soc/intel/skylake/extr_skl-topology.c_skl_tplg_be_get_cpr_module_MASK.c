
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dummy; } ;
struct snd_soc_dai {struct snd_soc_dapm_widget* capture_widget; struct snd_soc_dapm_widget* playback_widget; } ;
struct skl_module_cfg {int dummy; } ;


 int VAR_0 ;
 struct skl_module_cfg* FUNC_0 (struct snd_soc_dai*,struct snd_soc_dapm_widget*) ;
 struct skl_module_cfg* FUNC_1 (struct snd_soc_dai*,struct snd_soc_dapm_widget*) ;

struct skl_module_cfg *
FUNC_2(struct snd_soc_dai *VAR_1, int VAR_2)
{
 struct snd_soc_dapm_widget *VAR_3;
 struct skl_module_cfg *VAR_4;

 if (VAR_2 == VAR_0) {
  VAR_3 = VAR_1->playback_widget;
  VAR_4 = FUNC_1(VAR_1, VAR_3);
 } else {
  VAR_3 = VAR_1->capture_widget;
  VAR_4 = FUNC_0(VAR_1, VAR_3);
 }
 return VAR_4;
}

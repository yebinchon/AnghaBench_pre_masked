
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {struct snd_soc_dai* priv; } ;
struct snd_soc_dai {struct g12a_tohdmitx_input* playback_dma_data; } ;
struct g12a_tohdmitx_input {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 struct snd_soc_dapm_widget* FUNC_1 (struct snd_soc_dapm_widget*) ;

__attribute__((used)) static struct g12a_tohdmitx_input *
FUNC_2(struct snd_soc_dapm_widget *VAR_0)
{
 struct snd_soc_dapm_widget *VAR_1 =
  FUNC_1(VAR_0);
 struct snd_soc_dai *VAR_2;

 if (FUNC_0(!VAR_1))
  return ((void*)0);

 VAR_2 = VAR_1->priv;

 return VAR_2->playback_dma_data;
}

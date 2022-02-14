
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dummy; } ;
struct snd_soc_dai {struct axg_tdm_stream* capture_dma_data; } ;
struct axg_tdm_stream {int dummy; } ;


 struct snd_soc_dai* FUNC_0 (struct snd_soc_dapm_widget*) ;

__attribute__((used)) static struct axg_tdm_stream *
FUNC_1(struct snd_soc_dapm_widget *VAR_0)
{
 struct snd_soc_dai *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return ((void*)0);

 return VAR_1->capture_dma_data;
}

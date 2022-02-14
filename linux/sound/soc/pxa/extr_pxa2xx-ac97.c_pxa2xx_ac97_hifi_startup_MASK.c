
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_dmaengine_dai_dma_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct snd_dmaengine_dai_dma_data VAR_1 ;
 struct snd_dmaengine_dai_dma_data VAR_2 ;
 int FUNC_0 (struct snd_soc_dai*,struct snd_pcm_substream*,struct snd_dmaengine_dai_dma_data*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_3,
        struct snd_soc_dai *VAR_4)
{
 struct snd_dmaengine_dai_dma_data *VAR_5;

 if (VAR_3->stream == VAR_0)
  VAR_5 = &VAR_2;
 else
  VAR_5 = &VAR_1;

 FUNC_0(VAR_4, VAR_3, VAR_5);

 return 0;
}

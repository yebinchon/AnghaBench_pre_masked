
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniperif {scalar_t__ type; } ;
struct TYPE_2__ {struct uniperif* uni; } ;
struct sti_uniperiph_data {TYPE_1__ dai_data; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_dmaengine_dai_dma_data {int maxburst; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 struct snd_dmaengine_dai_dma_data* FUNC_1 (struct snd_soc_dai*,struct snd_pcm_substream*) ;
 struct sti_uniperiph_data* FUNC_2 (struct snd_soc_dai*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;

int FUNC_4(struct snd_pcm_substream *VAR_2,
    struct snd_pcm_hw_params *VAR_3,
    struct snd_soc_dai *VAR_4)
{
 struct sti_uniperiph_data *VAR_5 = FUNC_2(VAR_4);
 struct uniperif *VAR_6 = VAR_5->dai_data.uni;
 struct snd_dmaengine_dai_dma_data *VAR_7;
 int VAR_8;

 if (VAR_6->type == VAR_0)

  VAR_8 = FUNC_3(VAR_3) / 32;
 else
  VAR_8 = FUNC_0(VAR_3) * VAR_1;

 VAR_7 = FUNC_1(VAR_4, VAR_2);
 VAR_7->maxburst = VAR_8;

 return 0;
}

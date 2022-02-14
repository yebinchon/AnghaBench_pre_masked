
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* cpu_dai; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {int hw; } ;
struct snd_dmaengine_dai_dma_data {int chan_name; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct snd_pcm_substream*,int ) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int ,int) ;
 struct snd_dmaengine_dai_dma_data* FUNC_4 (TYPE_1__*,struct snd_pcm_substream*) ;

int FUNC_5(struct snd_pcm_substream *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_4->private_data;
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 struct snd_dmaengine_dai_dma_data *VAR_7;
 int VAR_8;

 VAR_6->hw = VAR_3;

 VAR_7 = FUNC_4(VAR_5->cpu_dai, VAR_4);
 if (!VAR_7)
  return 0;






 VAR_8 = FUNC_3(VAR_6, 0,
  VAR_2, 32);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_3(VAR_6, 0,
  VAR_0, 32);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_6,
         VAR_1);
 if (VAR_8 < 0)
  return VAR_8;

 return FUNC_1(
  VAR_4, FUNC_0(VAR_5->cpu_dai->dev,
           VAR_7->chan_name));
}

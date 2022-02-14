
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_dmaengine_dai_dma_data {int dummy; } ;
struct dma_slave_config {int dummy; } ;


 int FUNC_0 (struct snd_pcm_substream*,struct snd_dmaengine_dai_dma_data*,struct dma_slave_config*) ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,struct dma_slave_config*) ;
 struct snd_dmaengine_dai_dma_data* FUNC_2 (int ,struct snd_pcm_substream*) ;

int FUNC_3(struct snd_pcm_substream *VAR_0,
 struct snd_pcm_hw_params *VAR_1, struct dma_slave_config *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_0->private_data;
 struct snd_dmaengine_dai_dma_data *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_3->cpu_dai, VAR_0);

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_0(VAR_0, VAR_4,
  VAR_2);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_dmaengine_dai_dma_data {int addr_width; int addr; } ;
struct dma_slave_config {int dst_maxburst; int dst_addr_width; int dst_addr; } ;


 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,struct dma_slave_config*) ;
 struct snd_dmaengine_dai_dma_data* FUNC_2 (int ,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
 struct snd_pcm_hw_params *VAR_1, struct dma_slave_config *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1) / 2;
 struct snd_soc_pcm_runtime *VAR_4 = VAR_0->private_data;
 struct snd_dmaengine_dai_dma_data *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_4->cpu_dai, VAR_0);

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_2->dst_addr = VAR_5->addr;
 VAR_2->dst_addr_width = VAR_5->addr_width;
 VAR_2->dst_maxburst = 4 * VAR_3;

 return 0;
}

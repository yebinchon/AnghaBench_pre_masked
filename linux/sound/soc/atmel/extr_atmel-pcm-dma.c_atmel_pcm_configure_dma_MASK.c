
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssc_device {scalar_t__ phybase; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct dma_slave_config {int dst_maxburst; int src_maxburst; scalar_t__ src_addr; scalar_t__ dst_addr; } ;
struct atmel_pcm_dma_params {int dma_intr_handler; struct ssc_device* ssc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,struct dma_slave_config*) ;
 struct atmel_pcm_dma_params* FUNC_2 (int ,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3,
 struct snd_pcm_hw_params *VAR_4, struct dma_slave_config *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_3->private_data;
 struct atmel_pcm_dma_params *VAR_7;
 struct ssc_device *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_6->cpu_dai, VAR_3);
 VAR_8 = VAR_7->ssc;

 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_9) {
  FUNC_0("atmel-pcm: hwparams to dma slave configure failed\n");
  return VAR_9;
 }

 VAR_5->dst_addr = VAR_8->phybase + VAR_1;
 VAR_5->dst_maxburst = 1;

 VAR_5->src_addr = VAR_8->phybase + VAR_0;
 VAR_5->src_maxburst = 1;

 VAR_7->dma_intr_handler = VAR_2;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct dmaengine_pcm_runtime_data {struct dma_chan* dma_chan; } ;
struct dma_chan {int dummy; } ;


 struct dmaengine_pcm_runtime_data* FUNC_0 (struct snd_pcm_substream*) ;

struct dma_chan *FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct dmaengine_pcm_runtime_data *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->dma_chan;
}

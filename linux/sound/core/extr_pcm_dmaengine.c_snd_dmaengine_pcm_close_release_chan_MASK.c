
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct dmaengine_pcm_runtime_data {int dma_chan; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dmaengine_pcm_runtime_data*) ;
 struct dmaengine_pcm_runtime_data* FUNC_3 (struct snd_pcm_substream*) ;

int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct dmaengine_pcm_runtime_data *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1->dma_chan);
 FUNC_0(VAR_1->dma_chan);
 FUNC_2(VAR_1);

 return 0;
}

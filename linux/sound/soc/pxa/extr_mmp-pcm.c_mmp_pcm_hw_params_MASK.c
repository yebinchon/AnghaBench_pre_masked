
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dma_buffer; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct dma_slave_config {int dummy; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct dma_chan*,struct dma_slave_config*) ;
 struct dma_chan* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,struct dma_slave_config*) ;
 int FUNC_3 (struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
         struct snd_pcm_hw_params *VAR_1)
{
 struct dma_chan *VAR_2 = FUNC_1(VAR_0);
 struct dma_slave_config VAR_3;
 int VAR_4;

 VAR_4 =
     FUNC_2(VAR_0, VAR_1,
         &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_3(VAR_0, &VAR_0->dma_buffer);

 return 0;
}

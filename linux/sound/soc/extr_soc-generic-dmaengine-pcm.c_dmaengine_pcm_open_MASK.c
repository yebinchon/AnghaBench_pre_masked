
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; struct snd_soc_pcm_runtime* private_data; } ;
struct dmaengine_pcm {struct dma_chan** chan; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*,struct dma_chan*) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;
 struct dmaengine_pcm* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct snd_soc_component *VAR_3 =
  FUNC_2(VAR_2, VAR_0);
 struct dmaengine_pcm *VAR_4 = FUNC_3(VAR_3);
 struct dma_chan *VAR_5 = VAR_4->chan[VAR_1->stream];
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_1, VAR_5);
}

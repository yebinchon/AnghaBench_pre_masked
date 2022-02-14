
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_dmaengine_dai_dma_data {int filter_data; } ;
struct dmaengine_pcm {int flags; TYPE_1__* config; struct dma_chan** chan; } ;
struct dma_chan {int dummy; } ;
typedef int * dma_filter_fn ;
struct TYPE_2__ {int * compat_filter_fn; struct dma_chan* (* compat_request_channel ) (struct snd_soc_pcm_runtime*,struct snd_pcm_substream*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct dma_chan* FUNC_0 (int *,int ) ;
 struct snd_dmaengine_dai_dma_data* FUNC_1 (int ,struct snd_pcm_substream*) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;
 struct dmaengine_pcm* FUNC_3 (struct snd_soc_component*) ;
 struct dma_chan* FUNC_4 (struct snd_soc_pcm_runtime*,struct snd_pcm_substream*) ;

__attribute__((used)) static struct dma_chan *FUNC_5(
 struct snd_soc_pcm_runtime *VAR_2,
 struct snd_pcm_substream *VAR_3)
{
 struct snd_soc_component *VAR_4 =
  FUNC_2(VAR_2, VAR_0);
 struct dmaengine_pcm *VAR_5 = FUNC_3(VAR_4);
 struct snd_dmaengine_dai_dma_data *VAR_6;
 dma_filter_fn VAR_7 = ((void*)0);

 VAR_6 = FUNC_1(VAR_2->cpu_dai, VAR_3);

 if ((VAR_5->flags & VAR_1) && VAR_5->chan[0])
  return VAR_5->chan[0];

 if (VAR_5->config && VAR_5->config->compat_request_channel)
  return VAR_5->config->compat_request_channel(VAR_2, VAR_3);

 if (VAR_5->config)
  VAR_7 = VAR_5->config->compat_filter_fn;

 return FUNC_0(VAR_7, VAR_6->filter_data);
}

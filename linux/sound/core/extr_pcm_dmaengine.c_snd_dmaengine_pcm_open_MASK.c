
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct dmaengine_pcm_runtime_data {struct dma_chan* dma_chan; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {struct dmaengine_pcm_runtime_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dmaengine_pcm_runtime_data* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(struct snd_pcm_substream *VAR_4,
 struct dma_chan *VAR_5)
{
 struct dmaengine_pcm_runtime_data *VAR_6;
 int VAR_7;

 if (!VAR_5)
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_4->runtime,
         VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dma_chan = VAR_5;

 VAR_4->runtime->private_data = VAR_6;

 return 0;
}

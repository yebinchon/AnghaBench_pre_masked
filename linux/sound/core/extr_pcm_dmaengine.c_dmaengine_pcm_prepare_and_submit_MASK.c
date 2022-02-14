
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct dmaengine_pcm_runtime_data {int cookie; scalar_t__ pos; struct dma_chan* dma_chan; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {struct snd_pcm_substream* callback_param; int callback; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
struct TYPE_2__ {int dma_addr; int no_period_wakeup; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dma_async_tx_descriptor* FUNC_0 (struct dma_chan*,int ,int ,int ,int,unsigned long) ;
 int FUNC_1 (struct dma_async_tx_descriptor*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 struct dmaengine_pcm_runtime_data* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_4)
{
 struct dmaengine_pcm_runtime_data *VAR_5 = FUNC_5(VAR_4);
 struct dma_chan *VAR_6 = VAR_5->dma_chan;
 struct dma_async_tx_descriptor *VAR_7;
 enum dma_transfer_direction VAR_8;
 unsigned long VAR_9 = VAR_0;

 VAR_8 = FUNC_4(VAR_4);

 if (!VAR_4->runtime->no_period_wakeup)
  VAR_9 |= VAR_1;

 VAR_5->pos = 0;
 VAR_7 = FUNC_0(VAR_6,
  VAR_4->runtime->dma_addr,
  FUNC_2(VAR_4),
  FUNC_3(VAR_4), VAR_8, VAR_9);

 if (!VAR_7)
  return -VAR_2;

 VAR_7->callback = VAR_3;
 VAR_7->callback_param = VAR_4;
 VAR_5->cookie = FUNC_1(VAR_7);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pcm_dma_private {int hw_chan; int dma_addr_offset; struct sprd_pcm_dma_data* data; } ;
struct sprd_pcm_dma_data {int pre_pointer; int cookie; int chan; } ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_addr; scalar_t__ buffer_size; struct sprd_pcm_dma_private* private_data; } ;
struct dma_tx_state {int residue; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct snd_pcm_runtime*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,struct dma_tx_state*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 struct snd_soc_component* FUNC_5 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_6(struct snd_pcm_substream *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_3->runtime;
 struct snd_soc_pcm_runtime *VAR_5 = VAR_3->private_data;
 struct sprd_pcm_dma_private *VAR_6 = VAR_4->private_data;
 struct snd_soc_component *VAR_7 =
  FUNC_5(VAR_5, VAR_1);
 int VAR_8[VAR_2];
 int VAR_9 = 0, VAR_10 = 0, VAR_11;
 snd_pcm_uframes_t VAR_12;
 struct dma_tx_state VAR_13;
 enum dma_status VAR_14;

 for (VAR_11 = 0; VAR_11 < VAR_6->hw_chan; VAR_11++) {
  struct sprd_pcm_dma_data *VAR_15 = &VAR_6->data[VAR_11];

  if (!VAR_15->chan)
   continue;

  VAR_14 = FUNC_2(VAR_15->chan, VAR_15->cookie, &VAR_13);
  if (VAR_14 == VAR_0) {
   FUNC_1(VAR_7->dev,
    "failed to get dma channel %d status\n", VAR_11);
   return 0;
  }





  VAR_8[VAR_11] = VAR_13.residue - VAR_4->dma_addr -
   VAR_11 * VAR_6->dma_addr_offset;

  if (VAR_11 == 0) {
   VAR_9 = VAR_8[VAR_11];
   VAR_10 = VAR_8[VAR_11] < VAR_15->pre_pointer ? 1 : 0;
  } else {
   VAR_10 ^= VAR_8[VAR_11] < VAR_15->pre_pointer ? 1 : 0;

   if (VAR_10)
    VAR_9 =
     FUNC_3(VAR_8[VAR_11], VAR_8[VAR_11 - 1]) << 1;
   else
    VAR_9 =
     FUNC_4(VAR_8[VAR_11], VAR_8[VAR_11 - 1]) << 1;
  }

  VAR_15->pre_pointer = VAR_8[VAR_11];
 }

 VAR_12 = FUNC_0(VAR_4, VAR_9);
 if (VAR_12 == VAR_4->buffer_size)
  VAR_12 = 0;

 return VAR_12;
}

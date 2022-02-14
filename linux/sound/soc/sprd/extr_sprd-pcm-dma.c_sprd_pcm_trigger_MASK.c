
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sprd_pcm_dma_private {int hw_chan; struct sprd_pcm_dma_data* data; } ;
struct sprd_pcm_dma_data {int chan; int cookie; int desc; } ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; TYPE_1__* runtime; } ;
struct TYPE_2__ {struct sprd_pcm_dma_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct snd_soc_component* FUNC_7 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 struct sprd_pcm_dma_private *VAR_4 =
  VAR_2->runtime->private_data;
 struct snd_soc_pcm_runtime *VAR_5 = VAR_2->private_data;
 struct snd_soc_component *VAR_6 =
  FUNC_7(VAR_5, VAR_0);
 int VAR_7 = 0, VAR_8;

 switch (VAR_3) {
 case 130:
  for (VAR_8 = 0; VAR_8 < VAR_4->hw_chan; VAR_8++) {
   struct sprd_pcm_dma_data *VAR_9 = &VAR_4->data[VAR_8];

   if (!VAR_9->desc)
    continue;

   VAR_9->cookie = FUNC_5(VAR_9->desc);
   VAR_7 = FUNC_2(VAR_9->cookie);
   if (VAR_7) {
    FUNC_0(VAR_6->dev,
     "failed to submit dma request: %d\n",
     VAR_7);
    return VAR_7;
   }

   FUNC_1(VAR_9->chan);
  }

  break;
 case 131:
 case 132:
  for (VAR_8 = 0; VAR_8 < VAR_4->hw_chan; VAR_8++) {
   struct sprd_pcm_dma_data *VAR_10 = &VAR_4->data[VAR_8];

   if (VAR_10->chan)
    FUNC_4(VAR_10->chan);
  }

  break;
 case 129:
  for (VAR_8 = 0; VAR_8 < VAR_4->hw_chan; VAR_8++) {
   struct sprd_pcm_dma_data *VAR_11 = &VAR_4->data[VAR_8];

   if (VAR_11->chan)
    FUNC_6(VAR_11->chan);
  }

  break;
 case 128:
 case 133:
  for (VAR_8 = 0; VAR_8 < VAR_4->hw_chan; VAR_8++) {
   struct sprd_pcm_dma_data *VAR_12 = &VAR_4->data[VAR_8];

   if (VAR_12->chan)
    FUNC_3(VAR_12->chan);
  }

  break;
 default:
  VAR_7 = -VAR_1;
 }

 return VAR_7;
}

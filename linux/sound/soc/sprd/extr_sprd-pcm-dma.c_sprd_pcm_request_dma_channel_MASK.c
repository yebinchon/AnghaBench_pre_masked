
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pcm_dma_private {struct sprd_pcm_dma_data* data; struct sprd_pcm_dma_params* params; } ;
struct sprd_pcm_dma_params {int* chan_name; } ;
struct sprd_pcm_dma_data {int chan; } ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct sprd_pcm_dma_private* private_data; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,int) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4,
     int VAR_5)
{
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 struct sprd_pcm_dma_private *VAR_7 = VAR_6->private_data;
 struct snd_soc_pcm_runtime *VAR_8 = VAR_4->private_data;
 struct snd_soc_component *VAR_9 =
  FUNC_2(VAR_8, VAR_0);
 struct device *VAR_10 = VAR_9->dev;
 struct sprd_pcm_dma_params *VAR_11 = VAR_7->params;
 int VAR_12;

 if (VAR_5 > VAR_3) {
  FUNC_0(VAR_10, "invalid dma channel number:%d\n", VAR_5);
  return -VAR_1;
 }

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  struct sprd_pcm_dma_data *VAR_13 = &VAR_7->data[VAR_12];

  VAR_13->chan = FUNC_1(VAR_10,
             VAR_11->chan_name[VAR_12]);
  if (!VAR_13->chan) {
   FUNC_0(VAR_10, "failed to request dma channel:%s\n",
    VAR_11->chan_name[VAR_12]);
   FUNC_3(VAR_4);
   return -VAR_2;
  }
 }

 return 0;
}

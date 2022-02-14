
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sprd_pcm_dma_private {int hw_chan; struct sprd_pcm_dma_data* data; } ;
struct sprd_pcm_dma_data {int phys; int virt; } ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int periods_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; struct sprd_pcm_dma_private* private_data; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct sprd_pcm_dma_private*) ;
 int FUNC_1 (struct device*,int,int ,int ) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_2->runtime;
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct sprd_pcm_dma_private *VAR_5 = VAR_3->private_data;
 struct snd_soc_component *VAR_6 =
  FUNC_2(VAR_4, VAR_0);
 struct device *VAR_7 = VAR_6->dev;
 int VAR_8 = VAR_3->hw.periods_max * VAR_1;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_5->hw_chan; VAR_9++) {
  struct sprd_pcm_dma_data *VAR_10 = &VAR_5->data[VAR_9];

  FUNC_1(VAR_7, VAR_8, VAR_10->virt, VAR_10->phys);
 }

 FUNC_0(VAR_7, VAR_5);

 return 0;
}

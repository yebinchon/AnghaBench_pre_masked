
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sprd_compr_stream {int num_channels; TYPE_1__* compr_ops; int iram_buffer; int compr_buffer; struct sprd_compr_dma* dma; } ;
struct sprd_compr_dma {int * chan; } ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_compr_stream {int direction; struct snd_soc_pcm_runtime* private_data; struct snd_compr_runtime* runtime; } ;
struct snd_compr_runtime {struct sprd_compr_stream* private_data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* close ) (int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct sprd_compr_stream*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct snd_soc_component* FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct snd_compr_stream *VAR_1)
{
 struct snd_compr_runtime *VAR_2 = VAR_1->runtime;
 struct sprd_compr_stream *VAR_3 = VAR_2->private_data;
 struct snd_soc_pcm_runtime *VAR_4 = VAR_1->private_data;
 struct snd_soc_component *VAR_5 =
  FUNC_3(VAR_4, VAR_0);
 struct device *VAR_6 = VAR_5->dev;
 int VAR_7 = VAR_1->direction, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3->num_channels; VAR_8++) {
  struct sprd_compr_dma *VAR_9 = &VAR_3->dma[VAR_8];

  if (VAR_9->chan) {
   FUNC_1(VAR_9->chan);
   VAR_9->chan = ((void*)0);
  }
 }

 FUNC_2(&VAR_3->compr_buffer);
 FUNC_2(&VAR_3->iram_buffer);

 VAR_3->compr_ops->close(VAR_7);

 FUNC_0(VAR_6, VAR_3);
 return 0;
}

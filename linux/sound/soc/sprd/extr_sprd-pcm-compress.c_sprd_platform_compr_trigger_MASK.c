
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sprd_compr_stream {int num_channels; int received_total; TYPE_1__* compr_ops; struct sprd_compr_dma* dma; int received_stage1; int received_stage0; int stage1_pointer; int copied_total; } ;
struct sprd_compr_dma {int chan; int cookie; int desc; } ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_compr_stream {int direction; struct snd_soc_pcm_runtime* private_data; struct snd_compr_runtime* runtime; } ;
struct snd_compr_runtime {struct sprd_compr_stream* private_data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* start ) (int) ;int (* stop ) (int) ;int (* pause ) (int) ;int (* pause_release ) (int) ;int (* drain ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;


 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct snd_soc_component* FUNC_7 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct snd_compr_stream *VAR_3,
           int VAR_4)
{
 struct snd_compr_runtime *VAR_5 = VAR_3->runtime;
 struct sprd_compr_stream *VAR_6 = VAR_5->private_data;
 struct snd_soc_pcm_runtime *VAR_7 = VAR_3->private_data;
 struct snd_soc_component *VAR_8 =
  FUNC_7(VAR_7, VAR_0);
 struct device *VAR_9 = VAR_8->dev;
 int VAR_10 = VAR_6->num_channels, VAR_11 = 0, VAR_12;
 int VAR_13 = VAR_3->direction;

 if (VAR_3->direction != VAR_2) {
  FUNC_0(VAR_9, "unsupported compress direction\n");
  return -VAR_1;
 }

 switch (VAR_4) {
 case 132:
  for (VAR_12 = VAR_10 - 1; VAR_12 >= 0; VAR_12--) {
   struct sprd_compr_dma *VAR_14 = &VAR_6->dma[VAR_12];

   if (!VAR_14->desc)
    continue;

   VAR_14->cookie = FUNC_5(VAR_14->desc);
   VAR_11 = FUNC_2(VAR_14->cookie);
   if (VAR_11) {
    FUNC_0(VAR_9, "failed to submit request: %d\n",
     VAR_11);
    return VAR_11;
   }
  }

  for (VAR_12 = VAR_10 - 1; VAR_12 >= 0; VAR_12--) {
   struct sprd_compr_dma *VAR_15 = &VAR_6->dma[VAR_12];

   if (VAR_15->chan)
    FUNC_1(VAR_15->chan);
  }

  VAR_11 = VAR_6->compr_ops->start(VAR_13);
  break;

 case 131:
  for (VAR_12 = VAR_10 - 1; VAR_12 >= 0; VAR_12--) {
   struct sprd_compr_dma *VAR_16 = &VAR_6->dma[VAR_12];

   if (VAR_16->chan)
    FUNC_6(VAR_16->chan);
  }

  VAR_6->copied_total = 0;
  VAR_6->stage1_pointer = 0;
  VAR_6->received_total = 0;
  VAR_6->received_stage0 = 0;
  VAR_6->received_stage1 = 0;

  VAR_11 = VAR_6->compr_ops->stop(VAR_13);
  break;

 case 130:
 case 135:
  for (VAR_12 = VAR_10 - 1; VAR_12 >= 0; VAR_12--) {
   struct sprd_compr_dma *VAR_17 = &VAR_6->dma[VAR_12];

   if (VAR_17->chan)
    FUNC_3(VAR_17->chan);
  }

  VAR_11 = VAR_6->compr_ops->pause(VAR_13);
  break;

 case 133:
 case 134:
  for (VAR_12 = VAR_10 - 1; VAR_12 >= 0; VAR_12--) {
   struct sprd_compr_dma *VAR_18 = &VAR_6->dma[VAR_12];

   if (VAR_18->chan)
    FUNC_4(VAR_18->chan);
  }

  VAR_11 = VAR_6->compr_ops->pause_release(VAR_13);
  break;

 case 128:
 case 129:
  VAR_11 = VAR_6->compr_ops->drain(VAR_6->received_total);
  break;

 default:
  VAR_11 = -VAR_1;
  break;
 }

 return VAR_11;
}

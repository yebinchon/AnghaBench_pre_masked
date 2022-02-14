
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct cs5535audio_dma {TYPE_2__* ops; } ;
struct cs5535audio {int reg_lock; TYPE_3__* card; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int (* disable_dma ) (struct cs5535audio*) ;int (* enable_dma ) (struct cs5535audio*) ;int (* pause_dma ) (struct cs5535audio*) ;} ;
struct TYPE_4__ {struct cs5535audio_dma* private_data; } ;


 int VAR_0 ;






 int FUNC_0 (int ,char*) ;
 struct cs5535audio* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cs5535audio*) ;
 int FUNC_5 (struct cs5535audio*) ;
 int FUNC_6 (struct cs5535audio*) ;
 int FUNC_7 (struct cs5535audio*) ;
 int FUNC_8 (struct cs5535audio*) ;
 int FUNC_9 (struct cs5535audio*) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct cs5535audio *VAR_3 = FUNC_1(VAR_1);
 struct cs5535audio_dma *VAR_4 = VAR_1->runtime->private_data;
 int VAR_5 = 0;

 FUNC_2(&VAR_3->reg_lock);
 switch (VAR_2) {
 case 133:
  VAR_4->ops->pause_dma(VAR_3);
  break;
 case 132:
  VAR_4->ops->enable_dma(VAR_3);
  break;
 case 130:
  VAR_4->ops->enable_dma(VAR_3);
  break;
 case 131:
  VAR_4->ops->enable_dma(VAR_3);
  break;
 case 129:
  VAR_4->ops->disable_dma(VAR_3);
  break;
 case 128:
  VAR_4->ops->disable_dma(VAR_3);
  break;
 default:
  FUNC_0(VAR_3->card->dev, "unhandled trigger\n");
  VAR_5 = -VAR_0;
  break;
 }
 FUNC_3(&VAR_3->reg_lock);
 return VAR_5;
}

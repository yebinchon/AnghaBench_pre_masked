
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct platform_device {size_t id; } ;
struct atmel_ssc_info {TYPE_1__* ssc; struct atmel_pcm_dma_params** dma_params; } ;
struct atmel_pcm_dma_params {TYPE_2__* mask; } ;
struct TYPE_4__ {int ssc_disable; int ssc_enable; } ;
struct TYPE_3__ {int regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 struct atmel_ssc_info* VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 struct platform_device* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3,
        int VAR_4, struct snd_soc_dai *VAR_5)
{
 struct platform_device *VAR_6 = FUNC_1(VAR_5->dev);
 struct atmel_ssc_info *VAR_7 = &VAR_2[VAR_6->id];
 struct atmel_pcm_dma_params *VAR_8;
 int VAR_9;

 if (VAR_3->stream == VAR_1)
  VAR_9 = 0;
 else
  VAR_9 = 1;

 VAR_8 = VAR_7->dma_params[VAR_9];

 switch (VAR_4) {
 case 128:
 case 129:
 case 130:
  FUNC_0(VAR_7->ssc->regs, VAR_0, VAR_8->mask->ssc_enable);
  break;
 default:
  FUNC_0(VAR_7->ssc->regs, VAR_0, VAR_8->mask->ssc_disable);
  break;
 }

 return 0;
}

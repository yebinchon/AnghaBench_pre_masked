
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct platform_device {size_t id; } ;
struct atmel_ssc_info {TYPE_2__* ssc; struct atmel_pcm_dma_params** dma_params; } ;
struct atmel_pcm_dma_params {TYPE_1__* mask; } ;
struct TYPE_4__ {int regs; } ;
struct TYPE_3__ {int ssc_error; int ssc_disable; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int ) ;
 struct atmel_ssc_info* VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct platform_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5,
        struct snd_soc_dai *VAR_6)
{
 struct platform_device *VAR_7 = FUNC_3(VAR_6->dev);
 struct atmel_ssc_info *VAR_8 = &VAR_4[VAR_7->id];
 struct atmel_pcm_dma_params *VAR_9;
 int VAR_10;

 if (VAR_5->stream == VAR_2)
  VAR_10 = 0;
 else
  VAR_10 = 1;

 VAR_9 = VAR_8->dma_params[VAR_10];

 FUNC_2(VAR_8->ssc->regs, VAR_0, VAR_9->mask->ssc_disable);
 FUNC_2(VAR_8->ssc->regs, VAR_1, VAR_9->mask->ssc_error);

 FUNC_0("%s enabled SSC_SR=0x%08x\n",
   VAR_10 ? "receive" : "transmit",
   FUNC_1(VAR_8->ssc->regs, VAR_3));
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct platform_device {size_t id; } ;
struct atmel_ssc_info {int dir_mask; TYPE_1__* ssc; scalar_t__ forced_divider; scalar_t__ rcmr_period; scalar_t__ tcmr_period; scalar_t__ cmr_div; scalar_t__ initialized; struct atmel_pcm_dma_params** dma_params; } ;
struct atmel_pcm_dma_params {int * substream; int * ssc; } ;
struct TYPE_2__ {int clk; int regs; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct atmel_ssc_info*) ;
 int FUNC_3 (char*) ;
 struct atmel_ssc_info* VAR_3 ;
 int FUNC_4 (int ,int ,int ) ;
 struct platform_device* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct snd_pcm_substream *VAR_4,
          struct snd_soc_dai *VAR_5)
{
 struct platform_device *VAR_6 = FUNC_5(VAR_5->dev);
 struct atmel_ssc_info *VAR_7 = &VAR_3[VAR_6->id];
 struct atmel_pcm_dma_params *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_4->stream == VAR_2)
  VAR_9 = 0;
 else
  VAR_9 = 1;

 VAR_8 = VAR_7->dma_params[VAR_9];

 if (VAR_8 != ((void*)0)) {
  VAR_8->ssc = ((void*)0);
  VAR_8->substream = ((void*)0);
  VAR_7->dma_params[VAR_9] = ((void*)0);
 }

 VAR_10 = 1 << VAR_9;

 VAR_7->dir_mask &= ~VAR_10;
 if (!VAR_7->dir_mask) {
  if (VAR_7->initialized) {
   FUNC_2(VAR_7->ssc->irq, VAR_7);
   VAR_7->initialized = 0;
  }


  FUNC_4(VAR_7->ssc->regs, VAR_0, FUNC_0(VAR_1));

  VAR_7->cmr_div = VAR_7->tcmr_period = VAR_7->rcmr_period = 0;
  VAR_7->forced_divider = 0;
 }


 FUNC_3("atmel_ssc_dai: Stopping clock\n");
 FUNC_1(VAR_7->ssc->clk);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {TYPE_2__* capture_dma_data; TYPE_1__* playback_dma_data; } ;
struct TYPE_4__ {int * filter_data; } ;
struct TYPE_3__ {int * filter_data; } ;
struct ep93xx_ac97_info {TYPE_2__ dma_params_rx; TYPE_1__ dma_params_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ep93xx_ac97_info* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_2)
{
 struct ep93xx_ac97_info *VAR_3 = FUNC_0(VAR_2);

 VAR_3->dma_params_tx.filter_data = &VAR_1;
 VAR_3->dma_params_rx.filter_data = &VAR_0;

 VAR_2->playback_dma_data = &VAR_3->dma_params_tx;
 VAR_2->capture_dma_data = &VAR_3->dma_params_rx;

 return 0;
}

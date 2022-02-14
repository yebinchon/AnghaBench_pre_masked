
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {TYPE_1__* capture_dma_data; TYPE_2__* playback_dma_data; } ;
struct TYPE_3__ {int * filter_data; } ;
struct TYPE_4__ {int * filter_data; } ;
struct ep93xx_i2s_info {TYPE_1__ dma_params_rx; TYPE_2__ dma_params_tx; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 struct ep93xx_i2s_info* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_3)
{
 struct ep93xx_i2s_info *VAR_4 = FUNC_0(VAR_3);

 VAR_4->dma_params_tx.filter_data =
  &VAR_2[VAR_1];
 VAR_4->dma_params_rx.filter_data =
  &VAR_2[VAR_0];

 VAR_3->playback_dma_data = &VAR_4->dma_params_tx;
 VAR_3->capture_dma_data = &VAR_4->dma_params_rx;

 return 0;
}

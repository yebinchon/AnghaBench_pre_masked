
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * filter_data; } ;
struct spdif_in_dev {TYPE_1__ dma_params_rx; int dma_params; } ;
struct snd_soc_dai {TYPE_1__* capture_dma_data; } ;


 struct spdif_in_dev* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_0)
{
 struct spdif_in_dev *VAR_1 = FUNC_0(VAR_0);

 VAR_1->dma_params_rx.filter_data = &VAR_1->dma_params;
 VAR_0->capture_dma_data = &VAR_1->dma_params_rx;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * filter_data; } ;
struct spdif_out_dev {TYPE_1__ dma_params_tx; int dma_params; } ;
struct snd_soc_dai {TYPE_1__* playback_dma_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_dai*,int ,int ) ;
 struct spdif_out_dev* FUNC_2 (struct snd_soc_dai*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_1)
{
 struct spdif_out_dev *VAR_2 = FUNC_2(VAR_1);

 VAR_2->dma_params_tx.filter_data = &VAR_2->dma_params;
 VAR_1->playback_dma_data = &VAR_2->dma_params_tx;

 return FUNC_1(VAR_1, VAR_0,
    FUNC_0(VAR_0));
}

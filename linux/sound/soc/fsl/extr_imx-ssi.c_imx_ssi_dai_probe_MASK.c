
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct snd_soc_dai {TYPE_2__* capture_dma_data; TYPE_1__* playback_dma_data; int dev; } ;
struct TYPE_4__ {int maxburst; } ;
struct TYPE_3__ {int maxburst; } ;
struct imx_ssi {TYPE_2__ dma_params_rx; TYPE_1__ dma_params_tx; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct imx_ssi* FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_dai*,struct imx_ssi*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_1)
{
 struct imx_ssi *VAR_2 = FUNC_2(VAR_1->dev);
 uint32_t VAR_3;

 FUNC_3(VAR_1, VAR_2);

 VAR_3 = FUNC_1(VAR_2->dma_params_tx.maxburst) |
  FUNC_0(VAR_2->dma_params_rx.maxburst);
 FUNC_4(VAR_3, VAR_2->base + VAR_0);


 VAR_1->playback_dma_data = &VAR_2->dma_params_tx;
 VAR_1->capture_dma_data = &VAR_2->dma_params_rx;

 return 0;
}

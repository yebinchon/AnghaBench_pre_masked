
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ux500_msp_i2s_drvdata {TYPE_3__* msp; } ;
struct snd_soc_dai {int dev; } ;
struct snd_dmaengine_dai_dma_data {int maxburst; int addr; } ;
struct TYPE_5__ {int tx_rx_addr; } ;
struct TYPE_4__ {int tx_rx_addr; } ;
struct TYPE_6__ {TYPE_2__ capture_dma_data; TYPE_1__ playback_dma_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ux500_msp_i2s_drvdata* FUNC_0 (int ) ;
 struct snd_dmaengine_dai_dma_data* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct snd_soc_dai*,struct snd_dmaengine_dai_dma_data*,struct snd_dmaengine_dai_dma_data*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2)
{
 struct ux500_msp_i2s_drvdata *VAR_3 = FUNC_0(VAR_2->dev);
 struct snd_dmaengine_dai_dma_data *VAR_4;
 struct snd_dmaengine_dai_dma_data *VAR_5;

 VAR_4 = FUNC_1(VAR_2->dev,
      sizeof(*VAR_4),
      VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_2->dev,
     sizeof(*VAR_5),
     VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->addr = VAR_3->msp->playback_dma_data.tx_rx_addr;
 VAR_5->addr = VAR_3->msp->capture_dma_data.tx_rx_addr;

 VAR_4->maxburst = 4;
 VAR_5->maxburst = 4;

 FUNC_2(VAR_2, VAR_4, VAR_5);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ux500_msp_i2s_drvdata {TYPE_1__* msp; int slot_width; } ;
struct snd_soc_dai {TYPE_4__* dev; } ;
struct msp_i2s_platform_data {int dummy; } ;
struct TYPE_8__ {struct msp_i2s_platform_data* platform_data; } ;
struct TYPE_7__ {int data_size; } ;
struct TYPE_6__ {int data_size; } ;
struct TYPE_5__ {TYPE_3__ capture_dma_data; TYPE_2__ playback_dma_data; } ;


 struct ux500_msp_i2s_drvdata* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct snd_soc_dai*,TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_0)
{
 struct ux500_msp_i2s_drvdata *VAR_1 = FUNC_0(VAR_0->dev);
 struct msp_i2s_platform_data *VAR_2 = VAR_0->dev->platform_data;
 int VAR_3;

 if (!VAR_2) {
  VAR_3 = FUNC_2(VAR_0);
  return VAR_3;
 }

 VAR_1->msp->playback_dma_data.data_size = VAR_1->slot_width;
 VAR_1->msp->capture_dma_data.data_size = VAR_1->slot_width;

 FUNC_1(VAR_0,
      &VAR_1->msp->playback_dma_data,
      &VAR_1->msp->capture_dma_data);
 return 0;
}

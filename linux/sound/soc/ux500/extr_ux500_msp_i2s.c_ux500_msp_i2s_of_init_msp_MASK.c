
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* dma_cfg; } ;
struct TYPE_3__ {void* dma_cfg; } ;
struct ux500_msp {TYPE_2__ capture_dma_data; TYPE_1__ playback_dma_data; } ;
struct stedma40_chan_cfg {int dummy; } ;
struct platform_device {int dev; } ;
struct msp_i2s_platform_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int,int ) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_2,
    struct ux500_msp *VAR_3,
    struct msp_i2s_platform_data **VAR_4)
{
 struct msp_i2s_platform_data *VAR_5;

 *VAR_4 = FUNC_0(&VAR_2->dev,
         sizeof(struct msp_i2s_platform_data),
         VAR_1);
 VAR_5 = *VAR_4;
 if (!VAR_5)
  return -VAR_0;

 VAR_3->playback_dma_data.dma_cfg = FUNC_0(&VAR_2->dev,
     sizeof(struct stedma40_chan_cfg),
     VAR_1);
 if (!VAR_3->playback_dma_data.dma_cfg)
  return -VAR_0;

 VAR_3->capture_dma_data.dma_cfg = FUNC_0(&VAR_2->dev,
     sizeof(struct stedma40_chan_cfg),
     VAR_1);
 if (!VAR_3->capture_dma_data.dma_cfg)
  return -VAR_0;

 return 0;
}

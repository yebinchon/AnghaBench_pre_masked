
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct snd_soc_dai_driver {int dummy; } ;
struct resource {scalar_t__ start; } ;
struct i2s_platform_data {int filter; int capture_dma_data; int play_dma_data; int snd_rates; } ;
struct TYPE_7__ {int max_burst; int filter; void* addr_width; scalar_t__ addr; int data; } ;
struct TYPE_8__ {TYPE_3__ pd; } ;
struct TYPE_5__ {int max_burst; int filter; void* addr_width; scalar_t__ addr; int data; } ;
struct TYPE_6__ {TYPE_1__ pd; } ;
struct dw_i2s_dev {int quirks; TYPE_4__ capture_dma_data; TYPE_2__ play_dma_data; int i2s_reg_comp1; int i2s_base; } ;


 size_t FUNC_0 (void**) ;
 size_t FUNC_1 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 void** VAR_4 ;
 int FUNC_3 (struct dw_i2s_dev*,struct snd_soc_dai_driver*,int ) ;
 size_t FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct dw_i2s_dev *VAR_5,
       struct snd_soc_dai_driver *VAR_6,
       struct resource *VAR_7,
       const struct i2s_platform_data *VAR_8)
{
 u32 VAR_9 = FUNC_4(VAR_5->i2s_base, VAR_5->i2s_reg_comp1);
 u32 VAR_10 = FUNC_1(VAR_9);
 int VAR_11;

 if (FUNC_2(VAR_10 >= FUNC_0(VAR_4)))
  return -VAR_1;

 VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_8->snd_rates);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_5->quirks & VAR_0)
  VAR_10 = 1;

 VAR_5->play_dma_data.pd.data = VAR_8->play_dma_data;
 VAR_5->capture_dma_data.pd.data = VAR_8->capture_dma_data;
 VAR_5->play_dma_data.pd.addr = VAR_7->start + VAR_3;
 VAR_5->capture_dma_data.pd.addr = VAR_7->start + VAR_2;
 VAR_5->play_dma_data.pd.max_burst = 16;
 VAR_5->capture_dma_data.pd.max_burst = 16;
 VAR_5->play_dma_data.pd.addr_width = VAR_4[VAR_10];
 VAR_5->capture_dma_data.pd.addr_width = VAR_4[VAR_10];
 VAR_5->play_dma_data.pd.filter = VAR_8->filter;
 VAR_5->capture_dma_data.pd.filter = VAR_8->filter;

 return 0;
}

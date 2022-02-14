
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
struct TYPE_7__ {size_t fifo_size; int maxburst; void* addr_width; scalar_t__ addr; } ;
struct TYPE_8__ {TYPE_3__ dt; } ;
struct TYPE_5__ {size_t fifo_size; int maxburst; void* addr_width; scalar_t__ addr; } ;
struct TYPE_6__ {TYPE_1__ dt; } ;
struct dw_i2s_dev {TYPE_4__ capture_dma_data; int capability; TYPE_2__ play_dma_data; int i2s_base; } ;


 size_t FUNC_0 (void**) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (size_t) ;
 size_t FUNC_5 (size_t) ;
 size_t FUNC_6 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int) ;
 void** VAR_8 ;
 int FUNC_8 (struct dw_i2s_dev*,struct snd_soc_dai_driver*,int ) ;
 size_t* VAR_9 ;
 size_t FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct dw_i2s_dev *VAR_10,
       struct snd_soc_dai_driver *VAR_11,
       struct resource *VAR_12)
{
 u32 VAR_13 = FUNC_9(VAR_10->i2s_base, VAR_3);
 u32 VAR_14 = FUNC_9(VAR_10->i2s_base, VAR_4);
 u32 VAR_15 = 1 << (1 + FUNC_2(VAR_13));
 u32 VAR_16 = FUNC_1(VAR_13);
 u32 VAR_17;
 int VAR_18;

 if (FUNC_7(VAR_16 >= FUNC_0(VAR_8)))
  return -VAR_2;

 VAR_18 = FUNC_8(VAR_10, VAR_11, VAR_7);
 if (VAR_18 < 0)
  return VAR_18;

 if (FUNC_4(VAR_13)) {
  VAR_17 = FUNC_5(VAR_13);

  VAR_10->capability |= VAR_0;
  VAR_10->play_dma_data.dt.addr = VAR_12->start + VAR_6;
  VAR_10->play_dma_data.dt.addr_width = VAR_8[VAR_16];
  VAR_10->play_dma_data.dt.fifo_size = VAR_15 *
   (VAR_9[VAR_17]) >> 8;
  VAR_10->play_dma_data.dt.maxburst = 16;
 }
 if (FUNC_3(VAR_13)) {
  VAR_17 = FUNC_6(VAR_14);

  VAR_10->capability |= VAR_1;
  VAR_10->capture_dma_data.dt.addr = VAR_12->start + VAR_5;
  VAR_10->capture_dma_data.dt.addr_width = VAR_8[VAR_16];
  VAR_10->capture_dma_data.dt.fifo_size = VAR_15 *
   (VAR_9[VAR_17] >> 8);
  VAR_10->capture_dma_data.dt.maxburst = 16;
 }

 return 0;

}

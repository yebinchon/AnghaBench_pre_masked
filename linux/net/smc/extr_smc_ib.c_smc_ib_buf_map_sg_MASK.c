
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_ib_device {int ibdev; } ;
struct smc_buf_desc {TYPE_1__* sgt; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int orig_nents; int sgl; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;

int FUNC_1(struct smc_ib_device *VAR_2,
        struct smc_buf_desc *VAR_3,
        enum dma_data_direction VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2->ibdev,
         VAR_3->sgt[VAR_1].sgl,
         VAR_3->sgt[VAR_1].orig_nents,
         VAR_4);
 if (!VAR_5)
  return -VAR_0;

 return VAR_5;
}

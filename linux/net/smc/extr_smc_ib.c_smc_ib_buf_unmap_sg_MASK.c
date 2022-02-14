
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smc_ib_device {int ibdev; } ;
struct smc_buf_desc {TYPE_1__* sgt; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {scalar_t__ dma_address; } ;
struct TYPE_3__ {TYPE_2__* sgl; int orig_nents; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int ,int) ;

void FUNC_1(struct smc_ib_device *VAR_1,
    struct smc_buf_desc *VAR_2,
    enum dma_data_direction VAR_3)
{
 if (!VAR_2->sgt[VAR_0].sgl->dma_address)
  return;

 FUNC_0(VAR_1->ibdev,
   VAR_2->sgt[VAR_0].sgl,
   VAR_2->sgt[VAR_0].orig_nents,
   VAR_3);
 VAR_2->sgt[VAR_0].sgl->dma_address = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dmab_bdl; int dmab_data; } ;
struct TYPE_3__ {int (* free_dma_buf ) (int ,int *) ;} ;
struct sst_dsp {TYPE_2__ cl_dev; int dev; TYPE_1__ dsp_ops; } ;


 int FUNC_0 (struct sst_dsp*) ;
 int FUNC_1 (struct sst_dsp*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct sst_dsp *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);

 VAR_0->dsp_ops.free_dma_buf(VAR_0->dev, &VAR_0->cl_dev.dmab_data);
 VAR_0->dsp_ops.free_dma_buf(VAR_0->dev, &VAR_0->cl_dev.dmab_bdl);
}

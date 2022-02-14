
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sst_pdata {struct sst_hsw* dsp; } ;
struct sst_hsw {int ipc; TYPE_1__* dsp; int dx_context_paddr; int dx_context; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int dma_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct device *VAR_1, struct sst_pdata *VAR_2)
{
 struct sst_hsw *VAR_3 = VAR_2->dsp;

 FUNC_2(VAR_3->dsp);
 FUNC_3(VAR_3->dsp);
 FUNC_0(VAR_3->dsp->dma_dev, VAR_0,
   VAR_3->dx_context, VAR_3->dx_context_paddr);
 FUNC_1(VAR_3->dsp);
 FUNC_4(&VAR_3->ipc);
}

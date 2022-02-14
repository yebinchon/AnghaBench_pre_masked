
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_dsp {int dma; TYPE_1__* ops; int irq; } ;
struct TYPE_2__ {int (* free ) (struct sst_dsp*) ;} ;


 int FUNC_0 (int ,struct sst_dsp*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sst_dsp*) ;

void FUNC_3(struct sst_dsp *VAR_0)
{
 FUNC_0(VAR_0->irq, VAR_0);
 if (VAR_0->ops->free)
  VAR_0->ops->free(VAR_0);

 FUNC_1(VAR_0->dma);
}

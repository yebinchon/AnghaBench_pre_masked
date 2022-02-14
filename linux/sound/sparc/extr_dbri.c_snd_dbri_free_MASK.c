
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_dbri {int dma_dvma; scalar_t__ dma; TYPE_1__* op; int regs_size; scalar_t__ regs; scalar_t__ irq; } ;
struct dbri_dma {int dummy; } ;
struct TYPE_2__ {int dev; int * resource; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_dbri*) ;
 int FUNC_1 (int *,int,void*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__,struct snd_dbri*) ;
 int FUNC_4 (int *,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(struct snd_dbri *VAR_1)
{
 FUNC_2(VAR_0, "snd_dbri_free\n");
 FUNC_0(VAR_1);

 if (VAR_1->irq)
  FUNC_3(VAR_1->irq, VAR_1);

 if (VAR_1->regs)
  FUNC_4(&VAR_1->op->resource[0], VAR_1->regs, VAR_1->regs_size);

 if (VAR_1->dma)
  FUNC_1(&VAR_1->op->dev,
      sizeof(struct dbri_dma),
      (void *)VAR_1->dma, VAR_1->dma_dvma);
}

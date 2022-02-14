
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_mcbsp {int free; int lock; int * reg_cache; scalar_t__ id; int dev; scalar_t__ tx_irq; scalar_t__ rx_irq; scalar_t__ irq; TYPE_2__* pdata; } ;
struct TYPE_4__ {scalar_t__ has_wakeup; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* free ) (scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct omap_mcbsp*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (scalar_t__,void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct omap_mcbsp*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct omap_mcbsp *VAR_3)
{
 void *VAR_4;

 if(VAR_3->pdata->ops && VAR_3->pdata->ops->free)
  VAR_3->pdata->ops->free(VAR_3->id - 1);


 if (VAR_3->pdata->has_wakeup)
  FUNC_0(VAR_3, VAR_2, 0);


 if (VAR_3->irq)
  FUNC_0(VAR_3, VAR_0, 0);

 if (VAR_3->irq) {
  FUNC_2(VAR_3->irq, (void *)VAR_3);
 } else {
  FUNC_2(VAR_3->rx_irq, (void *)VAR_3);
  FUNC_2(VAR_3->tx_irq, (void *)VAR_3);
 }

 VAR_4 = VAR_3->reg_cache;
 if (!FUNC_4())
  FUNC_5(VAR_3, VAR_1);

 FUNC_6(&VAR_3->lock);
 if (VAR_3->free)
  FUNC_1(VAR_3->dev, "McBSP%d was not reserved\n", VAR_3->id);
 else
  VAR_3->free = 1;
 VAR_3->reg_cache = ((void*)0);
 FUNC_7(&VAR_3->lock);

 FUNC_3(VAR_4);
}

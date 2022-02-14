
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_mcbsp {int free; int lock; int * reg_cache; TYPE_2__* pdata; scalar_t__ id; scalar_t__ tx_irq; int dev; scalar_t__ rx_irq; scalar_t__ irq; int reg_cache_size; } ;
struct TYPE_4__ {scalar_t__ has_wakeup; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* free ) (scalar_t__) ;int (* request ) (scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct omap_mcbsp*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (scalar_t__,void*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (scalar_t__,int ,int ,char*,void*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct omap_mcbsp *VAR_9)
{
 void *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_9->reg_cache_size, VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_6(&VAR_9->lock);
 if (!VAR_9->free) {
  FUNC_1(VAR_9->dev, "McBSP%d is currently in use\n", VAR_9->id);
  VAR_11 = -VAR_0;
  goto err_kfree;
 }

 VAR_9->free = 0;
 VAR_9->reg_cache = VAR_10;
 FUNC_7(&VAR_9->lock);

 if(VAR_9->pdata->ops && VAR_9->pdata->ops->request)
  VAR_9->pdata->ops->request(VAR_9->id - 1);





 FUNC_0(VAR_9, VAR_3, 0);
 FUNC_0(VAR_9, VAR_4, 0);

 if (VAR_9->irq) {
  VAR_11 = FUNC_5(VAR_9->irq, VAR_6, 0,
      "McBSP", (void *)VAR_9);
  if (VAR_11 != 0) {
   FUNC_1(VAR_9->dev, "Unable to request IRQ\n");
   goto err_clk_disable;
  }
 } else {
  VAR_11 = FUNC_5(VAR_9->tx_irq, VAR_8, 0,
      "McBSP TX", (void *)VAR_9);
  if (VAR_11 != 0) {
   FUNC_1(VAR_9->dev, "Unable to request TX IRQ\n");
   goto err_clk_disable;
  }

  VAR_11 = FUNC_5(VAR_9->rx_irq, VAR_7, 0,
      "McBSP RX", (void *)VAR_9);
  if (VAR_11 != 0) {
   FUNC_1(VAR_9->dev, "Unable to request RX IRQ\n");
   goto err_free_irq;
  }
 }

 return 0;
err_free_irq:
 FUNC_2(VAR_9->tx_irq, (void *)VAR_9);
err_clk_disable:
 if(VAR_9->pdata->ops && VAR_9->pdata->ops->free)
  VAR_9->pdata->ops->free(VAR_9->id - 1);


 if (VAR_9->pdata->has_wakeup)
  FUNC_0(VAR_9, VAR_5, 0);

 FUNC_6(&VAR_9->lock);
 VAR_9->free = 1;
 VAR_9->reg_cache = ((void*)0);
err_kfree:
 FUNC_7(&VAR_9->lock);
 FUNC_3(VAR_10);

 return VAR_11;
}

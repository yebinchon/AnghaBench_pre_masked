
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_base_afe {int irqs_size; int irq_alloc_lock; TYPE_1__* irqs; } ;
struct TYPE_2__ {int irq_occupyed; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct mtk_base_afe *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->irq_alloc_lock);
 for (VAR_1 = 0; VAR_1 < VAR_0->irqs_size; ++VAR_1) {
  if (VAR_0->irqs[VAR_1].irq_occupyed == 0) {
   VAR_0->irqs[VAR_1].irq_occupyed = 1;
   FUNC_1(&VAR_0->irq_alloc_lock);
   return VAR_1;
  }
 }
 FUNC_1(&VAR_0->irq_alloc_lock);
 return VAR_0->irqs_size;
}

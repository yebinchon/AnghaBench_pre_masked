
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_base_afe {int irqs_size; int irq_alloc_lock; TYPE_1__* irqs; } ;
struct TYPE_2__ {scalar_t__ irq_occupyed; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct mtk_base_afe *VAR_1, int VAR_2)
{
 FUNC_0(&VAR_1->irq_alloc_lock);
 if (VAR_2 >= 0 && VAR_2 < VAR_1->irqs_size) {
  VAR_1->irqs[VAR_2].irq_occupyed = 0;
  FUNC_1(&VAR_1->irq_alloc_lock);
  return 0;
 }
 FUNC_1(&VAR_1->irq_alloc_lock);
 return -VAR_0;
}

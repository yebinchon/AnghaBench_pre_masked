
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {struct irq_chip* chip; } ;
struct irq_desc {int pending_mask; int lock; struct irq_data irq_data; } ;
struct irq_chip {int irq_set_affinity; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct irq_desc* FUNC_5 (struct irq_data*) ;
 int FUNC_6 (struct irq_data*,int ,int) ;
 int FUNC_7 (struct irq_data*) ;
 scalar_t__ FUNC_8 (struct irq_data*) ;
 int FUNC_9 (struct irq_data*) ;
 int FUNC_10 (struct irq_data*) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_12 (int ) ;

void FUNC_13(struct irq_data *VAR_3)
{
 struct irq_desc *VAR_4 = FUNC_5(VAR_3);
 struct irq_data *VAR_5 = &VAR_4->irq_data;
 struct irq_chip *VAR_6 = VAR_5->chip;

 if (FUNC_11(!FUNC_9(VAR_5)))
  return;

 FUNC_7(VAR_5);




 if (FUNC_8(VAR_5)) {
  FUNC_0(1);
  return;
 }

 if (FUNC_12(FUNC_4(VAR_4->pending_mask)))
  return;

 if (!VAR_6->irq_set_affinity)
  return;

 FUNC_1(&VAR_4->lock);
 if (FUNC_2(VAR_4->pending_mask, VAR_1) < VAR_2) {
  int VAR_7;

  VAR_7 = FUNC_6(VAR_5, VAR_4->pending_mask, 0);





  if (VAR_7 == -VAR_0) {
   FUNC_10(VAR_5);
   return;
  }
 }
 FUNC_3(VAR_4->pending_mask);
}

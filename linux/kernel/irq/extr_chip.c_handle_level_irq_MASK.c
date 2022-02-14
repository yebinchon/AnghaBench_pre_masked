
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int istate; int lock; int irq_data; int action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (struct irq_desc*) ;
 int FUNC_2 (struct irq_desc*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct irq_desc*) ;
 int FUNC_5 (struct irq_desc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

void FUNC_9(struct irq_desc *VAR_3)
{
 FUNC_6(&VAR_3->lock);
 FUNC_5(VAR_3);

 if (!FUNC_2(VAR_3))
  goto out_unlock;

 VAR_3->istate &= ~(VAR_1 | VAR_2);





 if (FUNC_8(!VAR_3->action || FUNC_3(&VAR_3->irq_data))) {
  VAR_3->istate |= VAR_0;
  goto out_unlock;
 }

 FUNC_4(VAR_3);
 FUNC_1(VAR_3);

 FUNC_0(VAR_3);

out_unlock:
 FUNC_7(&VAR_3->lock);
}

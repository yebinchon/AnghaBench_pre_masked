
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
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(struct irq_desc *VAR_3)
{
 FUNC_4(&VAR_3->lock);

 if (!FUNC_1(VAR_3))
  goto out_unlock;

 VAR_3->istate &= ~(VAR_1 | VAR_2);

 if (FUNC_6(!VAR_3->action || FUNC_2(&VAR_3->irq_data))) {
  VAR_3->istate |= VAR_0;
  goto out_unlock;
 }

 FUNC_3(VAR_3);
 FUNC_0(VAR_3);

out_unlock:
 FUNC_5(&VAR_3->lock);
}

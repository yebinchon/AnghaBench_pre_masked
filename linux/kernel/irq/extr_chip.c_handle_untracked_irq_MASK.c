
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int istate; int lock; int irq_data; int action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct irq_desc*,unsigned int*) ;
 int FUNC_1 (struct irq_desc*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(struct irq_desc *VAR_4)
{
 unsigned int VAR_5 = 0;

 FUNC_5(&VAR_4->lock);

 if (!FUNC_1(VAR_4))
  goto out_unlock;

 VAR_4->istate &= ~(VAR_2 | VAR_3);

 if (FUNC_7(!VAR_4->action || FUNC_3(&VAR_4->irq_data))) {
  VAR_4->istate |= VAR_1;
  goto out_unlock;
 }

 VAR_4->istate &= ~VAR_1;
 FUNC_4(&VAR_4->irq_data, VAR_0);
 FUNC_6(&VAR_4->lock);

 FUNC_0(VAR_4, &VAR_5);

 FUNC_5(&VAR_4->lock);
 FUNC_2(&VAR_4->irq_data, VAR_0);

out_unlock:
 FUNC_6(&VAR_4->lock);
}

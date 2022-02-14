
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int irq_data; int lock; int istate; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

irqreturn_t FUNC_5(struct irq_desc *VAR_2)
{
 irqreturn_t VAR_3;

 VAR_2->istate &= ~VAR_1;
 FUNC_2(&VAR_2->irq_data, VAR_0);
 FUNC_4(&VAR_2->lock);

 VAR_3 = FUNC_0(VAR_2);

 FUNC_3(&VAR_2->lock);
 FUNC_1(&VAR_2->irq_data, VAR_0);
 return VAR_3;
}

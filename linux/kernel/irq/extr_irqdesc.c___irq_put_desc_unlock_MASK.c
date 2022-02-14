
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int lock; } ;


 int FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct irq_desc *VAR_0, unsigned long VAR_1, bool VAR_2)
{
 FUNC_1(&VAR_0->lock, VAR_1);
 if (VAR_2)
  FUNC_0(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {struct irqaction* secondary; } ;
struct irq_desc {int lock; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct irq_desc*,struct irqaction*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct irq_desc *VAR_0, struct irqaction *VAR_1)
{
 struct irqaction *VAR_2 = VAR_1->secondary;

 if (FUNC_0(!VAR_2))
  return;

 FUNC_2(&VAR_0->lock);
 FUNC_1(VAR_0, VAR_2);
 FUNC_3(&VAR_0->lock);
}

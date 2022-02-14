
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {int percpu_dev_id; int (* handler ) (unsigned int,int ) ;} ;
struct irq_desc {int irq_data; struct irqaction* action; } ;
struct irq_chip {int (* irq_eoi ) (int *) ;} ;
typedef int irqreturn_t ;


 int FUNC_0 (struct irq_desc*) ;
 struct irq_chip* FUNC_1 (struct irq_desc*) ;
 unsigned int FUNC_2 (struct irq_desc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned int,struct irqaction*) ;
 int FUNC_7 (unsigned int,struct irqaction*,int ) ;

void FUNC_8(struct irq_desc *VAR_0)
{
 struct irq_chip *VAR_1 = FUNC_1(VAR_0);
 struct irqaction *VAR_2 = VAR_0->action;
 unsigned int VAR_3 = FUNC_2(VAR_0);
 irqreturn_t VAR_4;

 FUNC_0(VAR_0);

 FUNC_6(VAR_3, VAR_2);
 VAR_4 = VAR_2->handler(VAR_3, FUNC_3(VAR_2->percpu_dev_id));
 FUNC_7(VAR_3, VAR_2, VAR_4);

 if (VAR_1->irq_eoi)
  VAR_1->irq_eoi(&VAR_0->irq_data);
}

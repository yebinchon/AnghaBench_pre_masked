
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {int percpu_dev_id; int (* handler ) (unsigned int,int ) ;} ;
struct irq_desc {int irq_data; int percpu_enabled; struct irqaction* action; } ;
struct irq_chip {int (* irq_eoi ) (int *) ;int (* irq_ack ) (int *) ;} ;
typedef int irqreturn_t ;


 int FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (unsigned int,int ) ;
 struct irq_chip* FUNC_2 (struct irq_desc*) ;
 unsigned int FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (struct irq_desc*,unsigned int) ;
 scalar_t__ FUNC_5 (struct irqaction*) ;
 int FUNC_6 (char*,char*,unsigned int,unsigned int) ;
 int FUNC_7 (int ) ;
 unsigned int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (unsigned int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (unsigned int,struct irqaction*) ;
 int FUNC_13 (unsigned int,struct irqaction*,int ) ;

void FUNC_14(struct irq_desc *VAR_0)
{
 struct irq_chip *VAR_1 = FUNC_2(VAR_0);
 struct irqaction *VAR_2 = VAR_0->action;
 unsigned int VAR_3 = FUNC_3(VAR_0);
 irqreturn_t VAR_4;





 FUNC_0(VAR_0);

 if (VAR_1->irq_ack)
  VAR_1->irq_ack(&VAR_0->irq_data);

 if (FUNC_5(VAR_2)) {
  FUNC_12(VAR_3, VAR_2);
  VAR_4 = VAR_2->handler(VAR_3, FUNC_7(VAR_2->percpu_dev_id));
  FUNC_13(VAR_3, VAR_2, VAR_4);
 } else {
  unsigned int VAR_5 = FUNC_8();
  bool VAR_6 = FUNC_1(VAR_5, VAR_0->percpu_enabled);

  if (VAR_6)
   FUNC_4(VAR_0, VAR_5);

  FUNC_6("Spurious%s percpu IRQ%u on CPU%u\n",
       VAR_6 ? " and unmasked" : "", VAR_3, VAR_5);
 }

 if (VAR_1->irq_eoi)
  VAR_1->irq_eoi(&VAR_0->irq_data);
}

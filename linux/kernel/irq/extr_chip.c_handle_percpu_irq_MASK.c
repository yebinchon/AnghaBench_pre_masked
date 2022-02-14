
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int irq_data; } ;
struct irq_chip {int (* irq_eoi ) (int *) ;int (* irq_ack ) (int *) ;} ;


 int FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (struct irq_desc*) ;
 struct irq_chip* FUNC_2 (struct irq_desc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct irq_desc *VAR_0)
{
 struct irq_chip *VAR_1 = FUNC_2(VAR_0);





 FUNC_0(VAR_0);

 if (VAR_1->irq_ack)
  VAR_1->irq_ack(&VAR_0->irq_data);

 FUNC_1(VAR_0);

 if (VAR_1->irq_eoi)
  VAR_1->irq_eoi(&VAR_0->irq_data);
}

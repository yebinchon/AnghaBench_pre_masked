
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain_chip_generic {unsigned int irqs_per_chip; } ;
struct irq_domain {struct irq_domain_chip_generic* gc; } ;
struct irq_data {unsigned int hwirq; } ;
struct irq_chip_generic {int installed; } ;


 int FUNC_0 (int,int *) ;
 struct irq_data* FUNC_1 (struct irq_domain*,unsigned int) ;
 int FUNC_2 (struct irq_domain*,unsigned int,unsigned int,int *,int *,int *,int *,int *) ;
 struct irq_chip_generic* FUNC_3 (struct irq_domain*,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct irq_domain *VAR_1, unsigned int VAR_2)
{
 struct irq_data *VAR_3 = FUNC_1(VAR_1, VAR_2);
 struct irq_domain_chip_generic *VAR_4 = VAR_1->gc;
 unsigned int VAR_5 = VAR_3->hwirq;
 struct irq_chip_generic *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_1, VAR_5);
 if (!VAR_6)
  return;

 VAR_7 = VAR_5 % VAR_4->irqs_per_chip;

 FUNC_0(VAR_7, &VAR_6->installed);
 FUNC_2(VAR_1, VAR_2, VAR_5, &VAR_0, ((void*)0), ((void*)0), ((void*)0),
       ((void*)0));

}

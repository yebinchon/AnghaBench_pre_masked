
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_chip_generic {int dummy; } ;


 int FUNC_0 (struct irq_chip_generic*) ;
 struct irq_chip_generic* FUNC_1 (struct irq_domain*,unsigned int) ;

struct irq_chip_generic *
FUNC_2(struct irq_domain *VAR_0, unsigned int VAR_1)
{
 struct irq_chip_generic *VAR_2 = FUNC_1(VAR_0, VAR_1);

 return !FUNC_0(VAR_2) ? VAR_2 : ((void*)0);
}

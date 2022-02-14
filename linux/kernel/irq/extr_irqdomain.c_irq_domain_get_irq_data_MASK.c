
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {struct irq_domain* domain; } ;


 struct irq_data* FUNC_0 (unsigned int) ;

struct irq_data *FUNC_1(struct irq_domain *VAR_0,
      unsigned int VAR_1)
{
 struct irq_data *VAR_2 = FUNC_0(VAR_1);

 return (VAR_2 && VAR_2->domain == VAR_0) ? VAR_2 : ((void*)0);
}

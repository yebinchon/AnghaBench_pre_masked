
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain_chip_generic {unsigned int irqs_per_chip; int num_chips; struct irq_chip_generic** gc; } ;
struct irq_domain {struct irq_domain_chip_generic* gc; } ;
struct irq_chip_generic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct irq_chip_generic* FUNC_0 (int ) ;

__attribute__((used)) static struct irq_chip_generic *
FUNC_1(struct irq_domain *VAR_2, unsigned int VAR_3)
{
 struct irq_domain_chip_generic *VAR_4 = VAR_2->gc;
 int VAR_5;

 if (!VAR_4)
  return FUNC_0(-VAR_1);
 VAR_5 = VAR_3 / VAR_4->irqs_per_chip;
 if (VAR_5 >= VAR_4->num_chips)
  return FUNC_0(-VAR_0);
 return VAR_4->gc[VAR_5];
}

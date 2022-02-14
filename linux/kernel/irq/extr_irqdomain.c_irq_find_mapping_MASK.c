
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {scalar_t__ revmap_direct_max_irq; scalar_t__ revmap_size; unsigned int* linear_revmap; int revmap_tree; } ;
struct irq_data {scalar_t__ hwirq; unsigned int irq; } ;
typedef scalar_t__ irq_hw_number_t ;


 struct irq_domain* VAR_0 ;
 struct irq_data* FUNC_0 (struct irq_domain*,scalar_t__) ;
 struct irq_data* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

unsigned int FUNC_4(struct irq_domain *VAR_1,
         irq_hw_number_t VAR_2)
{
 struct irq_data *VAR_3;


 if (VAR_1 == ((void*)0))
  VAR_1 = VAR_0;
 if (VAR_1 == ((void*)0))
  return 0;

 if (VAR_2 < VAR_1->revmap_direct_max_irq) {
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3 && VAR_3->hwirq == VAR_2)
   return VAR_2;
 }


 if (VAR_2 < VAR_1->revmap_size)
  return VAR_1->linear_revmap[VAR_2];

 FUNC_2();
 VAR_3 = FUNC_1(&VAR_1->revmap_tree, VAR_2);
 FUNC_3();
 return VAR_3 ? VAR_3->irq : 0;
}

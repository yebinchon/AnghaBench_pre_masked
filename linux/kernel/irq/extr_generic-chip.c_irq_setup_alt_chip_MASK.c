
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int * chip; } ;
struct irq_chip_type {unsigned int type; int handler; int chip; } ;
struct irq_chip_generic {unsigned int num_ct; struct irq_chip_type* chip_types; } ;
struct TYPE_2__ {int handle_irq; } ;


 int VAR_0 ;
 struct irq_chip_generic* FUNC_0 (struct irq_data*) ;
 TYPE_1__* FUNC_1 (struct irq_data*) ;

int FUNC_2(struct irq_data *VAR_1, unsigned int VAR_2)
{
 struct irq_chip_generic *VAR_3 = FUNC_0(VAR_1);
 struct irq_chip_type *VAR_4 = VAR_3->chip_types;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_ct; VAR_5++, VAR_4++) {
  if (VAR_4->type & VAR_2) {
   VAR_1->chip = &VAR_4->chip;
   FUNC_1(VAR_1)->handle_irq = VAR_4->handler;
   return 0;
  }
 }
 return -VAR_0;
}

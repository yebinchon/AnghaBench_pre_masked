
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain_chip_generic {int irqs_per_chip; int gc_flags; int irq_flags_to_set; int irq_flags_to_clear; } ;
struct irq_domain {struct irq_domain_chip_generic* gc; } ;
struct irq_data {int mask; } ;
struct irq_chip {int (* irq_calc_mask ) (struct irq_data*) ;} ;
struct irq_chip_type {int handler; struct irq_chip chip; } ;
struct irq_chip_generic {int installed; int lock; struct irq_chip_type* chip_types; int unused; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct irq_chip_generic*) ;
 int FUNC_1 (struct irq_chip_generic*) ;
 struct irq_chip_generic* FUNC_2 (struct irq_domain*,int) ;
 struct irq_data* FUNC_3 (struct irq_domain*,unsigned int) ;
 int FUNC_4 (struct irq_domain*,unsigned int,int,struct irq_chip*,struct irq_chip_generic*,int ,int *,int *) ;
 int FUNC_5 (struct irq_chip_generic*,int) ;
 int FUNC_6 (unsigned int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (unsigned int,int *,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int,int *) ;
 int FUNC_11 (struct irq_data*) ;
 scalar_t__ FUNC_12 (int,int *) ;

int FUNC_13(struct irq_domain *VAR_5, unsigned int VAR_6,
    irq_hw_number_t VAR_7)
{
 struct irq_data *VAR_8 = FUNC_3(VAR_5, VAR_6);
 struct irq_domain_chip_generic *VAR_9 = VAR_5->gc;
 struct irq_chip_generic *VAR_10;
 struct irq_chip_type *VAR_11;
 struct irq_chip *VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 VAR_10 = FUNC_2(VAR_5, VAR_7);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_14 = VAR_7 % VAR_9->irqs_per_chip;

 if (FUNC_12(VAR_14, &VAR_10->unused))
  return -VAR_1;

 if (FUNC_12(VAR_14, &VAR_10->installed))
  return -VAR_0;

 VAR_11 = VAR_10->chip_types;
 VAR_12 = &VAR_11->chip;


 if (!VAR_10->installed) {
  FUNC_8(&VAR_10->lock, VAR_13);
  FUNC_5(VAR_10, VAR_9->gc_flags);
  FUNC_9(&VAR_10->lock, VAR_13);
 }


 FUNC_10(VAR_14, &VAR_10->installed);

 if (VAR_9->gc_flags & VAR_2)
  FUNC_7(VAR_6, &VAR_3,
          &VAR_4);

 if (VAR_12->irq_calc_mask)
  VAR_12->irq_calc_mask(VAR_8);
 else
  VAR_8->mask = 1 << VAR_14;

 FUNC_4(VAR_5, VAR_6, VAR_7, VAR_12, VAR_10, VAR_11->handler, ((void*)0), ((void*)0));
 FUNC_6(VAR_6, VAR_9->irq_flags_to_clear, VAR_9->irq_flags_to_set);
 return 0;
}

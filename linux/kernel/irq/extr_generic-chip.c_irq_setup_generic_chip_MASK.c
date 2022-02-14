
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int mask; } ;
struct irq_chip {int (* irq_calc_mask ) (struct irq_data*) ;} ;
struct irq_chip_type {int handler; struct irq_chip chip; } ;
struct irq_chip_generic {unsigned int irq_base; unsigned int irq_cnt; int list; struct irq_chip_type* chip_types; } ;
typedef enum irq_gc_flags { ____Placeholder_irq_gc_flags } irq_gc_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct irq_chip_generic*,int) ;
 struct irq_data* FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (unsigned int,struct irq_chip*,int ) ;
 int FUNC_4 (unsigned int,struct irq_chip_generic*) ;
 int FUNC_5 (unsigned int,int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct irq_data*) ;

void FUNC_10(struct irq_chip_generic *VAR_6, u32 VAR_7,
       enum irq_gc_flags VAR_8, unsigned int VAR_9,
       unsigned int VAR_10)
{
 struct irq_chip_type *VAR_11 = VAR_6->chip_types;
 struct irq_chip *VAR_12 = &VAR_11->chip;
 unsigned int VAR_13;

 FUNC_7(&VAR_3);
 FUNC_6(&VAR_6->list, &VAR_2);
 FUNC_8(&VAR_3);

 FUNC_0(VAR_6, VAR_8);

 for (VAR_13 = VAR_6->irq_base; VAR_7; VAR_7 >>= 1, VAR_13++) {
  if (!(VAR_7 & 0x01))
   continue;

  if (VAR_8 & VAR_0)
   FUNC_5(VAR_13, &VAR_4,
           &VAR_5);

  if (!(VAR_8 & VAR_1)) {
   struct irq_data *VAR_14 = FUNC_1(VAR_13);

   if (VAR_12->irq_calc_mask)
    VAR_12->irq_calc_mask(VAR_14);
   else
    VAR_14->mask = 1 << (VAR_13 - VAR_6->irq_base);
  }
  FUNC_3(VAR_13, VAR_12, VAR_11->handler);
  FUNC_4(VAR_13, VAR_6);
  FUNC_2(VAR_13, VAR_9, VAR_10);
 }
 VAR_6->irq_cnt = VAR_13 - VAR_6->irq_base;
}

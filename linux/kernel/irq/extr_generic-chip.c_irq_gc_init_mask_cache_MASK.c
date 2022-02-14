
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mask; } ;
struct irq_chip_type {int * mask_cache; TYPE_1__ regs; int mask_cache_priv; } ;
struct irq_chip_generic {int num_ct; int mask_cache; struct irq_chip_type* chip_types; } ;
typedef enum irq_gc_flags { ____Placeholder_irq_gc_flags } irq_gc_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irq_chip_generic*,int ) ;

__attribute__((used)) static void
FUNC_1(struct irq_chip_generic *VAR_2, enum irq_gc_flags VAR_3)
{
 struct irq_chip_type *VAR_4 = VAR_2->chip_types;
 u32 *VAR_5 = &VAR_2->mask_cache, VAR_6 = VAR_4->regs.mask;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2->num_ct; VAR_7++) {
  if (VAR_3 & VAR_1) {
   VAR_5 = &VAR_4[VAR_7].mask_cache_priv;
   VAR_6 = VAR_4[VAR_7].regs.mask;
  }
  VAR_4[VAR_7].mask_cache = VAR_5;
  if (VAR_3 & VAR_0)
   *VAR_5 = FUNC_0(VAR_2, VAR_6);
 }
}

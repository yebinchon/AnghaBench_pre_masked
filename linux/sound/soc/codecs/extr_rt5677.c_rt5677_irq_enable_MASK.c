
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt5677_priv {int irq_en; } ;
struct irq_data {size_t hwirq; } ;
struct TYPE_2__ {int enable_mask; } ;


 struct rt5677_priv* FUNC_0 (struct irq_data*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_1)
{
 struct rt5677_priv *VAR_2 = FUNC_0(VAR_1);

 VAR_2->irq_en |= VAR_0[VAR_1->hwirq].enable_mask;
}

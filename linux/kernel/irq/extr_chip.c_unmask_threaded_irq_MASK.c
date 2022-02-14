
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct irq_chip* chip; } ;
struct irq_desc {TYPE_1__ irq_data; } ;
struct irq_chip {int flags; int (* irq_eoi ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct irq_desc*) ;

void FUNC_2(struct irq_desc *VAR_1)
{
 struct irq_chip *VAR_2 = VAR_1->irq_data.chip;

 if (VAR_2->flags & VAR_0)
  VAR_2->irq_eoi(&VAR_1->irq_data);

 FUNC_1(VAR_1);
}

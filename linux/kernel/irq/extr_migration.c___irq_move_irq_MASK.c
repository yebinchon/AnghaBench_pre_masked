
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* irq_unmask ) (struct irq_data*) ;int (* irq_mask ) (struct irq_data*) ;} ;


 int FUNC_0 (struct irq_data*) ;
 struct irq_data* FUNC_1 (int ) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*) ;
 int FUNC_5 (struct irq_data*) ;
 int FUNC_6 (struct irq_data*) ;
 scalar_t__ FUNC_7 (int ) ;

void FUNC_8(struct irq_data *VAR_0)
{
 bool VAR_1;






 VAR_0 = FUNC_1(FUNC_0(VAR_0));

 if (FUNC_7(FUNC_3(VAR_0)))
  return;






 VAR_1 = FUNC_4(VAR_0);
 if (!VAR_1)
  VAR_0->chip->irq_mask(VAR_0);
 FUNC_2(VAR_0);
 if (!VAR_1)
  VAR_0->chip->irq_unmask(VAR_0);
}

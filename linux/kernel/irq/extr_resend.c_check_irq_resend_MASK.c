
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* chip; } ;
struct irq_desc {int istate; unsigned int parent_irq; TYPE_2__ irq_data; } ;
struct TYPE_3__ {int (* irq_retrigger ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct irq_desc*) ;
 scalar_t__ FUNC_1 (struct irq_desc*) ;
 scalar_t__ FUNC_2 (struct irq_desc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct irq_desc *VAR_4)
{






 if (FUNC_1(VAR_4)) {
  VAR_4->istate &= ~VAR_0;
  return;
 }
 if (VAR_4->istate & VAR_1)
  return;
 if (VAR_4->istate & VAR_0) {
  VAR_4->istate &= ~VAR_0;
  VAR_4->istate |= VAR_1;

  if (!VAR_4->irq_data.chip->irq_retrigger ||
      !VAR_4->irq_data.chip->irq_retrigger(&VAR_4->irq_data)) {
  }
 }
}

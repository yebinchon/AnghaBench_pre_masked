
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct irq_chip* chip; } ;
struct irq_desc {int istate; int lock; TYPE_1__ irq_data; int action; } ;
struct irq_chip {int flags; int (* irq_eoi ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct irq_desc*,struct irq_chip*) ;
 int FUNC_1 (struct irq_desc*) ;
 int FUNC_2 (struct irq_desc*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct irq_desc*) ;
 int FUNC_5 (struct irq_desc*) ;
 int FUNC_6 (struct irq_desc*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(struct irq_desc *VAR_5)
{
 struct irq_chip *VAR_6 = VAR_5->irq_data.chip;

 FUNC_7(&VAR_5->lock);

 if (!FUNC_2(VAR_5))
  goto out;

 VAR_5->istate &= ~(VAR_3 | VAR_4);





 if (FUNC_10(!VAR_5->action || FUNC_3(&VAR_5->irq_data))) {
  VAR_5->istate |= VAR_2;
  FUNC_5(VAR_5);
  goto out;
 }

 FUNC_4(VAR_5);
 if (VAR_5->istate & VAR_1)
  FUNC_5(VAR_5);

 FUNC_6(VAR_5);
 FUNC_1(VAR_5);

 FUNC_0(VAR_5, VAR_6);

 FUNC_8(&VAR_5->lock);
 return;
out:
 if (!(VAR_6->flags & VAR_0))
  VAR_6->irq_eoi(&VAR_5->irq_data);
 FUNC_8(&VAR_5->lock);
}

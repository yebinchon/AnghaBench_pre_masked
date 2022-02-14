
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* chip; } ;
struct irq_desc {int istate; int lock; TYPE_2__ irq_data; int action; } ;
struct TYPE_5__ {int (* irq_ack ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (struct irq_desc*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct irq_desc*) ;
 int FUNC_5 (struct irq_desc*) ;
 int FUNC_6 (struct irq_desc*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct irq_desc*) ;

void FUNC_12(struct irq_desc *VAR_3)
{
 FUNC_7(&VAR_3->lock);

 VAR_3->istate &= ~(VAR_1 | VAR_2);

 if (!FUNC_1(VAR_3)) {
  VAR_3->istate |= VAR_0;
  FUNC_5(VAR_3);
  goto out_unlock;
 }





 if (FUNC_2(&VAR_3->irq_data) || !VAR_3->action) {
  VAR_3->istate |= VAR_0;
  FUNC_5(VAR_3);
  goto out_unlock;
 }

 FUNC_4(VAR_3);


 VAR_3->irq_data.chip->irq_ack(&VAR_3->irq_data);

 do {
  if (FUNC_10(!VAR_3->action)) {
   FUNC_6(VAR_3);
   goto out_unlock;
  }






  if (FUNC_10(VAR_3->istate & VAR_0)) {
   if (!FUNC_2(&VAR_3->irq_data) &&
       FUNC_3(&VAR_3->irq_data))
    FUNC_11(VAR_3);
  }

  FUNC_0(VAR_3);

 } while ((VAR_3->istate & VAR_0) &&
   !FUNC_2(&VAR_3->irq_data));

out_unlock:
 FUNC_8(&VAR_3->lock);
}

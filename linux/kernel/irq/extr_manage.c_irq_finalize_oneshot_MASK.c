
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {scalar_t__ handler; int thread_mask; int thread_flags; } ;
struct irq_desc {int istate; int lock; int irq_data; int threads_oneshot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (struct irq_desc*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct irq_desc*) ;

__attribute__((used)) static void FUNC_11(struct irq_desc *VAR_3,
     struct irqaction *VAR_4)
{
 if (!(VAR_3->istate & VAR_0) ||
     VAR_4->handler == VAR_2)
  return;
again:
 FUNC_0(VAR_3);
 FUNC_6(&VAR_3->lock);
 if (FUNC_9(FUNC_4(&VAR_3->irq_data))) {
  FUNC_7(&VAR_3->lock);
  FUNC_1(VAR_3);
  FUNC_2();
  goto again;
 }






 if (FUNC_8(VAR_1, &VAR_4->thread_flags))
  goto out_unlock;

 VAR_3->threads_oneshot &= ~VAR_4->thread_mask;

 if (!VAR_3->threads_oneshot && !FUNC_3(&VAR_3->irq_data) &&
     FUNC_5(&VAR_3->irq_data))
  FUNC_10(VAR_3);

out_unlock:
 FUNC_7(&VAR_3->lock);
 FUNC_1(VAR_3);
}

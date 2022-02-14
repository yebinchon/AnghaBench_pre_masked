
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irqaction {TYPE_1__* thread; int thread_mask; int thread_flags; } ;
struct irq_desc {int threads_active; int threads_oneshot; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct irq_desc *VAR_2, struct irqaction *VAR_3)
{





 if (VAR_3->thread->flags & VAR_1)
  return;





 if (FUNC_1(VAR_0, &VAR_3->thread_flags))
  return;
 VAR_2->threads_oneshot |= VAR_3->thread_mask;
 FUNC_0(&VAR_2->threads_active);

 FUNC_2(VAR_3->thread);
}

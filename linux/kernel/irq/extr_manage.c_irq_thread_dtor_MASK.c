
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; int pid; int comm; } ;
struct irqaction {int thread_flags; int irq; } ;
struct irq_desc {int dummy; } ;
struct callback_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct task_struct* VAR_2 ;
 int FUNC_1 (struct irq_desc*,struct irqaction*) ;
 struct irq_desc* FUNC_2 (int ) ;
 struct irqaction* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct irq_desc*) ;

__attribute__((used)) static void FUNC_7(struct callback_head *VAR_3)
{
 struct task_struct *VAR_4 = VAR_2;
 struct irq_desc *VAR_5;
 struct irqaction *VAR_6;

 if (FUNC_0(!(VAR_2->flags & VAR_1)))
  return;

 VAR_6 = FUNC_3(VAR_4);

 FUNC_4("exiting task \"%s\" (%d) is an active IRQ thread (irq %d)\n",
        VAR_4->comm, VAR_4->pid, VAR_6->irq);


 VAR_5 = FUNC_2(VAR_6->irq);




 if (FUNC_5(VAR_0, &VAR_6->thread_flags))
  FUNC_6(VAR_5);


 FUNC_1(VAR_5, VAR_6);
}

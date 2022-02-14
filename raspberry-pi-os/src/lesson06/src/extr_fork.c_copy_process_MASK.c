
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long x19; unsigned long x20; unsigned long pc; unsigned long sp; } ;
struct task_struct {unsigned long flags; int preempt_count; TYPE_1__ cpu_context; int priority; int counter; int state; } ;
struct pt_regs {scalar_t__* regs; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (struct task_struct*) ;
 struct task_struct* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_4 ;
 struct task_struct** VAR_5 ;
 struct pt_regs* FUNC_4 (struct task_struct*) ;

int FUNC_5(unsigned long VAR_6, unsigned long VAR_7, unsigned long VAR_8)
{
 FUNC_2();
 struct task_struct *VAR_9;

 unsigned long VAR_10 = FUNC_0();
 VAR_9 = (struct task_struct *) VAR_10;
 struct pt_regs *VAR_11 = FUNC_4(VAR_9);

 if (!VAR_9)
  return -1;

 if (VAR_6 & VAR_0) {
  VAR_9->cpu_context.x19 = VAR_7;
  VAR_9->cpu_context.x20 = VAR_8;
 } else {
  struct pt_regs * VAR_12 = FUNC_4(VAR_2);
  *VAR_11 = *VAR_12;
  VAR_11->regs[0] = 0;
  FUNC_1(VAR_9);
 }
 VAR_9->flags = VAR_6;
 VAR_9->priority = VAR_2->priority;
 VAR_9->state = VAR_1;
 VAR_9->counter = VAR_9->priority;
 VAR_9->preempt_count = 1;

 VAR_9->cpu_context.pc = (unsigned long)VAR_4;
 VAR_9->cpu_context.sp = (unsigned long)VAR_11;
 int VAR_13 = VAR_3++;
 VAR_5[VAR_13] = VAR_9;

 FUNC_3();
 return VAR_13;
}

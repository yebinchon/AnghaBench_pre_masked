
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long x19; unsigned long x20; unsigned long pc; unsigned long sp; } ;
struct task_struct {unsigned long stack; unsigned long flags; int preempt_count; TYPE_1__ cpu_context; int priority; int counter; int state; } ;
struct pt_regs {scalar_t__ sp; scalar_t__* regs; } ;
struct cpu_context {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 struct task_struct* VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (unsigned long,int) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_5 ;
 struct task_struct** VAR_6 ;
 struct pt_regs* FUNC_4 (struct task_struct*) ;

int FUNC_5(unsigned long VAR_7, unsigned long VAR_8, unsigned long VAR_9, unsigned long VAR_10)
{
 FUNC_2();
 struct task_struct *VAR_11;

 VAR_11 = (struct task_struct *) FUNC_0();
 if (!VAR_11) {
  return -1;
 }

 struct pt_regs *VAR_12 = FUNC_4(VAR_11);
 FUNC_1((unsigned long)VAR_12, sizeof(struct pt_regs));
 FUNC_1((unsigned long)&VAR_11->cpu_context, sizeof(struct cpu_context));

 if (VAR_7 & VAR_1) {
  VAR_11->cpu_context.x19 = VAR_8;
  VAR_11->cpu_context.x20 = VAR_9;
 } else {
  struct pt_regs * VAR_13 = FUNC_4(VAR_3);
  *VAR_12 = *VAR_13;
  VAR_12->regs[0] = 0;
  VAR_12->sp = VAR_10 + VAR_0;
  VAR_11->stack = VAR_10;
 }
 VAR_11->flags = VAR_7;
 VAR_11->priority = VAR_3->priority;
 VAR_11->state = VAR_2;
 VAR_11->counter = VAR_11->priority;
 VAR_11->preempt_count = 1;

 VAR_11->cpu_context.pc = (unsigned long)VAR_5;
 VAR_11->cpu_context.sp = (unsigned long)VAR_12;
 int VAR_14 = VAR_4++;
 VAR_6[VAR_14] = VAR_11;
 FUNC_3();
 return VAR_14;
}

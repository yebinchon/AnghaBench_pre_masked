
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long x19; unsigned long x20; unsigned long pc; scalar_t__ sp; } ;
struct task_struct {long priority; long counter; int preempt_count; struct task_struct* next; TYPE_1__ cpu_context; int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 struct task_struct* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;

int FUNC_3(unsigned long VAR_4, unsigned long VAR_5, long VAR_6) {
  FUNC_1();
  struct task_struct *VAR_7;

  VAR_7 = (struct task_struct *)FUNC_0();
  if (!VAR_7)
    return 1;
  VAR_7->priority = VAR_6;
  VAR_7->state = VAR_0;
  VAR_7->counter = VAR_7->priority;
  VAR_7->preempt_count = 1;
  VAR_7->next = 0;

  VAR_7->cpu_context.x19 = VAR_4;
  VAR_7->cpu_context.x20 = VAR_5;
  VAR_7->cpu_context.pc = (unsigned long)VAR_3;
  VAR_7->cpu_context.sp = (unsigned long)VAR_7 + VAR_1;

  struct task_struct *VAR_8 = VAR_2;
  while (VAR_8->next)
    VAR_8 = VAR_8->next;
  VAR_8->next = VAR_7;
  FUNC_2();
  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long x19; unsigned long x20; unsigned long pc; int sp; } ;
struct task_struct {int preempt_count; TYPE_1__ cpu_context; int priority; int counter; int state; } ;
struct TYPE_4__ {int priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int) ;
 scalar_t__ VAR_4 ;
 struct task_struct** VAR_5 ;

int FUNC_4(unsigned long VAR_6, unsigned long VAR_7)
{
 FUNC_1();
 struct task_struct *VAR_8;

 VAR_8 = (struct task_struct *) FUNC_0();
 if (!VAR_8)
  return 1;
 VAR_8->priority = VAR_2->priority;
 VAR_8->state = VAR_0;
 VAR_8->counter = VAR_8->priority;
 VAR_8->preempt_count = 1;

 VAR_8->cpu_context.x19 = VAR_6;
 VAR_8->cpu_context.x20 = VAR_7;
 VAR_8->cpu_context.pc = (unsigned long)VAR_4;
 VAR_8->cpu_context.sp = (unsigned long)VAR_8 + VAR_1;
 int VAR_9 = VAR_3++;
 VAR_5[VAR_9] = VAR_8;
 FUNC_3("Process created, pid: %d, sp: 0x%x\r\n", VAR_9, VAR_8->cpu_context.sp);
 FUNC_2();
 return 0;
}

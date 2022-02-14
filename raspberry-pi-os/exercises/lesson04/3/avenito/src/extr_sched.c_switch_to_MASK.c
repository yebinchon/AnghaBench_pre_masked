
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sp; } ;
struct task_struct {int counter; int priority; int preempt_count; TYPE_1__ cpu_context; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,struct task_struct*) ;
 struct task_struct* VAR_1 ;
 int FUNC_1 (char*,...) ;
 struct task_struct** VAR_2 ;

void FUNC_2(struct task_struct * VAR_3)
{
 struct task_struct * VAR_4;
 FUNC_1("\n\r\n\r----------- Task switch -----------\r\n");
 for(int VAR_5=0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = VAR_2[VAR_5];
  FUNC_1("\n\rtask[%d] counter = %d\n\r", VAR_5, VAR_4->counter);
  FUNC_1("task[%d] priority = %d\n\r", VAR_5, VAR_4->priority);
  FUNC_1("task[%d] preempt_count = %d\n\r", VAR_5, VAR_4->preempt_count);
  FUNC_1("task[%d] sp = 0x%08x\n\r", VAR_5, VAR_4->cpu_context.sp);
  FUNC_1("\n\r------------------------------\r\n");
 }
 FUNC_1("\n\rtask output: ");

 if (VAR_1 == VAR_3)
  return;
 struct task_struct * VAR_6 = VAR_1;
 VAR_1 = VAR_3;
 FUNC_0(VAR_6, VAR_3);
}

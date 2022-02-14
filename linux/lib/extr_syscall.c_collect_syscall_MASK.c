
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int nr; int * args; int instruction_pointer; } ;
struct syscall_info {TYPE_1__ data; int sp; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct syscall_info*,int ,int) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*,struct pt_regs*,unsigned long*) ;
 int FUNC_4 (struct task_struct*,struct pt_regs*) ;
 struct pt_regs* FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_9(struct task_struct *VAR_1, struct syscall_info *VAR_2)
{
 struct pt_regs *VAR_3;

 if (!FUNC_6(VAR_1)) {

  FUNC_1(VAR_2, 0, sizeof(*VAR_2));
  VAR_2->data.nr = -1;
  return 0;
 }

 VAR_3 = FUNC_5(VAR_1);
 if (FUNC_7(!VAR_3)) {
  FUNC_2(VAR_1);
  return -VAR_0;
 }

 VAR_2->sp = FUNC_8(VAR_3);
 VAR_2->data.instruction_pointer = FUNC_0(VAR_3);

 VAR_2->data.nr = FUNC_4(VAR_1, VAR_3);
 if (VAR_2->data.nr != -1L)
  FUNC_3(VAR_1, VAR_3,
          (unsigned long *)&VAR_2->data.args[0]);

 FUNC_2(VAR_1);
 return 0;
}

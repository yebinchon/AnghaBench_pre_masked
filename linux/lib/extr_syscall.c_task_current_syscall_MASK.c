
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {long state; } ;
struct syscall_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,struct syscall_info*) ;
 struct task_struct* VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 unsigned long FUNC_2 (struct task_struct*,long) ;

int FUNC_3(struct task_struct *VAR_2, struct syscall_info *VAR_3)
{
 long VAR_4;
 unsigned long VAR_5;

 if (VAR_2 == VAR_1)
  return FUNC_0(VAR_2, VAR_3);

 VAR_4 = VAR_2->state;
 if (FUNC_1(!VAR_4))
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_2, VAR_4);
 if (FUNC_1(!VAR_5) ||
     FUNC_1(FUNC_0(VAR_2, VAR_3)) ||
     FUNC_1(FUNC_2(VAR_2, VAR_4) != VAR_5))
  return -VAR_0;

 return 0;
}

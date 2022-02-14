
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pid {int dummy; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 struct pid* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 (struct task_struct*,int) ;

struct pid *FUNC_5(struct task_struct *VAR_0, enum pid_type VAR_1)
{
 struct pid *VAR_2;
 FUNC_2();
 VAR_2 = FUNC_0(FUNC_1(*FUNC_4(VAR_0, VAR_1)));
 FUNC_3();
 return VAR_2;
}

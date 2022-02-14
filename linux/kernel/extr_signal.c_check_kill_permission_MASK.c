
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pid {int dummy; } ;
struct kernel_siginfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int,struct task_struct*) ;
 struct task_struct* VAR_2 ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*,struct task_struct*) ;
 int FUNC_3 (struct task_struct*,struct kernel_siginfo*,int,int *) ;
 int FUNC_4 (struct kernel_siginfo*) ;
 struct pid* FUNC_5 (struct task_struct*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(int VAR_3, struct kernel_siginfo *VAR_4,
     struct task_struct *VAR_5)
{
 struct pid *VAR_6;
 int VAR_7;

 if (!FUNC_6(VAR_3))
  return -VAR_0;

 if (!FUNC_4(VAR_4))
  return 0;

 VAR_7 = FUNC_0(VAR_3, VAR_5);
 if (VAR_7)
  return VAR_7;

 if (!FUNC_2(VAR_2, VAR_5) &&
     !FUNC_1(VAR_5)) {
  switch (VAR_3) {
  case 128:
   VAR_6 = FUNC_5(VAR_5);




   if (!VAR_6 || VAR_6 == FUNC_5(VAR_2))
    break;

  default:
   return -VAR_1;
  }
 }

 return FUNC_3(VAR_5, VAR_4, VAR_3, ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef int pid_t ;
typedef int clockid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const) ;
 int FUNC_3 (struct task_struct*) ;
 struct task_struct* FUNC_4 (int const,int const,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static struct task_struct *FUNC_7(const clockid_t VAR_1,
      bool VAR_2, bool VAR_3)
{
 const bool VAR_4 = !!FUNC_0(VAR_1);
 const pid_t VAR_5 = FUNC_1(VAR_1);
 struct task_struct *VAR_6;

 if (FUNC_2(VAR_1) >= VAR_0)
  return ((void*)0);

 FUNC_5();
 VAR_6 = FUNC_4(VAR_5, VAR_4, VAR_3);
 if (VAR_6 && VAR_2)
  FUNC_3(VAR_6);
 FUNC_6();
 return VAR_6;
}

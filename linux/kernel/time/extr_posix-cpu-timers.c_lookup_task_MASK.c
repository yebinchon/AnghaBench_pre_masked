
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct task_struct* group_leader; } ;
typedef int pid_t ;


 struct task_struct* VAR_0 ;
 struct task_struct* FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (struct task_struct*,struct task_struct*) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;

__attribute__((used)) static struct task_struct *FUNC_4(const pid_t VAR_1, bool VAR_2,
           bool VAR_3)
{
 struct task_struct *VAR_4;





 if (!VAR_1)
  return VAR_2 ? VAR_0 : VAR_0->group_leader;

 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4)
  return VAR_4;

 if (VAR_2)
  return FUNC_2(VAR_4, VAR_0) ? VAR_4 : ((void*)0);

 if (VAR_3) {
  return (VAR_4 == VAR_0 || FUNC_3(VAR_4)) ? VAR_4 : ((void*)0);
 }




 return FUNC_1(VAR_4) ? VAR_4 : ((void*)0);
}

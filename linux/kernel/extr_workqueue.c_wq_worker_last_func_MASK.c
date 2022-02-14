
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int work_func_t ;
struct worker {int last_func; } ;
struct task_struct {int dummy; } ;


 struct worker* FUNC_0 (struct task_struct*) ;

work_func_t FUNC_1(struct task_struct *VAR_0)
{
 struct worker *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->last_func;
}

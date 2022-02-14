
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct kthread {scalar_t__ blkcg_css; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kthread*) ;
 struct kthread* FUNC_2 (struct task_struct*) ;

void FUNC_3(struct task_struct *VAR_0)
{
 struct kthread *VAR_1;





 VAR_1 = FUNC_2(VAR_0);



 FUNC_1(VAR_1);
}

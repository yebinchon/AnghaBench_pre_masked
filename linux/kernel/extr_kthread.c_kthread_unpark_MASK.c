
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct kthread {int flags; int cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct task_struct*,int ,int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 struct kthread* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*,int ) ;

void FUNC_5(struct task_struct *VAR_3)
{
 struct kthread *VAR_4 = FUNC_3(VAR_3);





 if (FUNC_2(VAR_0, &VAR_4->flags))
  FUNC_0(VAR_3, VAR_4->cpu, VAR_2);

 FUNC_1(VAR_1, &VAR_4->flags);



 FUNC_4(VAR_3, VAR_2);
}

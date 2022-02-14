
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int rcu_urgent_qs; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;

void FUNC_5(struct task_struct *VAR_1)
{
 int VAR_2;

 FUNC_0();
 VAR_2 = FUNC_3(VAR_1);
 if (!FUNC_4(VAR_1))
  return;
 FUNC_2(FUNC_1(&VAR_0.rcu_urgent_qs, VAR_2), 1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int pi_lock; struct rt_mutex_waiter* pi_blocked_on; } ;
struct rt_mutex_waiter {struct rt_mutex* lock; } ;
struct rt_mutex {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct task_struct*,int ,int *,struct rt_mutex*,int *,struct task_struct*) ;
 scalar_t__ FUNC_4 (struct rt_mutex_waiter*,int ) ;
 int FUNC_5 (struct task_struct*) ;

void FUNC_6(struct task_struct *VAR_1)
{
 struct rt_mutex_waiter *VAR_2;
 struct rt_mutex *VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_1->pi_lock, VAR_4);

 VAR_2 = VAR_1->pi_blocked_on;
 if (!VAR_2 || FUNC_4(VAR_2, FUNC_5(VAR_1))) {
  FUNC_2(&VAR_1->pi_lock, VAR_4);
  return;
 }
 VAR_3 = VAR_2->lock;
 FUNC_2(&VAR_1->pi_lock, VAR_4);


 FUNC_0(VAR_1);

 FUNC_3(VAR_1, VAR_0, ((void*)0),
       VAR_3, ((void*)0), VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rt_mutex_waiter {int dummy; } ;
struct rt_mutex {int wait_lock; } ;


 int FUNC_0 (struct rt_mutex*,struct rt_mutex_waiter*,struct task_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rt_mutex*,struct rt_mutex_waiter*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct rt_mutex *VAR_0,
         struct rt_mutex_waiter *VAR_1,
         struct task_struct *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0->wait_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (FUNC_4(VAR_3))
  FUNC_3(VAR_0, VAR_1);
 FUNC_2(&VAR_0->wait_lock);

 return VAR_3;
}

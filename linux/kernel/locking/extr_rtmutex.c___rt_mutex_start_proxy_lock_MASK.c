
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rt_mutex_waiter {int dummy; } ;
struct rt_mutex {int wait_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt_mutex_waiter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rt_mutex*) ;
 int FUNC_3 (struct rt_mutex*,struct rt_mutex_waiter*,struct task_struct*,int ) ;
 scalar_t__ FUNC_4 (struct rt_mutex*,struct task_struct*,int *) ;

int FUNC_5(struct rt_mutex *VAR_1,
         struct rt_mutex_waiter *VAR_2,
         struct task_struct *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_1->wait_lock);

 if (FUNC_4(VAR_1, VAR_3, ((void*)0)))
  return 1;


 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3,
          VAR_0);

 if (VAR_4 && !FUNC_2(VAR_1)) {






  VAR_4 = 0;
 }

 FUNC_0(VAR_2);

 return VAR_4;
}

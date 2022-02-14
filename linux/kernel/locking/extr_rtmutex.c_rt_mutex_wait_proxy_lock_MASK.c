
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_mutex_waiter {int dummy; } ;
struct rt_mutex {int wait_lock; } ;
struct hrtimer_sleeper {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt_mutex*,int ,struct hrtimer_sleeper*,struct rt_mutex_waiter*) ;
 int FUNC_1 (struct rt_mutex*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct rt_mutex *VAR_1,
          struct hrtimer_sleeper *VAR_2,
          struct rt_mutex_waiter *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_1->wait_lock);

 FUNC_4(VAR_0);
 VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_2, VAR_3);




 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->wait_lock);

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_mutex_waiter {int dummy; } ;
struct rt_mutex {int wait_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rt_mutex*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rt_mutex*,struct rt_mutex_waiter*) ;
 scalar_t__ FUNC_4 (struct rt_mutex*) ;
 int FUNC_5 (struct rt_mutex*,scalar_t__,struct rt_mutex_waiter*) ;

bool FUNC_6(struct rt_mutex *VAR_1,
     struct rt_mutex_waiter *VAR_2)
{
 bool VAR_3 = 0;

 FUNC_1(&VAR_1->wait_lock);
 FUNC_5(VAR_1, VAR_0, VAR_2);




 if (FUNC_4(VAR_1) != VAR_0) {
  FUNC_3(VAR_1, VAR_2);
  VAR_3 = 1;
 }




 FUNC_0(VAR_1);

 FUNC_2(&VAR_1->wait_lock);

 return VAR_3;
}

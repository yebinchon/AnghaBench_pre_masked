
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int pi_lock; int * pi_blocked_on; } ;
struct rt_mutex_waiter {int dummy; } ;
struct rt_mutex {int wait_lock; } ;


 int FUNC_0 (struct rt_mutex*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rt_mutex*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rt_mutex*,struct rt_mutex_waiter*) ;
 int FUNC_6 (struct task_struct*,struct rt_mutex_waiter*) ;
 scalar_t__ FUNC_7 (struct rt_mutex*) ;
 scalar_t__ FUNC_8 (struct rt_mutex*) ;
 int FUNC_9 (struct rt_mutex*,struct task_struct*) ;
 struct rt_mutex_waiter* FUNC_10 (struct rt_mutex*) ;
 int FUNC_11 (int ,struct rt_mutex_waiter*) ;
 int FUNC_12 (struct task_struct*) ;

__attribute__((used)) static int FUNC_13(struct rt_mutex *VAR_0, struct task_struct *VAR_1,
    struct rt_mutex_waiter *VAR_2)
{
 FUNC_1(&VAR_0->wait_lock);
 FUNC_2(VAR_0);




 if (FUNC_8(VAR_0))
  return 0;






 if (VAR_2) {




  if (VAR_2 != FUNC_10(VAR_0))
   return 0;





  FUNC_5(VAR_0, VAR_2);

 } else {
  if (FUNC_7(VAR_0)) {





   if (!FUNC_11(FUNC_12(VAR_1),
        FUNC_10(VAR_0)))
    return 0;






  } else {






   goto takeit;
  }
 }







 FUNC_3(&VAR_1->pi_lock);
 VAR_1->pi_blocked_on = ((void*)0);





 if (FUNC_7(VAR_0))
  FUNC_6(VAR_1, FUNC_10(VAR_0));
 FUNC_4(&VAR_1->pi_lock);

takeit:

 FUNC_0(VAR_0);





 FUNC_9(VAR_0, VAR_1);

 return 1;
}

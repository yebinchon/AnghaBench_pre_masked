
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int pi_lock; } ;
struct rt_mutex_waiter {int dummy; } ;
struct rt_mutex {int wait_lock; } ;
struct TYPE_3__ {int pi_lock; int * pi_blocked_on; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct task_struct*,int ,struct rt_mutex*,struct rt_mutex*,int *,TYPE_1__*) ;
 int FUNC_8 (struct rt_mutex*,struct rt_mutex_waiter*) ;
 int FUNC_9 (struct task_struct*,struct rt_mutex_waiter*) ;
 int FUNC_10 (struct task_struct*,struct rt_mutex_waiter*) ;
 scalar_t__ FUNC_11 (struct rt_mutex*) ;
 struct task_struct* FUNC_12 (struct rt_mutex*) ;
 struct rt_mutex_waiter* FUNC_13 (struct rt_mutex*) ;
 struct rt_mutex* FUNC_14 (struct task_struct*) ;

__attribute__((used)) static void FUNC_15(struct rt_mutex *VAR_2,
     struct rt_mutex_waiter *VAR_3)
{
 bool VAR_4 = (VAR_3 == FUNC_13(VAR_2));
 struct task_struct *VAR_5 = FUNC_12(VAR_2);
 struct rt_mutex *VAR_6;

 FUNC_1(&VAR_2->wait_lock);

 FUNC_2(&VAR_1->pi_lock);
 FUNC_8(VAR_2, VAR_3);
 VAR_1->pi_blocked_on = ((void*)0);
 FUNC_4(&VAR_1->pi_lock);





 if (!VAR_5 || !VAR_4)
  return;

 FUNC_2(&VAR_5->pi_lock);

 FUNC_9(VAR_5, VAR_3);

 if (FUNC_11(VAR_2))
  FUNC_10(VAR_5, FUNC_13(VAR_2));

 FUNC_6(VAR_5);


 VAR_6 = FUNC_14(VAR_5);

 FUNC_4(&VAR_5->pi_lock);





 if (!VAR_6)
  return;


 FUNC_0(VAR_5);

 FUNC_5(&VAR_2->wait_lock);

 FUNC_7(VAR_5, VAR_0, VAR_2,
       VAR_6, ((void*)0), VAR_1);

 FUNC_3(&VAR_2->wait_lock);
}

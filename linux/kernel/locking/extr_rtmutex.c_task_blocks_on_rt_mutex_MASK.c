
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int deadline; } ;
struct task_struct {int pi_lock; struct rt_mutex_waiter* pi_blocked_on; TYPE_1__ dl; int prio; } ;
struct rt_mutex_waiter {int deadline; int prio; struct rt_mutex* lock; struct task_struct* task; } ;
struct rt_mutex {int wait_lock; } ;
typedef enum rtmutex_chainwalk { ____Placeholder_rtmutex_chainwalk } rtmutex_chainwalk ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct task_struct*,int,struct rt_mutex*,struct rt_mutex*,struct rt_mutex_waiter*,struct task_struct*) ;
 scalar_t__ FUNC_8 (struct rt_mutex_waiter*,int) ;
 int FUNC_9 (struct task_struct*,struct rt_mutex_waiter*) ;
 int FUNC_10 (struct rt_mutex*,struct rt_mutex_waiter*) ;
 int FUNC_11 (struct task_struct*,struct rt_mutex_waiter*) ;
 scalar_t__ FUNC_12 (struct rt_mutex*) ;
 struct task_struct* FUNC_13 (struct rt_mutex*) ;
 struct rt_mutex_waiter* FUNC_14 (struct rt_mutex*) ;
 struct rt_mutex* FUNC_15 (struct task_struct*) ;

__attribute__((used)) static int FUNC_16(struct rt_mutex *VAR_1,
       struct rt_mutex_waiter *VAR_2,
       struct task_struct *VAR_3,
       enum rtmutex_chainwalk VAR_4)
{
 struct task_struct *VAR_5 = FUNC_13(VAR_1);
 struct rt_mutex_waiter *VAR_6 = VAR_2;
 struct rt_mutex *VAR_7;
 int VAR_8 = 0, VAR_9;

 FUNC_1(&VAR_1->wait_lock);
 if (VAR_5 == VAR_3)
  return -VAR_0;

 FUNC_2(&VAR_3->pi_lock);
 VAR_2->task = VAR_3;
 VAR_2->lock = VAR_1;
 VAR_2->prio = VAR_3->prio;
 VAR_2->deadline = VAR_3->dl.deadline;


 if (FUNC_12(VAR_1))
  VAR_6 = FUNC_14(VAR_1);
 FUNC_10(VAR_1, VAR_2);

 VAR_3->pi_blocked_on = VAR_2;

 FUNC_4(&VAR_3->pi_lock);

 if (!VAR_5)
  return 0;

 FUNC_2(&VAR_5->pi_lock);
 if (VAR_2 == FUNC_14(VAR_1)) {
  FUNC_9(VAR_5, VAR_6);
  FUNC_11(VAR_5, VAR_2);

  FUNC_6(VAR_5);
  if (VAR_5->pi_blocked_on)
   VAR_8 = 1;
 } else if (FUNC_8(VAR_2, VAR_4)) {
  VAR_8 = 1;
 }


 VAR_7 = FUNC_15(VAR_5);

 FUNC_4(&VAR_5->pi_lock);





 if (!VAR_8 || !VAR_7)
  return 0;






 FUNC_0(VAR_5);

 FUNC_5(&VAR_1->wait_lock);

 VAR_9 = FUNC_7(VAR_5, VAR_4, VAR_1,
      VAR_7, VAR_2, VAR_3);

 FUNC_3(&VAR_1->wait_lock);

 return VAR_9;
}

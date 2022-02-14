
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wake_q_head {int dummy; } ;
struct rt_mutex_waiter {int task; } ;
struct rt_mutex {void* owner; } ;
struct TYPE_4__ {int pi_lock; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,struct rt_mutex_waiter*) ;
 struct rt_mutex_waiter* FUNC_5 (struct rt_mutex*) ;
 int FUNC_6 (struct wake_q_head*,int ) ;

__attribute__((used)) static void FUNC_7(struct wake_q_head *VAR_2,
        struct rt_mutex *VAR_3)
{
 struct rt_mutex_waiter *VAR_4;

 FUNC_1(&VAR_1->pi_lock);

 VAR_4 = FUNC_5(VAR_3);
 FUNC_4(VAR_1, VAR_4);
 FUNC_3(VAR_1);
 VAR_3->owner = (void *) VAR_0;
 FUNC_0();
 FUNC_6(VAR_2, VAR_4->task);
 FUNC_2(&VAR_1->pi_lock);
}

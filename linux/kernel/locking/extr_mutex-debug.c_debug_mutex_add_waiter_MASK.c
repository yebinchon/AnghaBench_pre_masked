
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct mutex_waiter* blocked_on; } ;
struct mutex_waiter {int dummy; } ;
struct mutex {int wait_lock; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct mutex *VAR_0, struct mutex_waiter *VAR_1,
       struct task_struct *VAR_2)
{
 FUNC_0(&VAR_0->wait_lock);


 VAR_2->blocked_on = VAR_1;
}

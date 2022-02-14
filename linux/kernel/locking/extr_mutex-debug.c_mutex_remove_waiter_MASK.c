
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct mutex_waiter* blocked_on; } ;
struct mutex_waiter {struct task_struct* task; int list; } ;
struct mutex {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mutex *VAR_0, struct mutex_waiter *VAR_1,
    struct task_struct *VAR_2)
{
 FUNC_0(FUNC_2(&VAR_1->list));
 FUNC_0(VAR_1->task != VAR_2);
 FUNC_0(VAR_2->blocked_on != VAR_1);
 VAR_2->blocked_on = ((void*)0);

 FUNC_1(&VAR_1->list);
 VAR_1->task = ((void*)0);
}

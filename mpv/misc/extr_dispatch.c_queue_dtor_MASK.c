
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_dispatch_queue {int lock; int cond; int locked; int lock_requests; int in_process; int head; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    struct mp_dispatch_queue *VAR_1 = VAR_0;
    FUNC_0(!VAR_1->head);
    FUNC_0(!VAR_1->in_process);
    FUNC_0(!VAR_1->lock_requests);
    FUNC_0(!VAR_1->locked);
    FUNC_1(&VAR_1->cond);
    FUNC_2(&VAR_1->lock);
}

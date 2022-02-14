
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_dispatch_queue {scalar_t__ wait; int lock; int cond; scalar_t__ in_process; } ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mp_dispatch_queue *VAR_0, int64_t VAR_1)
{
    FUNC_1(&VAR_0->lock);
    if (VAR_0->in_process && VAR_0->wait > VAR_1) {
        VAR_0->wait = VAR_1;
        FUNC_0(&VAR_0->cond);
    }
    FUNC_2(&VAR_0->lock);
}

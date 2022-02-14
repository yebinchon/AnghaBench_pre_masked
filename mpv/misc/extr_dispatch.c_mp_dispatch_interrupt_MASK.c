
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_dispatch_queue {int interrupted; int lock; int cond; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mp_dispatch_queue *VAR_0)
{
    FUNC_1(&VAR_0->lock);
    VAR_0->interrupted = 1;
    FUNC_0(&VAR_0->cond);
    FUNC_2(&VAR_0->lock);
}

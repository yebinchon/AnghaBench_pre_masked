
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_dispatch_queue {int locked; int locked_explicit; int lock_requests; int lock; int cond; int locked_explicit_thread; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

void FUNC_6(struct mp_dispatch_queue *VAR_0)
{
    FUNC_3(&VAR_0->lock);
    FUNC_0(VAR_0->locked);

    FUNC_0(VAR_0->locked_explicit);
    FUNC_0(FUNC_2(VAR_0->locked_explicit_thread, FUNC_5()));

    VAR_0->locked = 0;
    VAR_0->locked_explicit = 0;
    VAR_0->lock_requests -= 1;


    FUNC_1(&VAR_0->cond);
    FUNC_4(&VAR_0->lock);
}

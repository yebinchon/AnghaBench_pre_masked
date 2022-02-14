
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cancel {scalar_t__* wakeup_pipe; int lock; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mp_cancel*) ;

int FUNC_4(struct mp_cancel *VAR_0)
{
    FUNC_1(&VAR_0->lock);
    if (VAR_0->wakeup_pipe[0] < 0) {
        FUNC_0(VAR_0->wakeup_pipe);
        FUNC_3(VAR_0);
    }
    FUNC_2(&VAR_0->lock);


    return VAR_0->wakeup_pipe[0];
}

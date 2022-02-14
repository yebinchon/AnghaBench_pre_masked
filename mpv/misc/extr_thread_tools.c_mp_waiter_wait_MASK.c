
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_waiter {uintptr_t value; int wakeup; int lock; int done; } ;


 int FUNC_0 (struct mp_waiter*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

uintptr_t FUNC_6(struct mp_waiter *VAR_0)
{
    FUNC_4(&VAR_0->lock);
    while (!VAR_0->done)
        FUNC_2(&VAR_0->wakeup, &VAR_0->lock);
    FUNC_5(&VAR_0->lock);

    uintptr_t VAR_1 = VAR_0->value;
    FUNC_3(&VAR_0->lock);
    FUNC_1(&VAR_0->wakeup);

    FUNC_0(VAR_0, 0xCA, sizeof(*VAR_0));

    return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_dispatch_queue {int lock; int cond; } ;
struct mp_dispatch_item {void* fn_data; int completed; int fn; } ;
typedef int mp_dispatch_fn ;


 int FUNC_0 (struct mp_dispatch_queue*,struct mp_dispatch_item*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mp_dispatch_queue *VAR_0,
                     mp_dispatch_fn VAR_1, void *VAR_2)
{
    struct mp_dispatch_item VAR_3 = {
        .fn = VAR_1,
        .fn_data = VAR_2,
    };
    FUNC_0(VAR_0, &VAR_3);

    FUNC_2(&VAR_0->lock);
    while (!VAR_3.completed)
        FUNC_1(&VAR_0->cond, &VAR_0->lock);
    FUNC_3(&VAR_0->lock);
}

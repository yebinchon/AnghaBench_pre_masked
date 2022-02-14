
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_dispatch_queue {void (* wakeup_fn ) (void*) ;void* wakeup_ctx; } ;



void FUNC_0(struct mp_dispatch_queue *VAR_0,
                               void (*VAR_1)(void *VAR_2),
                               void *VAR_3)
{
    VAR_0->wakeup_fn = VAR_1;
    VAR_0->wakeup_ctx = VAR_3;
}

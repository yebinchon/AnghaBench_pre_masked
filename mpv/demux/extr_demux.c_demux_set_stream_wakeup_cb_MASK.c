
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_stream {TYPE_2__* ds; } ;
struct TYPE_4__ {void (* wakeup_cb ) (void*) ;int need_wakeup; TYPE_1__* in; void* wakeup_cb_ctx; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct sh_stream *VAR_0,
                                void (*VAR_1)(void *VAR_2), void *VAR_3)
{
    FUNC_0(&VAR_0->ds->in->lock);
    VAR_0->ds->wakeup_cb = VAR_1;
    VAR_0->ds->wakeup_cb_ctx = VAR_3;
    VAR_0->ds->need_wakeup = 1;
    FUNC_1(&VAR_0->ds->in->lock);
}

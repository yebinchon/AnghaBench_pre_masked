
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_dispatch_queue {int dummy; } ;
struct m_config_cache {void (* wakeup_dispatch_cb ) (void*) ;int * wakeup_dispatch_cb_ctx; struct mp_dispatch_queue* wakeup_dispatch_queue; } ;


 int * VAR_0 ;
 int FUNC_0 (struct m_config_cache*,int *,struct m_config_cache*) ;
 int FUNC_1 (struct mp_dispatch_queue*,void (*) (void*),int *) ;

void FUNC_2(struct m_config_cache *VAR_1,
                                           struct mp_dispatch_queue *VAR_2,
                                           void (*VAR_3)(void *VAR_4), void *VAR_5)
{


    FUNC_0(VAR_1, ((void*)0), ((void*)0));


    if (VAR_1->wakeup_dispatch_queue) {
        FUNC_1(VAR_1->wakeup_dispatch_queue,
                              VAR_1->wakeup_dispatch_cb,
                              VAR_1->wakeup_dispatch_cb_ctx);
    }

    VAR_1->wakeup_dispatch_queue = ((void*)0);
    VAR_1->wakeup_dispatch_cb = ((void*)0);
    VAR_1->wakeup_dispatch_cb_ctx = ((void*)0);

    if (VAR_3) {
        VAR_1->wakeup_dispatch_queue = VAR_2;
        VAR_1->wakeup_dispatch_cb = VAR_3;
        VAR_1->wakeup_dispatch_cb_ctx = VAR_5;
        FUNC_0(VAR_1, VAR_0, VAR_1);
    }
}

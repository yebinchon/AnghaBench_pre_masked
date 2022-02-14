
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* wakeup_cb ) (void*) ;void* wakeup_cb_ctx; int wakeup_lock; } ;
typedef TYPE_1__ mpv_handle ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void FUNC_2 (void*) ;

void FUNC_3(mpv_handle *VAR_0, void (*VAR_1)(void *VAR_2), void *VAR_3)
{
    FUNC_0(&VAR_0->wakeup_lock);
    VAR_0->wakeup_cb = VAR_1;
    VAR_0->wakeup_cb_ctx = VAR_3;
    if (VAR_0->wakeup_cb)
        VAR_0->wakeup_cb(VAR_0->wakeup_cb_ctx);
    FUNC_1(&VAR_0->wakeup_lock);
}

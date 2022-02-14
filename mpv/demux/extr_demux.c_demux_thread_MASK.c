
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct demux_internal {int shutdown_async; int lock; int wakeup_cb_ctx; int (* wakeup_cb ) (int ) ;int wakeup; int next_cache_update; int thread_terminate; } ;


 int FUNC_0 (struct demux_internal*) ;
 struct timespec FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,struct timespec*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct demux_internal*) ;

__attribute__((used)) static void *FUNC_9(void *VAR_0)
{
    struct demux_internal *VAR_1 = VAR_0;
    FUNC_2("demux");
    FUNC_5(&VAR_1->lock);

    while (!VAR_1->thread_terminate) {
        if (FUNC_8(VAR_1))
            continue;
        FUNC_3(&VAR_1->wakeup);
        struct timespec VAR_2 = FUNC_1(VAR_1->next_cache_update);
        FUNC_4(&VAR_1->wakeup, &VAR_1->lock, &VAR_2);
    }

    if (VAR_1->shutdown_async) {
        FUNC_6(&VAR_1->lock);
        FUNC_0(VAR_1);
        FUNC_5(&VAR_1->lock);
        VAR_1->shutdown_async = 0;
        if (VAR_1->wakeup_cb)
            VAR_1->wakeup_cb(VAR_1->wakeup_cb_ctx);
    }

    FUNC_6(&VAR_1->lock);
    return ((void*)0);
}

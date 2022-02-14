
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demuxer {struct demux_internal* in; } ;
struct demux_internal {int thread_terminate; int shutdown_async; int lock; int wakeup; int threading; struct demuxer* d_user; } ;
struct demux_free_async_state {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct demux_free_async_state *FUNC_4(struct demuxer *VAR_0)
{
    struct demux_internal *VAR_1 = VAR_0->in;
    FUNC_0(VAR_0 == VAR_1->d_user);

    if (!VAR_1->threading)
        return ((void*)0);

    FUNC_2(&VAR_1->lock);
    VAR_1->thread_terminate = 1;
    VAR_1->shutdown_async = 1;
    FUNC_1(&VAR_1->wakeup);
    FUNC_3(&VAR_1->lock);

    return (struct demux_free_async_state *)VAR_0->in;
}

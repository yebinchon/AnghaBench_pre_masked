
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demuxer {struct demux_internal* in; } ;
struct demux_internal {int threading; int thread_terminate; int thread; int lock; int wakeup; struct demuxer* d_user; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct demuxer *VAR_0)
{
    struct demux_internal *VAR_1 = VAR_0->in;
    FUNC_0(VAR_0 == VAR_1->d_user);

    if (VAR_1->threading) {
        FUNC_3(&VAR_1->lock);
        VAR_1->thread_terminate = 1;
        FUNC_1(&VAR_1->wakeup);
        FUNC_4(&VAR_1->lock);
        FUNC_2(VAR_1->thread, ((void*)0));
        VAR_1->threading = 0;
        VAR_1->thread_terminate = 0;
    }
}

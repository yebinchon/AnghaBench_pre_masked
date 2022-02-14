
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demuxer {struct demux_internal* in; } ;
struct demux_internal {void (* wakeup_cb ) (void*) ;int lock; void* wakeup_cb_ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct demuxer *VAR_0, void (*VAR_1)(void *VAR_2), void *VAR_3)
{
    struct demux_internal *VAR_4 = VAR_0->in;
    FUNC_0(&VAR_4->lock);
    VAR_4->wakeup_cb = VAR_1;
    VAR_4->wakeup_cb_ctx = VAR_3;
    FUNC_1(&VAR_4->lock);
}

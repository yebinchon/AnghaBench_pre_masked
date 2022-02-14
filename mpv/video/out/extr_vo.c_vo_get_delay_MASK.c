
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_internal {int base_vsync; int vsync_interval; int lock; TYPE_1__* current_frame; int rendering; int frame_queued; } ;
struct vo {struct vo_internal* in; } ;
typedef int int64_t ;
struct TYPE_2__ {int num_vsyncs; int display_synced; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

double FUNC_4(struct vo *VAR_0)
{
    struct vo_internal *VAR_1 = VAR_0->in;
    FUNC_2(&VAR_1->lock);
    FUNC_0 (!VAR_1->frame_queued);
    int64_t VAR_2 = 0;
    if (VAR_1->base_vsync && VAR_1->vsync_interval > 1 && VAR_1->current_frame) {
        VAR_2 = VAR_1->base_vsync;
        int VAR_3 = !!VAR_1->rendering;
        VAR_2 += (VAR_1->current_frame->num_vsyncs + VAR_3) * VAR_1->vsync_interval;
        if (!VAR_1->current_frame->display_synced)
            VAR_2 = 0;
    }
    FUNC_3(&VAR_1->lock);
    return VAR_2 ? (VAR_2 - FUNC_1()) / 1e6 : 0;
}

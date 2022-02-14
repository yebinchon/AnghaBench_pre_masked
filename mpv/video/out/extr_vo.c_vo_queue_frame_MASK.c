
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_internal {int hasframe; int lock; scalar_t__ wakeup_pts; struct vo_frame* frame_queued; scalar_t__ current_frame_id; TYPE_1__* current_frame; } ;
struct vo_frame {int duration; scalar_t__ pts; scalar_t__ display_synced; scalar_t__ frame_id; } ;
struct vo {scalar_t__ config_ok; struct vo_internal* in; } ;
struct TYPE_2__ {int num_vsyncs; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vo*) ;

void FUNC_5(struct vo *VAR_0, struct vo_frame *VAR_1)
{
    struct vo_internal *VAR_2 = VAR_0->in;
    FUNC_2(&VAR_2->lock);
    FUNC_1(VAR_0->config_ok && !VAR_2->frame_queued &&
           (!VAR_2->current_frame || VAR_2->current_frame->num_vsyncs < 1));
    VAR_2->hasframe = 1;
    VAR_1->frame_id = ++(VAR_2->current_frame_id);
    VAR_2->frame_queued = VAR_1;
    VAR_2->wakeup_pts = VAR_1->display_synced
                   ? 0 : VAR_1->pts + FUNC_0(VAR_1->duration, 0);
    FUNC_4(VAR_0);
    FUNC_3(&VAR_2->lock);
}

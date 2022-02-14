
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_internal {int hasframe; int hasframe_rendered; TYPE_1__* current_frame; int current_frame_id; int * frame_queued; scalar_t__ delayed_count; scalar_t__ drop_count; } ;
struct vo {struct vo_internal* in; } ;
struct TYPE_2__ {int display_synced; scalar_t__ num_vsyncs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vo *VAR_1)
{
    struct vo_internal *VAR_2 = VAR_1->in;
    VAR_2->hasframe = 0;
    VAR_2->hasframe_rendered = 0;
    VAR_2->drop_count = 0;
    VAR_2->delayed_count = 0;
    FUNC_0(VAR_2->frame_queued);
    VAR_2->frame_queued = ((void*)0);
    VAR_2->current_frame_id += VAR_0 + 1;

    if (VAR_2->current_frame) {
        VAR_2->current_frame->num_vsyncs = 0;
        VAR_2->current_frame->display_synced = 0;
    }
}

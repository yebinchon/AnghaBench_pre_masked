
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_vsync_info {int last_queue_display_time; int skipped_vsyncs; int vsync_duration; } ;
struct oml_sync {int last_queue_display_time; int last_skipped_vsyncs; int vsync_duration; int state_ok; } ;


 int FUNC_0 (struct oml_sync*) ;

void FUNC_1(struct oml_sync *VAR_0, struct vo_vsync_info *VAR_1)
{
    if (!VAR_0->state_ok)
        FUNC_0(VAR_0);
    VAR_1->vsync_duration = VAR_0->vsync_duration;
    VAR_1->skipped_vsyncs = VAR_0->last_skipped_vsyncs;
    VAR_1->last_queue_display_time = VAR_0->last_queue_display_time;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oml_sync {int vsync_duration; int last_skipped_vsyncs; int last_queue_display_time; } ;



__attribute__((used)) static void FUNC_0(struct oml_sync *VAR_0)
{
    VAR_0->vsync_duration = -1;
    VAR_0->last_skipped_vsyncs = -1;
    VAR_0->last_queue_display_time = -1;
}

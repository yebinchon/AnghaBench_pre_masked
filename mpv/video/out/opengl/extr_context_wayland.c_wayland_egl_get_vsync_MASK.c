
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_wayland_state {int last_queue_display_time; int last_skipped_vsyncs; int vsync_duration; int hidden; scalar_t__ presentation; } ;
struct vo_vsync_info {int last_queue_display_time; int skipped_vsyncs; int vsync_duration; } ;
struct ra_ctx {TYPE_1__* vo; } ;
struct TYPE_2__ {struct vo_wayland_state* wl; } ;



__attribute__((used)) static void FUNC_0(struct ra_ctx *VAR_0, struct vo_vsync_info *VAR_1)
{
    struct vo_wayland_state *VAR_2 = VAR_0->vo->wl;
    if (VAR_2->presentation && !VAR_2->hidden) {
        VAR_1->vsync_duration = VAR_2->vsync_duration;
        VAR_1->skipped_vsyncs = VAR_2->last_skipped_vsyncs;
        VAR_1->last_queue_display_time = VAR_2->last_queue_display_time;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_frame {int dummy; } ;
struct MPContext {int num_past_frames; int display_sync_active; double speed_factor_a; double speed_factor_v; int time_frame; int video_speed; TYPE_1__* past_frames; } ;
struct TYPE_2__ {scalar_t__ num_vsyncs; } ;


 int FUNC_0 (struct MPContext*,char*,char*) ;
 int FUNC_1 (struct MPContext*,struct vo_frame*) ;
 int FUNC_2 (struct MPContext*,int) ;
 int FUNC_3 (struct MPContext*) ;

__attribute__((used)) static void FUNC_4(struct MPContext *VAR_0, struct vo_frame *VAR_1)
{
    FUNC_1(VAR_0, VAR_1);

    if (VAR_0->num_past_frames > 1 &&
        ((VAR_0->past_frames[1].num_vsyncs >= 0) != VAR_0->display_sync_active))
    {
        FUNC_0(VAR_0, "Video sync mode %s.\n",
                   VAR_0->display_sync_active ? "enabled" : "disabled");
    }

    if (!VAR_0->display_sync_active) {
        VAR_0->speed_factor_a = 1.0;
        VAR_0->speed_factor_v = 1.0;
        FUNC_3(VAR_0);

        FUNC_2(VAR_0, VAR_0->time_frame > 0 ?
            VAR_0->time_frame * VAR_0->video_speed : 0);
    }
}

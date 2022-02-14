
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct track {TYPE_1__* dec; } ;
struct MPContext {int num_next_frames; TYPE_2__* vo_chain; int video_status; scalar_t__ display_sync_drift_dir; scalar_t__ drop_message_shown; scalar_t__ mistimed_frames_total; scalar_t__ last_av_difference; scalar_t__ total_avsync_change; scalar_t__ num_past_frames; scalar_t__ last_frame_duration; int video_pts; scalar_t__ time_frame; scalar_t__ delay; int saved_frame; int * next_frames; int play_dir; } ;
struct TYPE_4__ {struct track* track; } ;
struct TYPE_3__ {int play_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(struct MPContext *VAR_3)
{
    if (VAR_3->vo_chain) {
        FUNC_1(VAR_3->vo_chain);
        struct track *VAR_4 = VAR_3->vo_chain->track;
        if (VAR_4 && VAR_4->dec)
            VAR_4->dec->play_dir = VAR_3->play_dir;
    }

    for (int VAR_5 = 0; VAR_5 < VAR_3->num_next_frames; VAR_5++)
        FUNC_0(&VAR_3->next_frames[VAR_5]);
    VAR_3->num_next_frames = 0;
    FUNC_0(&VAR_3->saved_frame);

    VAR_3->delay = 0;
    VAR_3->time_frame = 0;
    VAR_3->video_pts = VAR_0;
    VAR_3->last_frame_duration = 0;
    VAR_3->num_past_frames = 0;
    VAR_3->total_avsync_change = 0;
    VAR_3->last_av_difference = 0;
    VAR_3->mistimed_frames_total = 0;
    VAR_3->drop_message_shown = 0;
    VAR_3->display_sync_drift_dir = 0;

    VAR_3->video_status = VAR_3->vo_chain ? VAR_2 : VAR_1;
}

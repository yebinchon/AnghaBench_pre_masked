
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {scalar_t__ video_status; scalar_t__ audio_status; int playback_active; scalar_t__ in_playloop; int stop_play; scalar_t__ restart_complete; int paused; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct MPContext*,int ,int *) ;
 int FUNC_1 (struct MPContext*) ;

void FUNC_2(struct MPContext *VAR_2)
{
    bool VAR_3 = VAR_2->video_status == VAR_1 &&
               VAR_2->audio_status == VAR_1;
    bool VAR_4 = !VAR_2->paused && VAR_2->restart_complete &&
                  !VAR_2->stop_play && VAR_2->in_playloop && !VAR_3;

    if (VAR_2->playback_active != VAR_4) {
        VAR_2->playback_active = VAR_4;

        FUNC_1(VAR_2);

        FUNC_0(VAR_2, VAR_0, ((void*)0));
    }
}

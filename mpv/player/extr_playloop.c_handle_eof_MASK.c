
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {scalar_t__ audio_status; scalar_t__ video_status; scalar_t__ stop_play; scalar_t__ vo_chain; scalar_t__ ao_chain; scalar_t__ video_out; scalar_t__ paused; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct MPContext *VAR_2)
{



    bool VAR_3 =
        VAR_2->paused && VAR_2->video_out && FUNC_0(VAR_2->video_out);




    if ((VAR_2->ao_chain || VAR_2->vo_chain) && !VAR_3 &&
        VAR_2->audio_status == VAR_1 &&
        VAR_2->video_status == VAR_1 &&
        !VAR_2->stop_play)
    {
        VAR_2->stop_play = VAR_0;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct track {scalar_t__ type; int selected; } ;
struct MPContext {scalar_t__ error_playing; scalar_t__ stop_play; scalar_t__ ao_chain; scalar_t__ vo_chain; TYPE_1__* opts; } ;
struct TYPE_2__ {scalar_t__ stop_playback_on_init_failure; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct MPContext*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct MPContext*,struct track*) ;
 int FUNC_2 (struct MPContext*) ;

void FUNC_3(struct MPContext *VAR_4, struct track *VAR_5)
{
    if (!VAR_5 || !VAR_5->selected)
        return;
    FUNC_1(VAR_4, VAR_5);
    if (VAR_5->type == VAR_2)
        FUNC_0(VAR_4, "Audio: no audio\n");
    if (VAR_5->type == VAR_3)
        FUNC_0(VAR_4, "Video: no video\n");
    if (VAR_4->opts->stop_playback_on_init_failure ||
        !(VAR_4->vo_chain || VAR_4->ao_chain))
    {
        if (!VAR_4->stop_play)
            VAR_4->stop_play = VAR_1;
        if (VAR_4->error_playing >= 0)
            VAR_4->error_playing = VAR_0;
    }
    FUNC_2(VAR_4);
}

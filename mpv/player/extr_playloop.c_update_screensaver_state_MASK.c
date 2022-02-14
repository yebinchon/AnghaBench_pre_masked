
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {int video_out; TYPE_1__* opts; int playback_active; } ;
struct TYPE_2__ {int stop_screensaver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;

void FUNC_1(struct MPContext *VAR_2)
{
    if (!VAR_2->video_out)
        return;

    bool VAR_3 = !VAR_2->playback_active || !VAR_2->opts->stop_screensaver;
    FUNC_0(VAR_2->video_out, VAR_3 ? VAR_1
                                                   : VAR_0, ((void*)0));
}

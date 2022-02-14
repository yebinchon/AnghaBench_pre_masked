
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {int audio_speed; int speed_factor_a; int video_speed; int speed_factor_v; TYPE_1__* opts; } ;
struct TYPE_2__ {int playback_speed; } ;


 int FUNC_0 (struct MPContext*) ;

void FUNC_1(struct MPContext *VAR_0)
{
    VAR_0->audio_speed = VAR_0->opts->playback_speed * VAR_0->speed_factor_a;
    VAR_0->video_speed = VAR_0->opts->playback_speed * VAR_0->speed_factor_v;

    FUNC_0(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct track {TYPE_1__* dec; } ;
struct MPContext {scalar_t__ audio_stat_start; scalar_t__ audio_drop_throttle; scalar_t__ delay; TYPE_2__* ao_chain; int audio_status; int play_dir; } ;
struct TYPE_4__ {struct track* track; } ;
struct TYPE_3__ {int play_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(struct MPContext *VAR_2)
{
    if (VAR_2->ao_chain) {
        FUNC_0(VAR_2->ao_chain);
        struct track *VAR_3 = VAR_2->ao_chain->track;
        if (VAR_3 && VAR_3->dec)
            VAR_3->dec->play_dir = VAR_2->play_dir;
    }
    VAR_2->audio_status = VAR_2->ao_chain ? VAR_1 : VAR_0;
    VAR_2->delay = 0;
    VAR_2->audio_drop_throttle = 0;
    VAR_2->audio_stat_start = 0;
}

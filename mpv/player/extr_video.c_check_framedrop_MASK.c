
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vo_chain {TYPE_3__* track; TYPE_1__* filter; } ;
struct MPOpts {int frame_dropping; } ;
struct MPContext {scalar_t__ video_status; scalar_t__ audio_status; double last_av_difference; int ao; int paused; struct MPOpts* opts; } ;
struct TYPE_6__ {TYPE_2__* dec; } ;
struct TYPE_5__ {int attempt_framedrops; } ;
struct TYPE_4__ {float container_fps; } ;


 int FUNC_0 (double,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct MPContext *VAR_1, struct vo_chain *VAR_2)
{
    struct MPOpts *VAR_3 = VAR_1->opts;

    if (VAR_1->video_status == VAR_0 && !VAR_1->paused &&
        VAR_1->audio_status == VAR_0 && !FUNC_1(VAR_1->ao) &&
        VAR_2->track && VAR_2->track->dec && (VAR_3->frame_dropping & 2))
    {
        float VAR_4 = VAR_2->filter->container_fps;

        if (VAR_4 <= 20 || VAR_4 >= 500)
            return;
        double VAR_5 = 1.0 / VAR_4;

        VAR_2->track->dec->attempt_framedrops =
            FUNC_0((VAR_1->last_av_difference - 0.010) / VAR_5, 0, 100);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo {TYPE_2__* driver; } ;
struct MPOpts {scalar_t__ video_sync; int autosync; scalar_t__ untimed; } ;
struct MPContext {scalar_t__ video_status; double time_frame; scalar_t__ audio_status; double delay; double video_speed; int ao; scalar_t__ display_sync_active; TYPE_1__* vo_chain; struct vo* video_out; struct MPOpts* opts; } ;
struct TYPE_4__ {scalar_t__ untimed; } ;
struct TYPE_3__ {scalar_t__ is_coverart; } ;


 int FUNC_0 (struct MPContext*,char*,double) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 double FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct MPContext *VAR_3)
{
    struct MPOpts *VAR_4 = VAR_3->opts;
    struct vo *VAR_5 = VAR_3->video_out;

    if (VAR_3->vo_chain->is_coverart || VAR_3->video_status < VAR_1) {
        VAR_3->time_frame = 0;
    } else if (VAR_3->display_sync_active || VAR_4->video_sync == VAR_2) {

    } else if (VAR_3->audio_status == VAR_0 &&
               VAR_3->video_status == VAR_0 &&
               !FUNC_2(VAR_3->ao))
    {
        double VAR_6 = FUNC_1(VAR_3->ao);

        double VAR_7 = VAR_3->delay / VAR_3->video_speed +
                           VAR_3->time_frame;
        double VAR_8 = VAR_6 - VAR_7;
        FUNC_0(VAR_3, "value %f audio-diff", VAR_8);

        if (VAR_4->autosync) {







            VAR_6 = VAR_7 + VAR_8 / VAR_4->autosync;
        }

        VAR_3->time_frame = VAR_6 - VAR_3->delay / VAR_3->video_speed;
    } else {







        if (VAR_3->time_frame < -0.2 || VAR_4->untimed || VAR_5->driver->untimed)
            VAR_3->time_frame = 0;
    }
}

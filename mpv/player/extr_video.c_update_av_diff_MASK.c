
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPOpts {double audio_delay; } ;
struct MPContext {double last_av_difference; scalar_t__ audio_status; scalar_t__ video_status; double video_pts; int drop_message_shown; TYPE_1__* vo_chain; struct MPOpts* opts; } ;
struct TYPE_2__ {scalar_t__ is_sparse; } ;


 double VAR_0 ;
 int FUNC_0 (struct MPContext*,char*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 double FUNC_1 (double) ;
 double FUNC_2 (struct MPContext*) ;

__attribute__((used)) static void FUNC_3(struct MPContext *VAR_3, double VAR_4)
{
    struct MPOpts *VAR_5 = VAR_3->opts;

    VAR_3->last_av_difference = 0;

    if (VAR_3->audio_status != VAR_1 ||
        VAR_3->video_status != VAR_1)
        return;

    if (VAR_3->vo_chain && VAR_3->vo_chain->is_sparse)
        return;

    double VAR_6 = FUNC_2(VAR_3);
    if (VAR_6 != VAR_0 && VAR_3->video_pts != VAR_0) {
        VAR_3->last_av_difference = VAR_6 - VAR_3->video_pts
                                  + VAR_5->audio_delay + VAR_4;
    }

    if (FUNC_1(VAR_3->last_av_difference) > 0.5 && !VAR_3->drop_message_shown) {
        FUNC_0(VAR_3, "%s", VAR_2);
        VAR_3->drop_message_shown = 1;
    }
}

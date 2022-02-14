
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPOpts {int video_sync; int sync_max_audio_change; double playback_speed; } ;
struct MPContext {scalar_t__ audio_status; double speed_factor_a; double speed_factor_v; double last_av_difference; int display_sync_drift_dir; double audio_speed; struct MPOpts* opts; } ;


 double FUNC_0 (double,int,int) ;
 int FUNC_1 (struct MPContext*,char*,double) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 double FUNC_2 (struct MPContext*,double) ;
 double FUNC_3 (double) ;
 scalar_t__ FUNC_4 (double) ;

__attribute__((used)) static void FUNC_5(struct MPContext *VAR_2, double VAR_3)
{
    struct MPOpts *VAR_4 = VAR_2->opts;
    int VAR_5 = VAR_4->video_sync;

    if (VAR_5 != VAR_1 || VAR_2->audio_status != VAR_0) {
        VAR_2->speed_factor_a = VAR_2->speed_factor_v;
        return;
    }
    double VAR_6 = VAR_3 / 2;
    double VAR_7 = VAR_2->last_av_difference;
    int VAR_8 = VAR_2->display_sync_drift_dir;
    if (VAR_7 * -VAR_2->display_sync_drift_dir >= 0)
        VAR_8 = 0;
    if (FUNC_3(VAR_7) > VAR_6)
        VAR_8 = VAR_7 >= 0 ? 1 : -1;

    bool VAR_9 = VAR_2->display_sync_drift_dir != VAR_8;
    if (VAR_8 || VAR_9) {
        if (VAR_9)
            FUNC_1(VAR_2, "Change display sync audio drift: %d\n", VAR_8);
        VAR_2->display_sync_drift_dir = VAR_8;

        double VAR_10 = VAR_4->sync_max_audio_change / 100;
        double VAR_11 = 1 + VAR_10 * -VAR_2->display_sync_drift_dir;

        if (VAR_8 == 0) {


            double VAR_12 = FUNC_2(VAR_2, VAR_3);
            if (FUNC_4(VAR_12)) {

                double VAR_13 = VAR_2->opts->playback_speed * VAR_2->speed_factor_v;
                VAR_11 = (VAR_2->audio_speed - VAR_12) / VAR_13;
                FUNC_1(VAR_2, "Compensation factor: %f\n", VAR_11);
            }
        }

        VAR_11 = FUNC_0(VAR_11, 1 - VAR_10, 1 + VAR_10);
        VAR_2->speed_factor_a = VAR_11 * VAR_2->speed_factor_v;
    }
}

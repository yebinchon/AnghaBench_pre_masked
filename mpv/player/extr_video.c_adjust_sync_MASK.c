
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPOpts {double audio_delay; double default_max_pts_correction; } ;
struct MPContext {scalar_t__ audio_status; double delay; scalar_t__ total_avsync_change; scalar_t__ display_sync_active; struct MPOpts* opts; } ;


 scalar_t__ VAR_0 ;
 double FUNC_0 (double) ;
 double FUNC_1 (struct MPContext*) ;

__attribute__((used)) static void FUNC_2(struct MPContext *VAR_1, double VAR_2, double VAR_3)
{
    struct MPOpts *VAR_4 = VAR_1->opts;

    if (VAR_1->audio_status != VAR_0)
        return;

    double VAR_5 = FUNC_1(VAR_1) + VAR_4->audio_delay - VAR_1->delay;
    double VAR_6 = VAR_5 - VAR_2;

    double VAR_7 = VAR_6 * 0.1;
    double VAR_8 = FUNC_0(VAR_6) < 0.3 ? 0.1 : 0.4;
    double VAR_9 = VAR_4->default_max_pts_correction >= 0 ?
                        VAR_4->default_max_pts_correction : VAR_3 * VAR_8;
    if (VAR_7 < -VAR_9)
        VAR_7 = -VAR_9;
    else if (VAR_7 > VAR_9)
        VAR_7 = VAR_9;
    VAR_1->delay += VAR_7;
    VAR_1->total_avsync_change += VAR_7;

    if (VAR_1->display_sync_active)
        VAR_1->total_avsync_change = 0;
}

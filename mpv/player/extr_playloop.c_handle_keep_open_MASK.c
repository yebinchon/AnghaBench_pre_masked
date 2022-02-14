
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPOpts {int keep_open; int loop_times; scalar_t__ keep_open_pause; } ;
struct MPContext {scalar_t__ stop_play; scalar_t__ ao; int last_vo_pts; int playback_pts; int video_out; scalar_t__ vo_chain; int playlist; struct MPOpts* opts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct MPContext*) ;
 int FUNC_3 (struct MPContext*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct MPContext *VAR_2)
{
    struct MPOpts *VAR_3 = VAR_2->opts;
    if (VAR_3->keep_open && VAR_2->stop_play == VAR_0 &&
        (VAR_3->keep_open == 2 || !FUNC_1(VAR_2->playlist, 1)) &&
        VAR_3->loop_times == 1)
    {
        VAR_2->stop_play = VAR_1;
        if (VAR_2->vo_chain) {
            if (!FUNC_4(VAR_2->video_out))
                FUNC_2(VAR_2);
            VAR_2->playback_pts = VAR_2->last_vo_pts;
        }
        if (VAR_3->keep_open_pause) {
            if (VAR_2->ao)
                FUNC_0(VAR_2->ao);
            FUNC_3(VAR_2, 1);
        }
    }
}

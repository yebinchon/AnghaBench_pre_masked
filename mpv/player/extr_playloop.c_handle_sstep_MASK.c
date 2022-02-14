
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPOpts {scalar_t__ step_sec; } ;
struct MPContext {scalar_t__ video_status; scalar_t__ max_frames; scalar_t__ step_frames; int paused; scalar_t__ stop_play; int restart_complete; struct MPOpts* opts; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct MPContext*,int ,scalar_t__,int ,int ) ;
 int FUNC_1 (struct MPContext*,int ) ;
 int FUNC_2 (struct MPContext*,int) ;

__attribute__((used)) static void FUNC_3(struct MPContext *VAR_5)
{
    struct MPOpts *VAR_6 = VAR_5->opts;
    if (VAR_5->stop_play || !VAR_5->restart_complete)
        return;

    if (VAR_6->step_sec > 0 && !VAR_5->paused) {
        FUNC_1(VAR_5, VAR_3);
        FUNC_0(VAR_5, VAR_2, VAR_6->step_sec, VAR_1, 0);
    }

    if (VAR_5->video_status >= VAR_4) {
        if (VAR_5->max_frames >= 0 && !VAR_5->stop_play)
            VAR_5->stop_play = VAR_0;
        if (VAR_5->step_frames > 0 && !VAR_5->paused)
            FUNC_2(VAR_5, 1);
    }
}

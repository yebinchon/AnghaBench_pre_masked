
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct MPContext {double sleeptime; scalar_t__ video_status; double start_timestamp; TYPE_2__* video_out; int osd; TYPE_1__* vo_chain; int paused; } ;
struct TYPE_5__ {int config_ok; } ;
struct TYPE_4__ {int is_coverart; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct MPContext*,double) ;
 double FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct MPContext *VAR_1)
{
    if (!VAR_1->video_out || !VAR_1->video_out->config_ok)
        return;


    if (!VAR_1->paused) {
        if (VAR_1->sleeptime < 0.1 && VAR_1->video_status == VAR_0)
            return;
    }

    bool VAR_2 = VAR_1->vo_chain && !VAR_1->vo_chain->is_coverart;
    if (VAR_2 && FUNC_1() - VAR_1->start_timestamp < 0.1) {
        FUNC_0(VAR_1, 0.1);
        return;
    }
    bool VAR_3 = FUNC_2(VAR_1->osd) ||
                       FUNC_4(VAR_1->video_out);
    if (!VAR_3)
        return;
    FUNC_3(VAR_1->video_out);
}

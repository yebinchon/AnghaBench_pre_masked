
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPOpts {int osd_level; double osd_duration; int osd_bar_visible; int video_osd; } ;
struct TYPE_2__ {int type; double value; scalar_t__ num_stops; int stops; } ;
struct MPContext {TYPE_1__ osd_progbar; int osd; scalar_t__ osd_visible; struct MPOpts* opts; scalar_t__ video_out; } ;


 int FUNC_0 (struct MPContext*,int ,scalar_t__,float) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct MPContext*) ;
 int FUNC_3 (int ,TYPE_1__*) ;

void FUNC_4(struct MPContext *VAR_0, int VAR_1,
                 double VAR_2, double VAR_3, double VAR_4, double VAR_5)
{
    struct MPOpts *VAR_6 = VAR_0->opts;
    bool VAR_7 = VAR_0->video_out && VAR_0->opts->video_osd;
    if (VAR_6->osd_level < 1 || !VAR_6->osd_bar_visible || !VAR_7)
        return;

    VAR_0->osd_visible = FUNC_1() + VAR_6->osd_duration / 1000.0;
    VAR_0->osd_progbar.type = VAR_1;
    VAR_0->osd_progbar.value = (VAR_5 - VAR_2) / (VAR_3 - VAR_2);
    VAR_0->osd_progbar.num_stops = 0;
    if (VAR_4 > VAR_2 && VAR_4 < VAR_3) {
        float VAR_8 = (VAR_4 - VAR_2) / (VAR_3 - VAR_2);
        FUNC_0(VAR_0, VAR_0->osd_progbar.stops,
                         VAR_0->osd_progbar.num_stops, VAR_8);
    }
    FUNC_3(VAR_0->osd, &VAR_0->osd_progbar);
    FUNC_2(VAR_0);
}

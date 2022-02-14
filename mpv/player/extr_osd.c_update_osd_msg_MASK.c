
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct osd_state {int dummy; } ;
struct MPOpts {int osd_level; int video_osd; } ;
struct TYPE_2__ {int type; } ;
struct MPContext {int osd_force_update; int osd_idle_update; double osd_last_update; double osd_visible; double osd_function_visible; scalar_t__ osd_msg_next_duration; scalar_t__ osd_msg_visible; char* osd_msg_text; int osd_show_pos; TYPE_1__ osd_progbar; scalar_t__ osd_function; struct osd_state* osd; struct MPOpts* opts; } ;


 int FUNC_0 (double,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct MPContext*) ;
 double FUNC_2 (struct MPContext*,int) ;
 int FUNC_3 (struct MPContext*,double) ;
 double FUNC_4 () ;
 int FUNC_5 (struct osd_state*,TYPE_1__*) ;
 int FUNC_6 (struct osd_state*,char*) ;
 int FUNC_7 (char**,struct MPContext*,int) ;
 char* FUNC_8 (char*,char*,char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct MPContext*) ;
 int FUNC_11 (struct MPContext*,char*) ;
 int FUNC_12 (struct MPContext*) ;
 int FUNC_13 (struct MPContext*,int,int ,int,int ) ;

void FUNC_14(struct MPContext *VAR_1)
{
    struct MPOpts *VAR_2 = VAR_1->opts;
    struct osd_state *VAR_3 = VAR_1->osd;

    double VAR_4 = FUNC_4();

    if (!VAR_1->osd_force_update) {

        if (!VAR_1->osd_idle_update)
            return;

        double VAR_5 = 0.050;
        double VAR_6 = VAR_4 - VAR_1->osd_last_update;
        if (VAR_6 < VAR_5) {
            FUNC_3(VAR_1, VAR_5 - VAR_6);
            return;
        }
    }
    VAR_1->osd_force_update = 0;
    VAR_1->osd_idle_update = 0;
    VAR_1->osd_last_update = VAR_4;

    if (VAR_1->osd_visible) {
        double VAR_7 = VAR_1->osd_visible - VAR_4;
        if (VAR_7 > 0) {
            FUNC_3(VAR_1, VAR_7);
            VAR_1->osd_idle_update = 1;
        } else {
            VAR_1->osd_visible = 0;
            VAR_1->osd_progbar.type = -1;
            FUNC_5(VAR_1->osd, &VAR_1->osd_progbar);
        }
    }

    if (VAR_1->osd_function_visible) {
        double VAR_8 = VAR_1->osd_function_visible - VAR_4;
        if (VAR_8 > 0) {
            FUNC_3(VAR_1, VAR_8);
            VAR_1->osd_idle_update = 1;
        } else {
            VAR_1->osd_function_visible = 0;
            VAR_1->osd_function = 0;
        }
    }

    if (VAR_1->osd_msg_next_duration > 0) {


        VAR_1->osd_msg_visible = VAR_4 + VAR_1->osd_msg_next_duration;
        VAR_1->osd_msg_next_duration = 0;
    }

    if (VAR_1->osd_msg_visible) {
        double VAR_9 = VAR_1->osd_msg_visible - VAR_4;
        if (VAR_9 > 0) {
            FUNC_3(VAR_1, VAR_9);
            VAR_1->osd_idle_update = 1;
        } else {
            FUNC_9(VAR_1->osd_msg_text);
            VAR_1->osd_msg_text = ((void*)0);
            VAR_1->osd_msg_visible = 0;
            VAR_1->osd_show_pos = 0;
        }
    }

    FUNC_1(VAR_1);

    if (VAR_1->osd_progbar.type == VAR_0) {
        double VAR_10 = FUNC_2(VAR_1, 0);
        FUNC_13(VAR_1, VAR_0, 0, 1, FUNC_0(VAR_10, 0, 1));
    }

    FUNC_11(VAR_1, VAR_1->osd_msg_text);
    FUNC_10(VAR_1);
    FUNC_12(VAR_1);

    if (!VAR_2->video_osd)
        return;

    int VAR_11 = VAR_2->osd_level;
    if (VAR_1->osd_show_pos)
        VAR_11 = 3;

    char *VAR_12 = ((void*)0);
    FUNC_7(&VAR_12, VAR_1, VAR_11);
    if (VAR_1->osd_msg_text && VAR_1->osd_msg_text[0]) {
        VAR_12 = FUNC_8(VAR_12, "%s%s", VAR_12 ? "\n" : "",
                                      VAR_1->osd_msg_text);
    }
    FUNC_6(VAR_3, VAR_12);
    FUNC_9(VAR_12);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPOpts {scalar_t__ term_osd_bar; scalar_t__ quiet; int use_terminal; } ;
struct MPContext {int log; scalar_t__ stop_play; int playing; int playing_msg_shown; int playback_initialized; struct MPOpts* opts; } ;


 int FUNC_0 (struct MPContext*,char**,int) ;
 char* FUNC_1 (struct MPContext*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char**,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct MPContext*,char*) ;
 int FUNC_6 (int*,int*) ;
 int FUNC_7 (struct MPContext*) ;
 int FUNC_8 (struct MPContext*,int) ;

__attribute__((used)) static void FUNC_9(struct MPContext *VAR_0)
{
    struct MPOpts *VAR_1 = VAR_0->opts;

    FUNC_8(VAR_0, 0);
    FUNC_7(VAR_0);

    if (!VAR_1->use_terminal)
        return;

    if (VAR_1->quiet || !VAR_0->playback_initialized ||
        !VAR_0->playing_msg_shown || VAR_0->stop_play)
    {
        if (!VAR_0->playing || VAR_0->stop_play) {
            FUNC_2(VAR_0->log);
            FUNC_5(VAR_0, "");
        }
        return;
    }

    char *VAR_2 = FUNC_1(VAR_0);

    if (VAR_1->term_osd_bar) {
        FUNC_3(&VAR_2, "\n");
        int VAR_3 = 80, VAR_4 = 24;
        FUNC_6(&VAR_3, &VAR_4);
        FUNC_0(VAR_0, &VAR_2, VAR_3);
    }

    FUNC_5(VAR_0, VAR_2);
    FUNC_4(VAR_2);
}

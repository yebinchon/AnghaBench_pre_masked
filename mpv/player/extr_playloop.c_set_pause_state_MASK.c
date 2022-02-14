
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPOpts {int pause; } ;
struct MPContext {int paused; int osd_force_update; int time_frame; scalar_t__ step_frames; scalar_t__ osd_function; scalar_t__ video_out; scalar_t__ ao; scalar_t__ ao_chain; scalar_t__ paused_for_cache; struct MPOpts* opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct MPContext*) ;
 int FUNC_3 (struct MPContext*,int ,int ) ;
 int FUNC_4 (struct MPContext*) ;
 int FUNC_5 (struct MPContext*) ;
 int FUNC_6 (scalar_t__,int) ;

void FUNC_7(struct MPContext *VAR_2, bool VAR_3)
{
    struct MPOpts *VAR_4 = VAR_2->opts;
    bool VAR_5 = 0;

    if (VAR_4->pause != VAR_3)
        VAR_5 = 1;
    VAR_4->pause = VAR_3;

    bool VAR_6 = VAR_4->pause || VAR_2->paused_for_cache;
    if (VAR_6 != VAR_2->paused) {
        VAR_2->paused = VAR_6;
        VAR_5 = 1;

        if (VAR_2->ao && VAR_2->ao_chain) {
            if (VAR_6) {
                FUNC_0(VAR_2->ao);
            } else {
                FUNC_1(VAR_2->ao);
            }
        }

        if (VAR_2->video_out)
            FUNC_6(VAR_2->video_out, VAR_6);

        VAR_2->osd_function = 0;
        VAR_2->osd_force_update = 1;

        FUNC_4(VAR_2);

        if (VAR_6) {
            VAR_2->step_frames = 0;
            VAR_2->time_frame -= FUNC_2(VAR_2);
        } else {
            (void)FUNC_2(VAR_2);
        }
    }

    FUNC_5(VAR_2);

    if (VAR_5)
        FUNC_3(VAR_2, VAR_4->pause ? VAR_0 : VAR_1, 0);
}

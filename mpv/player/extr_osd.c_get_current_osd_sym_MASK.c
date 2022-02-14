
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {int osd_function; scalar_t__ step_frames; scalar_t__ paused; TYPE_1__* opts; scalar_t__ paused_for_cache; } ;
struct TYPE_2__ {int pause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct MPContext*) ;
 int FUNC_1 (char*,size_t,int) ;

void FUNC_2(struct MPContext *VAR_3, char *VAR_4, size_t VAR_5)
{
    int VAR_6 = VAR_3->osd_function;
    if (!VAR_6) {
        if (FUNC_0(VAR_3) || (VAR_3->paused_for_cache && !VAR_3->opts->pause)) {
            VAR_6 = VAR_0;
        } else if (VAR_3->paused || VAR_3->step_frames) {
            VAR_6 = VAR_1;
        } else {
            VAR_6 = VAR_2;
        }
    }
    FUNC_1(VAR_4, VAR_5, VAR_6);
}

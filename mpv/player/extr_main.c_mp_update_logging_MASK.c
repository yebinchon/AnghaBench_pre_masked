
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {int input; TYPE_1__* opts; int log; int global; } ;
struct TYPE_2__ {int use_terminal; scalar_t__ consolecontrols; } ;


 int FUNC_0 (struct MPContext*,struct MPContext*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

void FUNC_7(struct MPContext *VAR_0, bool VAR_1)
{
    bool VAR_2 = FUNC_1(VAR_0->global);

    FUNC_2(VAR_0->global, VAR_0->opts);

    bool VAR_3 = VAR_0->opts->use_terminal;
    bool VAR_4 = FUNC_0(VAR_0, VAR_0);
    if (VAR_3 != VAR_4) {
        if (VAR_3 && FUNC_0(((void*)0), VAR_0)) {
            FUNC_4();
            VAR_4 = 1;
        } else if (!VAR_3) {
            FUNC_6();
            FUNC_0(VAR_0, ((void*)0));
        }
    }

    if (FUNC_1(VAR_0->global) && !VAR_2)
        FUNC_3(VAR_0->log, 0);

    if (VAR_4 && !VAR_1 && VAR_0->opts->consolecontrols)
        FUNC_5(VAR_0->input);
}

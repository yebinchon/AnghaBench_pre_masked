
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Context; int (* GetCurrentMode ) (int ) ;} ;
struct TYPE_5__ {int hwndDlg; int lpDevModeOnInit; int lpSelDevMode; TYPE_3__* DeskExtInterface; } ;
typedef TYPE_1__* PDESKMONITOR ;
typedef scalar_t__ LONG ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static LONG
FUNC_5(PDESKMONITOR VAR_4)
{
    LONG VAR_5;

    if (VAR_4->DeskExtInterface != ((void*)0))
    {

        VAR_5 = FUNC_0(VAR_4->DeskExtInterface,
                                                   VAR_4->hwndDlg);
        if (VAR_5 == VAR_1)
        {

            VAR_4->lpDevModeOnInit = VAR_4->DeskExtInterface->GetCurrentMode(VAR_4->DeskExtInterface->Context);
            VAR_4->lpSelDevMode = VAR_4->lpDevModeOnInit;
            return VAR_3;
        }
        else if (VAR_5 == VAR_0)
        {

            FUNC_3(FUNC_1(VAR_4->hwndDlg));
            return VAR_3;
        }
    }

    FUNC_2(VAR_4);

    return VAR_2;
}

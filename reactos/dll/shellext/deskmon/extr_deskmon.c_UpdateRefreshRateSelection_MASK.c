
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_6__ {scalar_t__ lpSelDevMode; int hwndDlg; TYPE_1__* DeskExtInterface; } ;
struct TYPE_5__ {int Context; int (* SetCurrentMode ) (int ,scalar_t__) ;} ;
typedef scalar_t__ PDEVMODEW ;
typedef TYPE_2__* PDESKMONITOR ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static VOID
FUNC_5(PDESKMONITOR VAR_3)
{
    PDEVMODEW VAR_4;
    INT VAR_5;

    if (VAR_3->DeskExtInterface != ((void*)0))
    {
        VAR_5 = (INT)FUNC_2(VAR_3->hwndDlg,
                                    VAR_2,
                                    VAR_0,
                                    0,
                                    0);
        if (VAR_5 >= 0)
        {
            VAR_4 = VAR_3->lpSelDevMode;
            VAR_3->lpSelDevMode = (PDEVMODEW)FUNC_2(VAR_3->hwndDlg,
                                                               VAR_2,
                                                               VAR_1,
                                                               (WPARAM)VAR_5,
                                                               0);

            if (VAR_3->lpSelDevMode != ((void*)0) && VAR_3->lpSelDevMode != VAR_4)
            {
                VAR_3->DeskExtInterface->SetCurrentMode(VAR_3->DeskExtInterface->Context,
                                                       VAR_3->lpSelDevMode);

                FUNC_3(VAR_3);

                (void)FUNC_1(FUNC_0(VAR_3->hwndDlg),
                                        VAR_3->hwndDlg);
            }
        }
    }
}

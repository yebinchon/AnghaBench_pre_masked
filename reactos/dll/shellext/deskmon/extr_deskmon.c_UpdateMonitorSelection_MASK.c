
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_3__ {int dwMonitorCount; int * SelMonitor; int hwndDlg; int * Monitors; } ;
typedef TYPE_1__* PDESKMONITOR ;
typedef int * PDESKMONINFO ;
typedef scalar_t__ INT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static VOID
FUNC_3(PDESKMONITOR VAR_4)
{
    INT VAR_5;

    if (VAR_4->dwMonitorCount > 1)
    {
        VAR_4->SelMonitor = ((void*)0);

        VAR_5 = (INT)FUNC_2(VAR_4->hwndDlg,
                                    VAR_0,
                                    VAR_2,
                                    0,
                                    0);
        if (VAR_5 >= 0)
        {
            VAR_4->SelMonitor = (PDESKMONINFO)FUNC_2(VAR_4->hwndDlg,
                                                                VAR_0,
                                                                VAR_3,
                                                                (WPARAM)VAR_5,
                                                                0);
        }
    }
    else
        VAR_4->SelMonitor = VAR_4->Monitors;

    FUNC_0(FUNC_1(VAR_4->hwndDlg,
                            VAR_1),
                 VAR_4->SelMonitor != ((void*)0));
}

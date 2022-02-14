
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {TYPE_2__* SelMonitor; int hwndDlg; } ;
struct TYPE_5__ {int DeviceID; } ;
struct TYPE_6__ {TYPE_1__ dd; } ;
typedef int (* PDEVICEPROPERTIES ) (int ,int *,int ,int ) ;
typedef TYPE_3__* PDESKMONITOR ;
typedef int * LPTSTR ;
typedef int * HMODULE ;
typedef int HLOCAL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static VOID
FUNC_6(PDESKMONITOR VAR_2)
{
    HMODULE VAR_3;
    PDEVICEPROPERTIES VAR_4;
    LPTSTR VAR_5;

    if (VAR_2->SelMonitor != ((void*)0))
    {
        VAR_5 = FUNC_1(VAR_2->SelMonitor->dd.DeviceID);
        if (VAR_5 != ((void*)0))
        {
            VAR_3 = FUNC_3(FUNC_5("devmgr.dll"));
            if (VAR_3 != ((void*)0))
            {
                VAR_4 = (PDEVICEPROPERTIES)FUNC_2(VAR_3,
                                                                      VAR_1);
                if (VAR_4 != ((void*)0))
                {
                    VAR_4(VAR_2->hwndDlg,
                                       ((void*)0),
                                       VAR_2->SelMonitor->dd.DeviceID,
                                       VAR_0);
                }

                FUNC_0(VAR_3);
            }

            FUNC_4((HLOCAL)VAR_5);
        }
    }
}

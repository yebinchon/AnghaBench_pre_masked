
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int dd ;
typedef int WPARAM ;
typedef int VOID ;
struct TYPE_16__ {int cb; } ;
struct TYPE_12__ {int * DeviceString; } ;
struct TYPE_15__ {struct TYPE_15__* Next; TYPE_10__ dd; } ;
struct TYPE_14__ {int dwMonitorCount; int hwndDlg; TYPE_3__* SelMonitor; TYPE_3__* Monitors; int pdtobj; int * lpDevModeOnInit; int * lpSelDevMode; TYPE_1__* DeskExtInterface; int * lpDisplayDevice; } ;
struct TYPE_13__ {int Context; int * (* GetCurrentMode ) (int ) ;} ;
typedef TYPE_2__* PDESKMONITOR ;
typedef TYPE_3__* PDESKMONINFO ;
typedef int * LPTSTR ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef int HLOCAL ;
typedef scalar_t__ DWORD ;
typedef TYPE_4__ DISPLAY_DEVICE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_10__*,TYPE_4__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_4__*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int * FUNC_12 (int ) ;

__attribute__((used)) static VOID
FUNC_13(PDESKMONITOR VAR_11)
{
    PDESKMONINFO VAR_12, VAR_13, *VAR_14;
    DISPLAY_DEVICE VAR_15;
    BOOL VAR_16;
    INT VAR_17;
    DWORD VAR_18;


    VAR_12 = VAR_11->Monitors;
    VAR_11->Monitors = ((void*)0);
    while (VAR_12 != ((void*)0))
    {
        VAR_13 = VAR_12->Next;
        FUNC_4((HLOCAL)VAR_12);
        VAR_12 = VAR_13;
    }

    VAR_11->SelMonitor = ((void*)0);
    VAR_11->dwMonitorCount = 0;

    if (VAR_11->lpDisplayDevice != ((void*)0))
        FUNC_4((HLOCAL)VAR_11->lpDisplayDevice);

    VAR_11->lpDisplayDevice = FUNC_5(VAR_11->pdtobj,
                                               FUNC_6(VAR_0));

    if (VAR_11->DeskExtInterface != ((void*)0))
    {
        if (VAR_11->lpDisplayDevice != ((void*)0))
        {

            VAR_18 = 0;
            VAR_14 = &VAR_11->Monitors;

            do
            {
                VAR_15.cb = sizeof(VAR_15);
                VAR_16 = FUNC_1(VAR_11->lpDisplayDevice,
                                          VAR_18++,
                                          &VAR_15,
                                          0);
                if (VAR_16)
                {
                    VAR_12 = FUNC_3(VAR_8,
                                     sizeof(*VAR_12));
                    if (VAR_12 != ((void*)0))
                    {
                        FUNC_0(&VAR_12->dd,
                                   &VAR_15,
                                   sizeof(VAR_15));
                        VAR_12->Next = ((void*)0);
                        *VAR_14 = VAR_12;
                        VAR_14 = &VAR_12->Next;

                        VAR_11->dwMonitorCount++;
                    }
                }
            } while (VAR_16);
        }

        VAR_11->lpDevModeOnInit = VAR_11->DeskExtInterface->GetCurrentMode(VAR_11->DeskExtInterface->Context);
    }
    else
        VAR_11->lpDevModeOnInit = ((void*)0);

    VAR_11->lpSelDevMode = VAR_11->lpDevModeOnInit;


    if (VAR_11->dwMonitorCount == 0)
    {
        LPTSTR VAR_19;


        VAR_19 = FUNC_5(VAR_11->pdtobj,
                                           FUNC_6(VAR_1));

        FUNC_8(VAR_11->hwndDlg,
                       VAR_3,
                       VAR_19);

        if (VAR_19 != ((void*)0))
            FUNC_4((HLOCAL)VAR_19);
    }
    else if (VAR_11->dwMonitorCount == 1)
    {
        VAR_11->SelMonitor = VAR_11->Monitors;
        FUNC_8(VAR_11->hwndDlg,
                       VAR_3,
                       VAR_11->Monitors->dd.DeviceString);
    }
    else
    {
        FUNC_7(VAR_11->hwndDlg,
                           VAR_2,
                           VAR_5,
                           0,
                           0);

        VAR_12 = VAR_11->Monitors;
        while (VAR_12 != ((void*)0))
        {
            VAR_17 = (INT)FUNC_7(VAR_11->hwndDlg,
                                        VAR_2,
                                        VAR_4,
                                        0,
                                        (LPARAM)VAR_12->dd.DeviceString);
            if (VAR_17 >= 0)
            {
                FUNC_7(VAR_11->hwndDlg,
                                   VAR_2,
                                   VAR_7,
                                   (WPARAM)VAR_17,
                                   (LPARAM)VAR_12);

                if (VAR_11->SelMonitor == ((void*)0))
                {
                    FUNC_7(VAR_11->hwndDlg,
                                       VAR_2,
                                       VAR_6,
                                       (WPARAM)VAR_17,
                                       0);

                    VAR_11->SelMonitor = VAR_12;
                }
            }

            VAR_12 = VAR_12->Next;
        }
    }


    FUNC_9(FUNC_2(VAR_11->hwndDlg,
                          VAR_3),
               (VAR_11->dwMonitorCount <= 1 ? VAR_10 : VAR_9));
    FUNC_9(FUNC_2(VAR_11->hwndDlg,
                          VAR_2),
               (VAR_11->dwMonitorCount > 1 ? VAR_10 : VAR_9));

    FUNC_11(VAR_11);
    FUNC_10(VAR_11);
}

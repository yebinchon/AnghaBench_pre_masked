
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {scalar_t__ dwStartType; } ;
struct TYPE_10__ {scalar_t__ SelectedItem; int hTool; int hShortcutMenu; TYPE_2__* pCurrentService; scalar_t__ bIsUserAnAdmin; int hMainWnd; } ;
struct TYPE_8__ {scalar_t__ dwControlsAccepted; scalar_t__ dwCurrentState; } ;
struct TYPE_9__ {int lpServiceName; TYPE_1__ ServiceStatusProcess; } ;
typedef TYPE_3__* PMAIN_WND_INFO ;
typedef TYPE_4__* LPQUERY_SERVICE_CONFIG ;
typedef int LPARAM ;
typedef int HMENU ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (int ,int ,scalar_t__,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

VOID FUNC_8(PMAIN_WND_INFO VAR_17)
{
    HMENU VAR_18;
    UINT VAR_19;


    VAR_18 = FUNC_1(VAR_17->hMainWnd);


    for (VAR_19 = VAR_4; VAR_19 <= VAR_3; VAR_19++)
    {
        FUNC_0(VAR_18, VAR_19, VAR_7);
        FUNC_0(FUNC_4(VAR_17->hShortcutMenu, 0), VAR_19, VAR_7);
        FUNC_7(VAR_17->hTool, VAR_16, VAR_19,
                    (LPARAM)FUNC_6(VAR_15, 0));
    }

    if (VAR_17->SelectedItem != VAR_8)
    {
        LPQUERY_SERVICE_CONFIG VAR_20 = ((void*)0);
        DWORD VAR_21, VAR_22;


        if (VAR_17->bIsUserAnAdmin)
        {
            FUNC_7(VAR_17->hTool, VAR_16, VAR_0,
                       (LPARAM)FUNC_6(VAR_14, 0));
            FUNC_0(VAR_18, VAR_0, VAR_6);
            FUNC_0(FUNC_4(VAR_17->hShortcutMenu, 0), VAR_0, VAR_6);
        }

        VAR_21 = VAR_17->pCurrentService->ServiceStatusProcess.dwControlsAccepted;
        VAR_22 = VAR_17->pCurrentService->ServiceStatusProcess.dwCurrentState;

        VAR_20 = FUNC_3(VAR_17->pCurrentService->lpServiceName);

        if (VAR_20 && VAR_20->dwStartType != VAR_11)
        {
            if (VAR_22 == VAR_13)
            {
                FUNC_0(VAR_18, VAR_4, VAR_6);
                FUNC_0(FUNC_4(VAR_17->hShortcutMenu, 0), VAR_4, VAR_6);
                FUNC_7(VAR_17->hTool, VAR_16, VAR_4,
                       (LPARAM)FUNC_6(VAR_14, 0));
            }

            if ( (VAR_21 & VAR_10) && (VAR_22 == VAR_12) )
            {
                FUNC_0(VAR_18, VAR_3, VAR_6);
                FUNC_0(FUNC_4(VAR_17->hShortcutMenu, 0), VAR_3, VAR_6);
                FUNC_7(VAR_17->hTool, VAR_16, VAR_3,
                       (LPARAM)FUNC_6(VAR_14, 0));
            }
        }

        if(VAR_20)
            FUNC_5(FUNC_2(), 0, VAR_20);

        if ( (VAR_21 & VAR_10) && (VAR_22 == VAR_12) )
        {
            FUNC_0(VAR_18, VAR_5, VAR_6);
            FUNC_0(FUNC_4(VAR_17->hShortcutMenu, 0), VAR_5, VAR_6);
            FUNC_7(VAR_17->hTool, VAR_16, VAR_5,
                   (LPARAM)FUNC_6(VAR_14, 0));
        }

        if ( (VAR_21 & VAR_9) && (VAR_22 == VAR_12) )
        {
            FUNC_0(VAR_18, VAR_1, VAR_6);
            FUNC_0(FUNC_4(VAR_17->hShortcutMenu, 0), VAR_1, VAR_6);
            FUNC_7(VAR_17->hTool, VAR_16, VAR_1,
                   (LPARAM)FUNC_6(VAR_14, 0));
        }
    }
    else
    {

        FUNC_0(VAR_18, VAR_2, VAR_7);
        FUNC_0(VAR_18, VAR_0, VAR_7);
        FUNC_0(FUNC_4(VAR_17->hShortcutMenu, 0), VAR_2, VAR_7);
        FUNC_0(FUNC_4(VAR_17->hShortcutMenu, 0), VAR_0, VAR_7);
        FUNC_7(VAR_17->hTool, VAR_16, VAR_2,
                   (LPARAM)FUNC_6(VAR_15, 0));
        FUNC_7(VAR_17->hTool, VAR_16, VAR_0,
                   (LPARAM)FUNC_6(VAR_15, 0));
    }

}


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
struct TYPE_10__ {int Info; TYPE_2__* pService; } ;
struct TYPE_8__ {scalar_t__ dwControlsAccepted; scalar_t__ dwCurrentState; } ;
struct TYPE_9__ {int lpServiceName; TYPE_1__ ServiceStatusProcess; } ;
typedef TYPE_3__* PSERVICEPROPSHEET ;
typedef TYPE_4__* LPQUERY_SERVICE_CONFIG ;
typedef int HWND ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 () ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int ) ;
 int VAR_11 ;

__attribute__((used)) static VOID
FUNC_6(PSERVICEPROPSHEET VAR_12,
                HWND VAR_13)
{
    HWND VAR_14;
    LPQUERY_SERVICE_CONFIG VAR_15;
    DWORD VAR_16, VAR_17;
    UINT VAR_18;

    VAR_16 = VAR_12->pService->ServiceStatusProcess.dwControlsAccepted;
    VAR_17 = VAR_12->pService->ServiceStatusProcess.dwCurrentState;

    for (VAR_18 = VAR_3; VAR_18 <= VAR_2; VAR_18++)
    {
        VAR_14 = FUNC_1(VAR_13, VAR_18);
        FUNC_0 (VAR_14, VAR_0);
    }

    VAR_15 = FUNC_3(VAR_12->pService->lpServiceName);
    if (VAR_17 == VAR_10 &&
        VAR_15 && VAR_15->dwStartType != VAR_8)
    {
        VAR_14 = FUNC_1(VAR_13, VAR_3);
        FUNC_0 (VAR_14, VAR_11);
    }
    else if ( (VAR_16 & VAR_7) && (VAR_17 == VAR_9) )
    {
        VAR_14 = FUNC_1(VAR_13, VAR_5);
        FUNC_0 (VAR_14, VAR_11);
    }
    else if ( (VAR_16 & VAR_6) && (VAR_17 == VAR_9) )
    {
        VAR_14 = FUNC_1(VAR_13, VAR_1);
        FUNC_0 (VAR_14, VAR_11);
    }

    VAR_14 = FUNC_1(VAR_13, VAR_4);
    FUNC_0(VAR_14, (VAR_17 == VAR_10 && VAR_15 && VAR_15->dwStartType != VAR_8));

    if (VAR_15)
        FUNC_4(FUNC_2(), 0, VAR_15);


    FUNC_5(VAR_12->Info);
}

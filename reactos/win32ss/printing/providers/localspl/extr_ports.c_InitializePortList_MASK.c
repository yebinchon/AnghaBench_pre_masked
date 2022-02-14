
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_12__ {int (* pfnEnumPorts ) (int *,int,int *,scalar_t__,scalar_t__*,scalar_t__*) ;} ;
struct TYPE_18__ {TYPE_1__ Monitor; } ;
struct TYPE_17__ {struct TYPE_17__* Flink; } ;
struct TYPE_16__ {int Entry; scalar_t__ pwszName; TYPE_4__* pPrintMonitor; } ;
struct TYPE_15__ {int pwszName; scalar_t__ pMonitor; int hMonitor; scalar_t__ bIsLevel2; } ;
struct TYPE_14__ {int (* pfnEnumPorts ) (int ,int *,int,int *,scalar_t__,scalar_t__*,scalar_t__*) ;} ;
struct TYPE_13__ {int pName; } ;
typedef scalar_t__ PWSTR ;
typedef TYPE_2__* PPORT_INFO_1W ;
typedef TYPE_3__* PMONITOR2 ;
typedef TYPE_4__* PLOCAL_PRINT_MONITOR ;
typedef TYPE_5__* PLOCAL_PORT ;
typedef TYPE_6__* PLIST_ENTRY ;
typedef int * PBYTE ;
typedef TYPE_7__* LPMONITOREX ;
typedef int LOCAL_PORT ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 TYPE_4__* FUNC_0 (TYPE_6__*,int ,int ) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int VAR_4 ;
 TYPE_6__ VAR_5 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*) ;
 int VAR_6 ;
 int FUNC_10 (int ,int *,int,int *,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (int *,int,int *,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_12 (int ,int *,int,int *,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_13 (int *,int,int *,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_14 (int ) ;

BOOL
FUNC_15(void)
{
    BOOL VAR_7;
    DWORD VAR_8;
    DWORD VAR_9;
    DWORD VAR_10;
    DWORD VAR_11;
    DWORD VAR_12;
    PLOCAL_PORT VAR_13;
    PLOCAL_PRINT_MONITOR VAR_14;
    PLIST_ENTRY VAR_15;
    PPORT_INFO_1W VAR_16;
    PPORT_INFO_1W VAR_17 = ((void*)0);

    FUNC_9("InitializePortList()\n");


    FUNC_6(&VAR_6);


    for (VAR_15 = VAR_5.Flink; VAR_15 != &VAR_5; VAR_15 = VAR_15->Flink)
    {

        if (VAR_17)
        {
            FUNC_3(VAR_17);
            VAR_17 = ((void*)0);
        }

        VAR_14 = FUNC_0(VAR_15, VAR_4, VAR_3);


        if (VAR_14->bIsLevel2)
            VAR_7 = ((PMONITOR2)VAR_14->pMonitor)->pfnEnumPorts(VAR_14->hMonitor, ((void*)0), 1, ((void*)0), 0, &VAR_8, &VAR_11);
        else
            VAR_7 = ((LPMONITOREX)VAR_14->pMonitor)->Monitor.pfnEnumPorts(((void*)0), 1, ((void*)0), 0, &VAR_8, &VAR_11);


        if (FUNC_5() != VAR_0)
        {
            FUNC_4("Print Monitor \"%S\" failed with error %lu on EnumPorts!\n", VAR_14->pwszName, FUNC_5());
            continue;
        }


        VAR_17 = FUNC_2(VAR_8);
        if (!VAR_17)
        {
            VAR_10 = VAR_1;
            FUNC_4("DllAllocSplMem failed!\n");
            goto Cleanup;
        }


        if (VAR_14->bIsLevel2)
            VAR_7 = ((PMONITOR2)VAR_14->pMonitor)->pfnEnumPorts(VAR_14->hMonitor, ((void*)0), 1, (PBYTE)VAR_17, VAR_8, &VAR_8, &VAR_11);
        else
            VAR_7 = ((LPMONITOREX)VAR_14->pMonitor)->Monitor.pfnEnumPorts(((void*)0), 1, (PBYTE)VAR_17, VAR_8, &VAR_8, &VAR_11);


        if (!VAR_7)
        {
            FUNC_4("Print Monitor \"%S\" failed with error %lu on EnumPorts!\n", VAR_14->pwszName, FUNC_5());
            continue;
        }


        VAR_16 = VAR_17;

        for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
        {
            VAR_9 = (FUNC_14(VAR_16->pName) + 1) * sizeof(WCHAR);


            VAR_13 = FUNC_2(sizeof(LOCAL_PORT) + VAR_9);
            if (!VAR_13)
            {
                VAR_10 = VAR_1;
                FUNC_4("DllAllocSplMem failed!\n");
                goto Cleanup;
            }

            VAR_13->pPrintMonitor = VAR_14;
            VAR_13->pwszName = (PWSTR)((PBYTE)VAR_13 + sizeof(LOCAL_PORT));
            FUNC_1(VAR_13->pwszName, VAR_16->pName, VAR_9);


            FUNC_7(&VAR_6, &VAR_13->Entry);
            VAR_16++;
        }
    }

    VAR_10 = VAR_2;

Cleanup:

    if (VAR_17)
        FUNC_3(VAR_17);

    FUNC_8(VAR_10);
    return (VAR_10 == VAR_2);
}

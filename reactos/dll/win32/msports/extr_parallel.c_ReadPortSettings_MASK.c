
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int dwFilterResourceMethod; scalar_t__ dwLegacy; scalar_t__ szPortName; int DeviceInfoData; int DeviceInfoSet; scalar_t__ dwPortNumber; } ;
typedef TYPE_1__* PPORT_DATA ;
typedef int PBYTE ;
typedef scalar_t__ HKEY ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,int *,int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (char*,TYPE_1__*) ;

__attribute__((used)) static
VOID
FUNC_6(
    PPORT_DATA VAR_6)
{
    DWORD VAR_7;
    HKEY VAR_8;
    DWORD VAR_9;

    FUNC_5("ReadPortSettings(%p)\n", VAR_6);

    VAR_6->dwFilterResourceMethod = 1;
    VAR_6->dwLegacy = 0;
    VAR_6->dwPortNumber = 0;

    VAR_8 = FUNC_4(VAR_6->DeviceInfoSet,
                                VAR_6->DeviceInfoData,
                                VAR_0,
                                0,
                                VAR_1,
                                VAR_5);
    if (VAR_8 != VAR_4)
    {
        VAR_7 = sizeof(VAR_6->szPortName);
        VAR_9 = FUNC_3(VAR_8,
                                   L"PortName",
                                   ((void*)0),
                                   ((void*)0),
                                  (PBYTE)VAR_6->szPortName,
                                  &VAR_7);
        if (VAR_9 != VAR_2)
        {
            FUNC_0("RegQueryValueExW failed (Error %lu)\n", VAR_9);
        }

        VAR_7 = sizeof(VAR_6->dwFilterResourceMethod);
        VAR_9 = FUNC_3(VAR_8,
                                   L"FilterResourceMethod",
                                   ((void*)0),
                                   ((void*)0),
                                   (PBYTE)&VAR_6->dwFilterResourceMethod,
                                   &VAR_7);
        if (VAR_9 != VAR_2)
        {
            FUNC_0("RegQueryValueExW failed (Error %lu)\n", VAR_9);
        }

        FUNC_1(VAR_8);
    }

    VAR_9 = FUNC_2(VAR_3,
                            L"SYSTEM\\CurrentControlSet\\Services\\Parport\\Parameters",
                            0,
                            VAR_5,
                            &VAR_8);
    if (VAR_9 == VAR_2)
    {
        VAR_7 = sizeof(VAR_6->dwLegacy);
        VAR_9 = FUNC_3(VAR_8,
                                   L"ParEnableLegacyZip",
                                   ((void*)0),
                                   ((void*)0),
                                   (PBYTE)&VAR_6->dwLegacy,
                                   &VAR_7);
        if (VAR_9 != VAR_2)
        {
            FUNC_0("RegQueryValueExW failed (Error %lu)\n", VAR_9);
        }

        FUNC_1(VAR_8);
    }
}

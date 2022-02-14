
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int PSP_DEVINFO_DATA ;
typedef int * PCM_RESOURCE_LIST ;
typedef int * LPBYTE ;
typedef scalar_t__ LONG ;
typedef int * HKEY ;
typedef int HDEVINFO ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int * VAR_2 ;
 int * FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char*,int ,int ,int **) ;
 scalar_t__ FUNC_8 (int *,char*,int *,int *,int *,int *) ;
 int FUNC_9 (int ,int ,char*,int ,int *) ;
 scalar_t__ VAR_4 ;

BOOL
FUNC_10(HDEVINFO VAR_5,
                    PSP_DEVINFO_DATA VAR_6,
                    PCM_RESOURCE_LIST *VAR_7)
{
    WCHAR VAR_8[128];
    HKEY VAR_9 = ((void*)0);
    HKEY VAR_10 = ((void*)0);
    HKEY VAR_11 = ((void*)0);
    LPBYTE VAR_12 = ((void*)0);
    DWORD VAR_13;
    LONG VAR_14;
    BOOL VAR_15 = VAR_1;

    FUNC_2("GetBootResourceList()\n");

    *VAR_7 = ((void*)0);

    if (!FUNC_9(VAR_5,
                                     VAR_6,
                                     VAR_8,
                                     FUNC_0(VAR_8),
                                     &VAR_13))
    {
        FUNC_1("SetupDiGetDeviceInstanceIdW() failed\n");
        return VAR_1;
    }

    VAR_14 = FUNC_7(VAR_2,
                           L"SYSTEM\\CurrentControlSet\\Enum",
                           0,
                           VAR_3,
                           &VAR_9);
    if (VAR_14 != VAR_0)
    {
        FUNC_1("RegOpenKeyExW() failed (Error %lu)\n", VAR_14);
        goto done;
    }

    VAR_14 = FUNC_7(VAR_9,
                           VAR_8,
                           0,
                           VAR_3,
                           &VAR_10);
    if (VAR_14 != VAR_0)
    {
        FUNC_1("RegOpenKeyExW() failed (Error %lu)\n", VAR_14);
        goto done;
    }

    VAR_14 = FUNC_7(VAR_10,
                           L"LogConf",
                           0,
                           VAR_3,
                           &VAR_11);
    if (VAR_14 != VAR_0)
    {
        FUNC_1("RegOpenKeyExW() failed (Error %lu)\n", VAR_14);
        goto done;
    }


    VAR_14 = FUNC_8(VAR_11,
                              L"BootConfig",
                              ((void*)0),
                              ((void*)0),
                              ((void*)0),
                              &VAR_13);
    if (VAR_14 != VAR_0)
    {
        FUNC_1("RegQueryValueExW() failed (Error %lu)\n", VAR_14);
        goto done;
    }


    VAR_12 = FUNC_4(FUNC_3(), 0, VAR_13);
    if (VAR_12 == ((void*)0))
    {
        FUNC_1("Failed to allocate the resource list buffer\n");
        goto done;
    }


    VAR_14 = FUNC_8(VAR_11,
                              L"BootConfig",
                              ((void*)0),
                              ((void*)0),
                             (LPBYTE)VAR_12,
                              &VAR_13);
    if (VAR_14 == VAR_0)
    {
        FUNC_1("RegQueryValueExW() failed (Error %lu)\n", VAR_14);
        VAR_15 = VAR_4;
    }

done:
    if (VAR_15 == VAR_1 && VAR_12 != ((void*)0))
        FUNC_5(FUNC_3(), 0, VAR_12);

    if (VAR_11)
        FUNC_6(VAR_11);

    if (VAR_10)
        FUNC_6(VAR_10);

    if (VAR_9)
        FUNC_6(VAR_9);

    if (VAR_15 != VAR_1)
        *VAR_7 = (PCM_RESOURCE_LIST)VAR_12;

    return VAR_15;
}

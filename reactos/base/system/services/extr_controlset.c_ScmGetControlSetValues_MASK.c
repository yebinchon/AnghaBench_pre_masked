
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* PDWORD ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int ,scalar_t__*,int ,scalar_t__*) ;

__attribute__((used)) static
DWORD
FUNC_4(
    PDWORD VAR_3,
    PDWORD VAR_4,
    PDWORD VAR_5,
    PDWORD VAR_6)
{
    HKEY VAR_7;
    DWORD VAR_8;
    DWORD VAR_9;
    DWORD VAR_10;

    FUNC_0("ScmGetControlSetValues() called\n");

    VAR_10 = FUNC_2(VAR_1,
                            L"System\\Select",
                            0,
                            VAR_2,
                            &VAR_7);
    if (VAR_10 != VAR_0)
        return VAR_10;

    VAR_9 = sizeof(DWORD);
    VAR_10 = FUNC_3(VAR_7,
                               L"Current",
                               0,
                               &VAR_8,
                               (LPBYTE)VAR_3,
                               &VAR_9);
    if (VAR_10 != VAR_0)
    {
        *VAR_3 = 0;
    }

    VAR_9 = sizeof(DWORD);
    VAR_10 = FUNC_3(VAR_7,
                               L"Default",
                               0,
                               &VAR_8,
                               (LPBYTE)VAR_4,
                               &VAR_9);
    if (VAR_10 != VAR_0)
    {
        *VAR_4 = 0;
    }

    VAR_9 = sizeof(DWORD);
    VAR_10 = FUNC_3(VAR_7,
                               L"Failed",
                               0,
                               &VAR_8,
                               (LPBYTE)VAR_5,
                               &VAR_9);
    if (VAR_10 != VAR_0)
    {
        *VAR_5 = 0;
    }

    VAR_9 = sizeof(DWORD);
    VAR_10 = FUNC_3(VAR_7,
                               L"LastKnownGood",
                               0,
                               &VAR_8,
                               (LPBYTE)VAR_6,
                               &VAR_9);
    if (VAR_10 != VAR_0)
    {
        *VAR_6 = 0;
    }

    FUNC_1(VAR_7);

    FUNC_0("ControlSets:\n");
    FUNC_0("Current: %lu\n", *VAR_3);
    FUNC_0("Default: %lu\n", *VAR_4);
    FUNC_0("Failed: %lu\n", *VAR_5);
    FUNC_0("LastKnownGood: %lu\n", *VAR_6);

    return VAR_10;
}

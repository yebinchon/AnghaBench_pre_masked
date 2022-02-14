
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int * SC_HANDLE ;
typedef int PBYTE ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;


 int * FUNC_0 (int *,int const*,int *,int ,int ,int ,int ,char*,char*,scalar_t__*,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *,int **) ;
 scalar_t__ FUNC_4 (int *,char*,int *,scalar_t__*,int ,scalar_t__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,char*,int const*) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(SC_HANDLE VAR_8, const wchar_t *VAR_9, SC_HANDLE *VAR_10, DWORD *VAR_11)
{
    DWORD VAR_12;
    HKEY VAR_13 = ((void*)0);
    DWORD VAR_14 = 0, VAR_15 = 0, VAR_16;
    wchar_t VAR_17[256];

    FUNC_5(VAR_1);
    *VAR_10 = FUNC_0(
                    VAR_8,
                    VAR_9,
                    ((void*)0),
                    VAR_0,
                    VAR_7,
                    VAR_5,
                    VAR_6,
                    L"%systemroot%\\drivers\\win32k.sys",
                    L"advapi32_apitest_CreateService_Test_Group",
                    VAR_11,
                    ((void*)0),
                    ((void*)0),
                    ((void*)0));

    FUNC_7(*VAR_10 != ((void*)0), "Failed to create service, error=0x%08lx\n", FUNC_1());
    if (!*VAR_10)
    {
        FUNC_9("No service; cannot proceed with CreateService test\n");
        return 1;
    }

    FUNC_8(VAR_2);

    FUNC_7(*VAR_11 != 0, "tag is zero, expected nonzero\n");

    FUNC_6(VAR_17, sizeof VAR_17, L"System\\CurrentControlSet\\Services\\%ls", VAR_9);
    VAR_12 = FUNC_3(VAR_3, VAR_17, &VAR_13);
    FUNC_7(VAR_12 == VAR_2, "RegOpenKeyW failed with 0x%08lx\n", VAR_12);
    if (VAR_12)
    {
        FUNC_9("No regkey; cannot proceed with CreateService test\n");
        return 2;
    }

    VAR_16 = sizeof VAR_15;
    VAR_12 = FUNC_4(VAR_13, L"Tag", ((void*)0), &VAR_14, (PBYTE)&VAR_15, &VAR_16);
    FUNC_7(VAR_12 == VAR_2, "RegQueryValueExW returned 0x%08lx\n", VAR_12);
    FUNC_7(VAR_14 == VAR_4, "type=%lu, expected REG_DWORD\n", VAR_14);
    FUNC_7(VAR_16 == sizeof VAR_15, "tagSize=%lu, expected 4\n", VAR_16);
    FUNC_7(VAR_15 == *VAR_11, "tag=%lu, but registry says %lu\n", *VAR_11, VAR_15);

    FUNC_2(VAR_13);

    return 0;
}

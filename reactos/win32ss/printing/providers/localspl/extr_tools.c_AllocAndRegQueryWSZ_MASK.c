
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PWSTR ;
typedef int PCWSTR ;
typedef int * PBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ,int *,int *,int *,int *) ;

PWSTR
FUNC_4(HKEY VAR_1, PCWSTR VAR_2)
{
    DWORD VAR_3;
    LONG VAR_4;
    PWSTR VAR_5;


    VAR_4 = FUNC_3(VAR_1, VAR_2, ((void*)0), ((void*)0), ((void*)0), &VAR_3);
    if (VAR_4 != VAR_0)
    {
        FUNC_2("RegQueryValueExW failed with status %ld!\n", VAR_4);
        return ((void*)0);
    }


    VAR_5 = FUNC_0(VAR_3);
    if (!VAR_5)
    {
        FUNC_2("DllAllocSplMem failed!\n");
        return ((void*)0);
    }


    VAR_4 = FUNC_3(VAR_1, VAR_2, ((void*)0), ((void*)0), (PBYTE)VAR_5, &VAR_3);
    if (VAR_4 != VAR_0)
    {
        FUNC_2("RegQueryValueExW failed with status %ld!\n", VAR_4);
        FUNC_1(VAR_5);
        return ((void*)0);
    }

    return VAR_5;
}

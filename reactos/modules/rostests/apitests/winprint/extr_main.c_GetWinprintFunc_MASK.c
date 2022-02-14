
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wszWinprintPath ;
typedef char const WCHAR ;
typedef int * PVOID ;
typedef int LPBYTE ;
typedef int HMODULE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *,int,int ,int,int *) ;
 int * FUNC_2 (int ,char const*) ;
 int FUNC_3 (char const*) ;
 int VAR_1 ;
 int FUNC_4 (char*,char const*,...) ;
 int FUNC_5 (char const*,char*) ;

PVOID
FUNC_6(const char* VAR_2)
{
    DWORD VAR_3;
    HMODULE VAR_4;
    PVOID VAR_5;
    WCHAR VAR_6[VAR_1];


    if (!FUNC_1(((void*)0), ((void*)0), 1, (LPBYTE)VAR_6, sizeof(VAR_6), &VAR_3))
    {
        FUNC_4("Could not determine the path to the Print Processor directory, last error is %lu!\n", FUNC_0());
        return ((void*)0);
    }

    FUNC_5(VAR_6, L"\\winprint.dll");


    VAR_4 = FUNC_3(VAR_6);
    if (!VAR_4)
    {
        if (FUNC_0() != VAR_0)
        {
            FUNC_4("LoadLibraryW failed for %S with error %lu!\n", VAR_6, FUNC_0());
            return ((void*)0);
        }



        VAR_4 = FUNC_3(L"localspl.dll");
        if (!VAR_4)
        {
            FUNC_4("LoadLibraryW failed for localspl.dll with error %lu!\n", FUNC_0());
            return ((void*)0);
        }
    }


    VAR_5 = FUNC_2(VAR_4, VAR_2);
    if (!VAR_5)
    {
        FUNC_4("GetProcAddress failed for %s with error %lu!\n", VAR_2, FUNC_0());
        return ((void*)0);
    }

    return VAR_5;
}

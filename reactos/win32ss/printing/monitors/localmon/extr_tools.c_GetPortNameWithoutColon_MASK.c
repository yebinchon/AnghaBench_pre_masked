
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int PWSTR ;
typedef int* PCWSTR ;
typedef size_t DWORD ;


 int FUNC_0 (int ,int*,size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (char*,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 () ;
 size_t FUNC_4 (int*) ;

DWORD
FUNC_5(PCWSTR VAR_3, PWSTR* VAR_4)
{
    DWORD VAR_5;


    VAR_5 = FUNC_4(VAR_3) - 1;


    if (VAR_3[VAR_5] != L':')
        return VAR_0;


    *VAR_4 = FUNC_1((VAR_5 + 1) * sizeof(WCHAR));
    if (!*VAR_4)
    {
        FUNC_2("DllAllocSplMem failed with error %lu!\n", FUNC_3());
        return VAR_1;
    }



    FUNC_0(*VAR_4, VAR_3, VAR_5 * sizeof(WCHAR));

    return VAR_2;
}

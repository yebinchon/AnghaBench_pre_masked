
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ULONG ;
typedef int* LPWSTR ;


 int FUNC_0 (int*) ;

LPWSTR
FUNC_1(LPWSTR VAR_0)
{
    ULONG VAR_1;

    VAR_1 = FUNC_0(VAR_0);
    if (VAR_0[VAR_1 - 1] != L'\\')
    {
        VAR_0[VAR_1] = L'\\';
        VAR_1++;
        VAR_0[VAR_1] = (WCHAR)0;
    }

    return &VAR_0[VAR_1];
}

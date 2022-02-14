
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int* LPWSTR ;
typedef int LPCWSTR ;


 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (int*,size_t,int ,size_t) ;
 size_t FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ) ;

LPWSTR FUNC_4(LPCWSTR VAR_0, size_t VAR_1)
{
    LPWSTR VAR_2;
    size_t VAR_3;

    if (!VAR_0) return ((void*)0);

    VAR_3 = FUNC_2(FUNC_3(VAR_0), VAR_1);

    VAR_2 = (LPWSTR)FUNC_0(0, (VAR_3 + 1) * sizeof(WCHAR));
    if (!VAR_2) return ((void*)0);

    FUNC_1(VAR_2, VAR_3 + 1, VAR_0, VAR_3);
    VAR_2[VAR_3] = L'\0';

    return VAR_2;
}

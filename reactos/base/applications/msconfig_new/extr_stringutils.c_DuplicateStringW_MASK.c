
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int LPCWSTR ;


 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (int *,size_t,int ) ;
 int FUNC_2 (int ) ;

LPWSTR FUNC_3(LPCWSTR VAR_0)
{
    LPWSTR VAR_1;
    size_t VAR_2;

    if (!VAR_0) return ((void*)0);

    VAR_2 = FUNC_2(VAR_0) + 1;

    VAR_1 = (LPWSTR)FUNC_0(0, VAR_2 * sizeof(WCHAR));
    if (!VAR_1) return ((void*)0);

    FUNC_1(VAR_1, VAR_2, VAR_0);

    return VAR_1;
}

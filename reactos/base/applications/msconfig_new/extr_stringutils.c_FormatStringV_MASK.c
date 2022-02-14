
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int TCHAR ;
typedef int * LPTSTR ;
typedef int LPCTSTR ;


 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (int *,size_t,int ,int ) ;
 int FUNC_2 (int ,int ) ;

LPTSTR FUNC_3(LPCTSTR VAR_0, va_list VAR_1)
{
    LPTSTR VAR_2;
    size_t VAR_3;

    if (!VAR_0) return ((void*)0);

    VAR_3 = FUNC_2(VAR_0, VAR_1) + 1;

    VAR_2 = (LPTSTR)FUNC_0(0, VAR_3 * sizeof(TCHAR));
    if (!VAR_2) return ((void*)0);

    FUNC_1(VAR_2, VAR_3, VAR_0, VAR_1);

    return VAR_2;
}

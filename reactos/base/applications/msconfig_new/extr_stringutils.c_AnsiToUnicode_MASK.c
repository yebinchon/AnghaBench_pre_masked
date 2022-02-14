
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int LPCSTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,int,int *,int) ;

LPWSTR FUNC_2(LPCSTR VAR_2)
{
    LPWSTR VAR_3;
    int VAR_4;

    if (!VAR_2) return ((void*)0);

    VAR_4 = FUNC_1(VAR_0,
                                       VAR_1,
                                       VAR_2, -1, ((void*)0), 0);

    VAR_3 = (LPWSTR)FUNC_0(0, VAR_4 * sizeof(WCHAR));
    if (!VAR_3) return ((void*)0);

    FUNC_1(VAR_0,
                        VAR_1,
                        VAR_2, -1, VAR_3, VAR_4);

    return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPVOID ;
typedef int * LPDWORD ;
typedef int LPCWSTR ;
typedef int HRSRC ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static LPVOID FUNC_5(LPCWSTR VAR_1, LPDWORD VAR_2)
{
    HRSRC VAR_3;
    LPVOID VAR_4;

    VAR_3 = FUNC_0(FUNC_1(((void*)0)), VAR_1, (LPCWSTR)VAR_0);
    if (!VAR_3) return ((void*)0);

    VAR_4 = FUNC_3(FUNC_2(FUNC_1(((void*)0)), VAR_3));
    if (!VAR_4) return ((void*)0);

    *VAR_2 = FUNC_4(FUNC_1(((void*)0)), VAR_3);
    if (*VAR_2 == 0) return ((void*)0);

    return VAR_4;
}

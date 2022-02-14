
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef unsigned int UINT ;
typedef int * LPWSTR ;
typedef scalar_t__* LPCSTR ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ,scalar_t__*,unsigned int,int *,unsigned int) ;
 int * FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__*) ;

__attribute__((used)) static LPWSTR FUNC_3(LPCSTR VAR_1, UINT VAR_2)
{
    LPCSTR VAR_3;
    LPWSTR VAR_4;
    unsigned int VAR_5, VAR_6;

    VAR_3 = VAR_1;
    while (*VAR_3)
        VAR_3 = VAR_3+FUNC_2(VAR_3)+1;
    VAR_3++;
    VAR_5 = VAR_3 + 1 - VAR_1;
    if (VAR_5 < VAR_2) VAR_5 = VAR_2;

    VAR_6 = FUNC_0( VAR_0, 0, VAR_1, VAR_5, ((void*)0), 0 );
    VAR_4 = FUNC_1(VAR_6 * sizeof(WCHAR));
    FUNC_0( VAR_0, 0, VAR_1, VAR_5, VAR_4, VAR_6 );
    return VAR_4;
}

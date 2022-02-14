
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPWSTR ;
typedef scalar_t__* LPSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int INT ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__*,int,int*,int ,int) ;
 int FUNC_1 (scalar_t__*,int,int*,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;

DWORD
FUNC_3(
   LPSTR VAR_1,
   INT VAR_2,
   LPCWSTR VAR_3,
   INT VAR_4
   )
{
    DWORD VAR_5;

    if (VAR_4 < 0) VAR_4 = FUNC_2( VAR_3 ) + 1;

    if (VAR_0)
        FUNC_0( VAR_1, VAR_2, &VAR_5, (LPWSTR) VAR_3, VAR_4 * sizeof(WCHAR));
    else
        FUNC_1( VAR_1, VAR_2, &VAR_5, (LPWSTR) VAR_3, VAR_4 * sizeof(WCHAR) );

    if (VAR_5) VAR_1[VAR_5-1]=0;

    return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__* LPWSTR ;
typedef int LPSTR ;
typedef scalar_t__ LPCSTR ;
typedef int INT ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__*,int,int*,int ,int) ;
 int FUNC_1 (scalar_t__*,int,int*,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;

DWORD
FUNC_3(
   LPWSTR VAR_1,
   INT VAR_2,
   LPCSTR VAR_3,
   INT VAR_4
   )
{
    DWORD VAR_5;

    if (VAR_4 < 0) VAR_4 = FUNC_2( VAR_3 ) + 1;

    if (VAR_0)
        FUNC_0( VAR_1, VAR_2* sizeof(WCHAR), &VAR_5, (LPSTR)VAR_3, VAR_4 );
    else
        FUNC_1( VAR_1, VAR_2* sizeof(WCHAR), &VAR_5, (LPSTR)VAR_3, VAR_4 );

    if (VAR_5) VAR_1[(VAR_5/sizeof(WCHAR))-1]=0;

    return VAR_5/sizeof(WCHAR);
}

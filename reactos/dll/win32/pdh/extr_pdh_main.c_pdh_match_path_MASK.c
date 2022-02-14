
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPCWSTR ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (char*,int) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static BOOL FUNC_4( LPCWSTR VAR_0, LPCWSTR VAR_1 )
{
    const WCHAR *VAR_2;

    if (VAR_1[0] == '\\' && VAR_1[1] == '\\' && (VAR_2 = FUNC_1( VAR_1 + 2, '\\' )) &&
        FUNC_0( VAR_1 + 2, VAR_2 - VAR_1 - 2 ))
    {
        VAR_1 += VAR_2 - VAR_1;
    }
    if (FUNC_1( VAR_1, '\\' )) VAR_2 = VAR_0;
    else VAR_2 = FUNC_3( VAR_0, '\\' ) + 1;
    return !FUNC_2( VAR_2, VAR_1 );
}

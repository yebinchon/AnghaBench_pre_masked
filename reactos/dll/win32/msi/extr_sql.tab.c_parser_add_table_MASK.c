
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ LPWSTR ;
typedef char const* LPCWSTR ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (void*,int) ;
 int FUNC_1 (scalar_t__,char const*) ;
 int FUNC_2 (scalar_t__,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static LPWSTR FUNC_4( void *VAR_0, LPCWSTR VAR_1, LPCWSTR VAR_2 )
{
    static const WCHAR VAR_3[] = {' ',0};
    DWORD VAR_4 = FUNC_3( VAR_1 ) + FUNC_3( VAR_2 ) + 2;
    LPWSTR VAR_5;

    VAR_5 = FUNC_0( VAR_0, VAR_4 * sizeof(WCHAR) );
    if( VAR_5 )
    {
        FUNC_2( VAR_5, VAR_1 );
        FUNC_1( VAR_5, VAR_3 );
        FUNC_1( VAR_5, VAR_2 );
    }
    return VAR_5;
}

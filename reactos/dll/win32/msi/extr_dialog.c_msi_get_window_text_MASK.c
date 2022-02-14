
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef scalar_t__ LPWSTR ;
typedef int HWND ;


 int FUNC_0 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static LPWSTR FUNC_3( HWND VAR_0 )
{
    UINT VAR_1, VAR_2;
    LPWSTR VAR_3;

    VAR_1 = 0x20;
    VAR_3 = FUNC_1( VAR_1*sizeof(WCHAR) );
    while ( VAR_3 )
    {
        VAR_2 = FUNC_0( VAR_0, VAR_3, VAR_1 );
        if ( VAR_2 < (VAR_1 - 1) )
            break;
        VAR_1 *= 2;
        VAR_3 = FUNC_2( VAR_3, VAR_1*sizeof(WCHAR) );
    }

    return VAR_3;
}

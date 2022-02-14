
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const*) ;
 int * FUNC_3 (int *,int *) ;

__attribute__((used)) static WCHAR *FUNC_4( const WCHAR *VAR_0, const WCHAR *VAR_1 )
{
    LPWSTR VAR_2, VAR_3, VAR_4;
    VAR_2 = FUNC_0( FUNC_2( VAR_0 ) );
    VAR_3 = FUNC_0( FUNC_2( VAR_1 ) );
    VAR_4 = FUNC_3( VAR_2, VAR_3 );
    if (VAR_4)
        VAR_4 = (LPWSTR)VAR_0 + (VAR_4 - VAR_2);
    FUNC_1( VAR_2 );
    FUNC_1( VAR_3 );
    return VAR_4;
}

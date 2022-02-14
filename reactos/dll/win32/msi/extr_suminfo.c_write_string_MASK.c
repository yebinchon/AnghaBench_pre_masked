
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCSTR ;
typedef int * LPBYTE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static DWORD FUNC_3( LPBYTE VAR_0, DWORD VAR_1, LPCSTR VAR_2 )
{
    DWORD VAR_3 = FUNC_0( VAR_2 ) + 1;
    FUNC_2( VAR_0, VAR_1, VAR_3 );
    if( VAR_0 )
        FUNC_1( &VAR_0[VAR_1 + 4], VAR_2, VAR_3 );
    return (7 + VAR_3) & ~3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int *,char) ;
 int FUNC_2 (int *) ;

void FUNC_3( WCHAR *VAR_0 )
{
    WCHAR *VAR_1 = FUNC_1( VAR_0, '|' );
    if (VAR_1) FUNC_0( VAR_0, VAR_1 + 1, (FUNC_2( VAR_1 + 1 ) + 1) * sizeof(WCHAR) );
}

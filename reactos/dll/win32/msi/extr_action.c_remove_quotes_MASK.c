
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int *,char) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( WCHAR *VAR_0 )
{
    WCHAR *VAR_1 = VAR_0;
    int VAR_2 = FUNC_2( VAR_0 );

    while ((VAR_1 = FUNC_1( VAR_1, '"' )))
    {
        FUNC_0( VAR_1, VAR_1 + 1, (VAR_2 - (VAR_1 - VAR_0)) * sizeof(WCHAR) );
        VAR_1++;
    }
}

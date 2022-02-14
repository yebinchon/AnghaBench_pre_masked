
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;

void FUNC_3( int VAR_1, char * VAR_2[] )
{
    char * VAR_3;
    int VAR_4;
    VAR_0 = VAR_2[0] + FUNC_2( VAR_2[0] );
    VAR_3 = VAR_0;
    while(( VAR_3 > VAR_2[0] )&&( VAR_3[-1] != '/'))
        --VAR_3;
    if ( VAR_3 > VAR_2[0] )
    {
        FUNC_0( VAR_2[0], VAR_3, VAR_0 - VAR_3 );
        FUNC_1( VAR_2[0] + ( VAR_0 - VAR_3 ), 0, VAR_3 - VAR_2[0] );
        VAR_0 = VAR_2[0] + (VAR_0 - VAR_3);
    }
    for( VAR_4 = 1; VAR_4 < VAR_1; ++VAR_4 )
    {
        FUNC_1( VAR_2[VAR_4], 0, FUNC_2( VAR_2[VAR_4] ) );
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* PCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

BOOL FUNC_1( PCHAR VAR_2 )
{
    int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6 = 1;


    VAR_4 = FUNC_0( VAR_2 );
    if( VAR_4 > 15 ) return VAR_0;



    for( ; VAR_3 < VAR_4; VAR_3 += 1 )
    {
        if( '.' == VAR_2[VAR_3] )
        {
            if( !VAR_5 ) return VAR_0;
            if( VAR_5 > 3 ) return VAR_0;

            VAR_5 = 0;
            VAR_6 += 1;
        }
        else
        {
            VAR_5 += 1;

            if( (VAR_2[VAR_3] < '0') || (VAR_2[VAR_3] > '9') ) return VAR_0;
        }
    }

    if( VAR_5 > 3 ) return VAR_0;



    if( VAR_6 < 4 ) return VAR_0;

    return VAR_1;
}

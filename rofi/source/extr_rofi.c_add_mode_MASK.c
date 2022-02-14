
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Mode ;


 scalar_t__ FUNC_0 (int **,int) ;
 int ** VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int * FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5 ( const char * VAR_2 )
{
    unsigned int VAR_3 = VAR_1;

    VAR_0 = (Mode * *) FUNC_0 ( VAR_0, sizeof ( Mode* ) * ( VAR_1 + 1 ) );

    Mode *VAR_4 = FUNC_2 ( VAR_2 );
    if ( VAR_4 ) {
        VAR_0[VAR_1] = VAR_4;
        VAR_1++;
    }
    else if ( FUNC_3 ( VAR_2 ) ) {

        Mode *VAR_5 = FUNC_4 ( VAR_2 );
        if ( VAR_5 != ((void*)0) ) {

            FUNC_1 ( VAR_5 );
            VAR_0[VAR_1] = VAR_5;
            VAR_1++;
        }
    }
    return ( VAR_3 == VAR_1 ) ? -1 : (int) VAR_3;
}

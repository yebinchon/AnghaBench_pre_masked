
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* PCHAR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;

void FUNC_2( PCHAR VAR_0, PCHAR VAR_1 )
{
    int VAR_2;
    int VAR_3;
    int VAR_4 = 0;

    VAR_3 = FUNC_0( VAR_0 ) - 1;
    VAR_2 = VAR_3;





    for( ; VAR_2 > 0; VAR_2 -= 1 ) if( '.' == VAR_0[VAR_2] ) break;

    FUNC_1( &VAR_1[VAR_4], &VAR_0[VAR_2 + 1], (VAR_3 - VAR_2) );
    VAR_4 += (VAR_3 - VAR_2);

    VAR_1[VAR_4] = '.';
    VAR_4 += 1;

    VAR_2 -= 1;
    VAR_3 = VAR_2;


    for( ; VAR_2 > 0; VAR_2 -= 1 ) if( '.' == VAR_0[VAR_2] ) break;

    FUNC_1( &VAR_1[VAR_4], &VAR_0[VAR_2 + 1], (VAR_3 - VAR_2) );
    VAR_4 += (VAR_3 - VAR_2);

    VAR_1[VAR_4] = '.';
    VAR_4 += 1;

    VAR_2 -= 1;
    VAR_3 = VAR_2;


    for( ; VAR_2 > 0; VAR_2 -= 1 ) if( '.' == VAR_0[VAR_2] ) break;

    FUNC_1( &VAR_1[VAR_4], &VAR_0[VAR_2 + 1], (VAR_3 - VAR_2) );
    VAR_4 += (VAR_3 - VAR_2);

    VAR_1[VAR_4] = '.';
    VAR_4 += 1;

    VAR_2 -= 1;
    VAR_3 = VAR_2;


    for( ; VAR_2 > 0; VAR_2 -= 1 );

    FUNC_1( &VAR_1[VAR_4], &VAR_0[VAR_2], (VAR_3 - VAR_2) + 1 );
    VAR_4 += (VAR_3 - VAR_2) + 1;

    VAR_1[VAR_4] = '\0';
}

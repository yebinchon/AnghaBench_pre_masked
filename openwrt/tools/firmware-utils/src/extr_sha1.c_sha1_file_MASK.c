
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int uchar ;
typedef int sha1_context ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 size_t FUNC_2 (int *,int,int,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;

int FUNC_6( char *VAR_0, uchar VAR_1[20] )
{
    FILE *VAR_2;
    size_t VAR_3;
    sha1_context VAR_4;
    uchar VAR_5[1024];

    if( ( VAR_2 = FUNC_1( VAR_0, "rb" ) ) == ((void*)0) )
        return( 1 );

    FUNC_4( &VAR_4 );

    while( ( VAR_3 = FUNC_2( VAR_5, 1, sizeof( VAR_5 ), VAR_2 ) ) > 0 )
        FUNC_5( &VAR_4, VAR_5, (uint) VAR_3 );

    FUNC_3( &VAR_4, VAR_1 );

    FUNC_0( VAR_2 );
    return( 0 );
}

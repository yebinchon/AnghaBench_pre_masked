
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int ) ;

int FUNC_7( int VAR_0, int VAR_1, char *VAR_2, int *VAR_3 ) {
    static char VAR_4[256];
    int VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7 = 0;
    int VAR_8;

    VAR_5 = FUNC_1( VAR_1 );



    VAR_6 = FUNC_2(VAR_1, "name", VAR_4, 256);



    VAR_7 = !FUNC_6(VAR_4, VAR_2, FUNC_5(VAR_2));

    if( !VAR_3 && VAR_7 ) return VAR_1;

    for( VAR_8 = 0; VAR_8 < VAR_0; VAR_8++ ) FUNC_0( ' ' );

    if( VAR_0 == 1 ) {
    if( VAR_6 > 0 ) {
        FUNC_4( "%c Name: %s\n", VAR_7 ? '*' : ' ', VAR_4 );
    } else {
        FUNC_4( "- No name attribute for %x\n", VAR_1 );
    }
    }

    while( !VAR_7 && VAR_5 ) {
        VAR_8 = FUNC_7( VAR_0+1, VAR_5, VAR_2, VAR_3 );
    if( VAR_8 ) return VAR_8;
        VAR_5 = FUNC_3( VAR_5 );
    }

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temptext ;
typedef scalar_t__ LONG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*,int,int) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int,char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char*,...) ;

__attribute__((used)) static void FUNC_10( void )
{
    int VAR_6;
    LONG VAR_7, VAR_8, VAR_9;
    char VAR_10[] = "012345678";
    char *VAR_11 = FUNC_5( ".", "tst" );

    FUNC_9( VAR_11 != ((void*)0), "Couldn't create test file: %s\n", VAR_11 );

    VAR_6 = FUNC_4( VAR_11, VAR_1|VAR_3|VAR_2, VAR_4|VAR_5 );
    FUNC_9( VAR_6 > 0, "Couldn't open test file\n" );

    VAR_9 = FUNC_7( VAR_6, VAR_10, sizeof(VAR_10) );
    FUNC_9( VAR_9 > 0, "Couldn't write to test file\n" );


    VAR_7 = FUNC_3( VAR_6, 0, VAR_0 );


    FUNC_9( FUNC_0( VAR_6, sizeof(VAR_10) / 2 ) == 0, "_chsize() failed\n" );

    VAR_8 = FUNC_3( VAR_6, 0, VAR_0 );
    FUNC_9( VAR_7 == VAR_8, "File pointer changed from: %d to: %d\n", VAR_7, VAR_8 );
    FUNC_9( FUNC_2( VAR_6 ) == sizeof(VAR_10) / 2, "Wrong file size\n" );


    FUNC_9( FUNC_0( VAR_6, sizeof(VAR_10) * 2 ) == 0, "_chsize() failed\n" );

    VAR_8 = FUNC_3( VAR_6, 0, VAR_0 );
    FUNC_9( VAR_7 == VAR_8, "File pointer changed from: %d to: %d\n", VAR_7, VAR_8 );
    FUNC_9( FUNC_2( VAR_6 ) == sizeof(VAR_10) * 2, "Wrong file size\n" );

    FUNC_1( VAR_6 );
    FUNC_6( VAR_11 );
    FUNC_8( VAR_11 );
}

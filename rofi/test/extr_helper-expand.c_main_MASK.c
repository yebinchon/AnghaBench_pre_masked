
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 () ;
 char* FUNC_5 (char*) ;
 int * FUNC_6 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (char*,char const*) ;

int FUNC_8 ( int VAR_3, char ** VAR_4 )
{
    FUNC_1 ( VAR_3, VAR_4 );

    if ( FUNC_6 ( VAR_1, "" ) == ((void*)0) ) {
        FUNC_2 ( VAR_2, "Failed to set locale.\n" );
        return VAR_0;
    }





    char *VAR_5 = FUNC_5 ( "/" );
    FUNC_0 ( FUNC_7 ( VAR_5, "/" ) == 0 );
    FUNC_3 ( VAR_5 );

    VAR_5 = FUNC_5 ( "../AUTHORS" );
    FUNC_0 ( FUNC_7 ( VAR_5, "../AUTHORS" ) == 0 );
    FUNC_3 ( VAR_5 );

    VAR_5 = FUNC_5 ( "/bin/false" );
    FUNC_0 ( FUNC_7 ( VAR_5, "/bin/false" ) == 0 );
    FUNC_3 ( VAR_5 );

    VAR_5 = FUNC_5 ( "~/" );
    const char *VAR_6 = FUNC_4 ();
    FUNC_0 ( FUNC_7 ( VAR_5, VAR_6 ) == 0 );
    FUNC_3 ( VAR_5 );
    VAR_5 = FUNC_5 ( "~root/" );
    FUNC_0 ( VAR_5[0] == '/' );
    FUNC_3 ( VAR_5 );
}

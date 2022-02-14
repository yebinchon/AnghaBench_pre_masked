
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char*,char*,...) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 () ;
 char* FUNC_5 () ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 char* FUNC_7 (char const*,char*,int *) ;
 char* FUNC_8 (char const*) ;
 char* FUNC_9 (char const*) ;

char *FUNC_10 ( const char *VAR_2 )
{
    char *VAR_3 = FUNC_9 ( VAR_2 );
    FUNC_1 ( "Opening theme, testing: %s\n", VAR_3 );
    if ( FUNC_2 ( VAR_3, VAR_0 ) ) {
        return VAR_3;
    }
    FUNC_3 ( VAR_3 );

    if ( FUNC_6 ( VAR_2, ".rasi" ) ) {
        VAR_3 = FUNC_8 ( VAR_2 );
    }
    else {
        VAR_3 = FUNC_7 ( VAR_2, ".rasi", ((void*)0) );
    }

    const char *VAR_4 = FUNC_4 ();
    if ( VAR_4 ) {
        char *VAR_5 = FUNC_0 ( VAR_4, "rofi", "themes", VAR_3, ((void*)0) );
        FUNC_1 ( "Opening theme, testing: %s\n", VAR_5 );
        if ( VAR_5 && FUNC_2 ( VAR_5, VAR_0 ) ) {
            FUNC_3 ( VAR_3 );
            return VAR_5;
        }
        FUNC_3 ( VAR_5 );
    }

    if ( VAR_4 ) {
        char *VAR_6 = FUNC_0 ( VAR_4, "rofi", VAR_3, ((void*)0) );
        FUNC_1 ( "Opening theme, testing: %s\n", VAR_6 );
        if ( FUNC_2 ( VAR_6, VAR_0 ) ) {
            FUNC_3 ( VAR_3 );
            return VAR_6;
        }
        FUNC_3 ( VAR_6 );
    }
    const char * VAR_7 = FUNC_5 ();
    if ( VAR_7 ) {
        char *VAR_8 = FUNC_0 ( VAR_7, "rofi", "themes", VAR_3, ((void*)0) );
        FUNC_1 ( "Opening theme, testing: %s\n", VAR_8 );
        if ( VAR_8 ) {
            if ( FUNC_2 ( VAR_8, VAR_0 ) ) {
                FUNC_3 ( VAR_3 );
                return VAR_8;
            }
            FUNC_3 ( VAR_8 );
        }
    }

    char *VAR_9 = FUNC_0 ( VAR_1, VAR_3, ((void*)0) );
    if ( VAR_9 ) {
        FUNC_1 ( "Opening theme, testing: %s\n", VAR_9 );
        if ( FUNC_2 ( VAR_9, VAR_0 ) ) {
            FUNC_3 ( VAR_3 );
            return VAR_9;
        }
        FUNC_3 ( VAR_9 );
    }
    return VAR_3;
}

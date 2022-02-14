
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_dir; } ;


 char const VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (char*,int ,char*) ;
 int FUNC_5 (char**) ;
 char** FUNC_6 (char const*,int ,int) ;
 struct passwd* FUNC_7 (char*) ;

char *FUNC_8 ( const char *VAR_2 )
{
    char **VAR_3 = FUNC_6 ( VAR_2, VAR_1, -1 );
    for ( unsigned int VAR_4 = 0; VAR_3 && VAR_3[VAR_4]; VAR_4++ ) {

        if ( VAR_3[VAR_4][0] == '~' && VAR_3[VAR_4][1] == '\0' ) {
            FUNC_1 ( VAR_3[VAR_4] );
            VAR_3[VAR_4] = FUNC_3 ( FUNC_2 () );
        }

        else if ( VAR_3[VAR_4][0] == '~' ) {
            struct passwd *VAR_5 = FUNC_7 ( &( VAR_3[VAR_4][1] ) );
            if ( VAR_5 != ((void*)0) ) {
                FUNC_1 ( VAR_3[VAR_4] );
                VAR_3[VAR_4] = FUNC_3 ( VAR_5->pw_dir );
            }
        }
        else if ( VAR_4 == 0 ) {
            char * VAR_6 = VAR_3[VAR_4];
            if ( VAR_2[0] == VAR_0 ) {
                VAR_3[VAR_4] = FUNC_4 ( "%s%s", VAR_1, VAR_6 );
                FUNC_1 ( VAR_6 );
            }
        }
    }
    char *VAR_7 = FUNC_0 ( VAR_3 );
    FUNC_5 ( VAR_3 );
    return VAR_7;
}

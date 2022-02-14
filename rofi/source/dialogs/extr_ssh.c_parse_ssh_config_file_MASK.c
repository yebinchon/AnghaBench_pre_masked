
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t gl_pathc; char** gl_pathv; int gl_offs; } ;
typedef TYPE_1__ glob_t ;
typedef char gchar ;
struct TYPE_9__ {int * hostname; scalar_t__ port; } ;
typedef TYPE_2__ SshEntry ;
typedef int SSHModePrivateData ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int *) ;
 char* FUNC_5 (char*,int) ;
 char* FUNC_6 (char*,char*,int *) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (char*) ;
 TYPE_2__* FUNC_11 (TYPE_2__*,unsigned int) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 void* FUNC_13 (char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,int ) ;
 scalar_t__ FUNC_16 (char**,size_t*,int *) ;
 scalar_t__ FUNC_17 (char*,int ,int *,TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 char* FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (char*,char const* const) ;
 char* FUNC_21 (char*,int ,char**) ;

__attribute__((used)) static void FUNC_22 ( SSHModePrivateData *VAR_2, const char *VAR_3, SshEntry **VAR_4, unsigned int *VAR_5, unsigned int VAR_6 )
{
    FILE *VAR_7 = FUNC_2 ( VAR_3, "r" );

    FUNC_7 ( "Parsing ssh config file: %s", VAR_3 );
    if ( VAR_7 != ((void*)0) ) {
        char *VAR_8 = ((void*)0);
        size_t VAR_9 = 0;
        char *VAR_10 = ((void*)0);
        while ( FUNC_16 ( &VAR_8, &VAR_9, VAR_7 ) > 0 ) {





            char *VAR_11 = FUNC_21 ( VAR_8, VAR_0, &VAR_10 );


            if ( !VAR_11 || *VAR_11 == '#' ) {
                continue;
            }
            char *VAR_12 = FUNC_5(VAR_11, -1);
            if ( FUNC_12 ( VAR_12, "include" ) == 0 ) {
                VAR_11 = FUNC_21 ( ((void*)0), VAR_0, &VAR_10 );
                FUNC_7 ( "Found Include: %s", VAR_11 );
                gchar *VAR_13 = FUNC_19 ( VAR_11 );
                gchar *VAR_14 = ((void*)0);
                if ( !FUNC_10 ( VAR_13 ) ) {
                    char *VAR_15 = FUNC_9 ( VAR_3 );
                    VAR_14 = FUNC_6 ( VAR_15, VAR_13, ((void*)0) );
                    FUNC_8 ( VAR_15 );
                }
                else {
                    VAR_14 = FUNC_13 ( VAR_13 );
                }
                glob_t VAR_16 = { .gl_pathc = 0, .gl_pathv = ((void*)0), .gl_offs = 0 };

                if ( FUNC_17 ( VAR_14, 0, ((void*)0), &VAR_16 ) == 0 ) {
                    for ( size_t VAR_17 = 0; VAR_17 < VAR_16.gl_pathc; VAR_17++ ) {
                        FUNC_22 ( VAR_2, VAR_16.gl_pathv[VAR_17], VAR_4, VAR_5, VAR_6 );
                    }
                }
                FUNC_18 ( &VAR_16 );

                FUNC_8 ( VAR_14 );
                FUNC_8 ( VAR_13 );
            }
            else if ( FUNC_12 ( VAR_12, "userknownhostsfile" ) == 0 ) {
                while ( ( VAR_11 = FUNC_21 ( ((void*)0), VAR_0, &VAR_10 ) ) ) {
                    FUNC_7("Found extra UserKnownHostsFile: %s", VAR_11);
                    FUNC_0 ( VAR_2, VAR_11 );
                }
            }
            else if ( FUNC_12 ( VAR_12, "host" ) == 0 ) {





                while ( ( VAR_11 = FUNC_21 ( ((void*)0), VAR_0, &VAR_10 ) ) ) {

                    const char *const VAR_18 = "*?";
                    if ( *VAR_11 == '!' || FUNC_20 ( VAR_11, VAR_18 ) ) {
                        continue;
                    }


                    if ( *VAR_11 == '#' ) {
                        break;
                    }




                    int VAR_19 = 0;
                    for ( unsigned int VAR_20 = 0; VAR_20 < VAR_6; VAR_20++ ) {
                        if ( !FUNC_4 ( VAR_11, ( *VAR_4 )[VAR_20].hostname ) ) {
                            VAR_19 = 1;
                            break;
                        }
                    }

                    if ( VAR_19 ) {
                        continue;
                    }


                    ( *VAR_4 ) = FUNC_11 ( ( *VAR_4 ), ( ( *VAR_5 ) + 2 ) * sizeof ( SshEntry ) );
                    ( *VAR_4 )[( *VAR_5 )].hostname = FUNC_13 ( VAR_11 );
                    ( *VAR_4 )[( *VAR_5 )].port = 0;
                    ( *VAR_4 )[( *VAR_5 ) + 1].hostname = ((void*)0);
                    ( *VAR_5 )++;
                }
            }
            FUNC_8 ( VAR_12 );
        }
        if ( VAR_8 != ((void*)0) ) {
            FUNC_3 ( VAR_8 );
        }

        if ( FUNC_1 ( VAR_7 ) != 0 ) {
            FUNC_15 ( "Failed to close ssh configuration file: '%s'", FUNC_14 ( VAR_1 ) );
        }
    }
}

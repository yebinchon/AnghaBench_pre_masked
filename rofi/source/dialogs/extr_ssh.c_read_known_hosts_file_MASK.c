
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int gint64 ;
typedef char gchar ;
struct TYPE_6__ {int port; int * hostname; } ;
typedef TYPE_1__ SshEntry ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (char*,char**,int) ;
 int FUNC_5 (char*,char const*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*,unsigned int) ;
 int * FUNC_7 (char*) ;
 char* FUNC_8 (scalar_t__) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char**,size_t*,int *) ;
 char* FUNC_12 (char*,char) ;
 char* FUNC_13 (char**,char*) ;
 char* FUNC_14 (char*,char*) ;

__attribute__((used)) static SshEntry *FUNC_15 ( const char *VAR_1, SshEntry * VAR_2, unsigned int *VAR_3 )
{
    FILE *VAR_4 = FUNC_1 ( VAR_1, "r" );
    if ( VAR_4 != ((void*)0) ) {
        char *VAR_5 = ((void*)0);
        size_t VAR_6 = 0;

        while ( FUNC_11 ( &VAR_5, &VAR_6, VAR_4 ) > 0 ) {

            char *VAR_7 = FUNC_9(&(VAR_5[0]));

            if ( *VAR_7 == '#' || *VAR_7 == '@' ){

                continue;
            }
            if ( *VAR_7 == '|' ) {

                continue;
            }

            char *VAR_8 = FUNC_14 ( VAR_7, " " );
            if ( VAR_8 == ((void*)0) ) {

                continue;
            }
            *VAR_8 = '\0';
            char *VAR_9 = VAR_7;
            VAR_7 = FUNC_13(&VAR_9,", " );
            while ( VAR_7 )
            {
                int VAR_10 = 0;
                if ( VAR_7[0] == '[' ) {
                    VAR_7++;
                    char *VAR_11 = FUNC_12 ( VAR_7, ']');
                    if ( VAR_11[1] == ':' ){
                        *VAR_11 = '\0';
                        VAR_0 = 0;
                        gchar *VAR_12 = ((void*)0);
                        gint64 VAR_13 = FUNC_4 ( &(VAR_11[2]), &VAR_12, 10);
                        if ( VAR_0 != 0 ) {
                            FUNC_10 ( "Failed to parse port number: %s.", &(VAR_11[2]) );
                        } else if ( VAR_12 == &(VAR_11[2])) {
                            FUNC_10 ( "Failed to parse port number: %s, invalid number.", &(VAR_11[2]) );
                        } else if ( VAR_13 < 0 || VAR_13 > 65535 ) {
                            FUNC_10 ( "Failed to parse port number: %s, out of range.", &(VAR_11[2]) );
                        } else {
                            VAR_10 = VAR_13;
                        }
                    }
                }


                int VAR_14 = 0;
                for ( unsigned int VAR_15 = 0; VAR_15 < ( *VAR_3 ); VAR_15++ ) {
                    if ( !FUNC_3 ( VAR_7, VAR_2[VAR_15].hostname ) ) {
                        VAR_14 = 1;
                        break;
                    }
                }

                if ( !VAR_14 ) {

                    VAR_2 = FUNC_6 ( VAR_2, ( ( *VAR_3 ) + 2 ) * sizeof ( SshEntry ) );
                    VAR_2[( *VAR_3 )].hostname = FUNC_7 ( VAR_7 );
                    VAR_2[( *VAR_3 )].port = VAR_10;
                    VAR_2[( *VAR_3 ) + 1].hostname = ((void*)0);
                    VAR_2[( *VAR_3 ) + 1].port = 0;
                    ( *VAR_3 )++;
                }
                VAR_7 = FUNC_13(&VAR_9,", " );
            }
        }
        if ( VAR_5 != ((void*)0) ) {
            FUNC_2 ( VAR_5 );
        }
        if ( FUNC_0 ( VAR_4 ) != 0 ) {
            FUNC_10 ( "Failed to close hosts file: '%s'", FUNC_8 ( VAR_0 ) );
        }
    } else {
        FUNC_5 ( "Failed to open KnownHostFile: '%s'", VAR_1 );
    }

    return VAR_2;
}

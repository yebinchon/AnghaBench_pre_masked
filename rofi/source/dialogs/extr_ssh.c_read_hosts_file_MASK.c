
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * hostname; scalar_t__ port; } ;
typedef TYPE_1__ SshEntry ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int *) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,unsigned int) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (char**,size_t*,int *) ;

__attribute__((used)) static SshEntry *FUNC_9 ( SshEntry * VAR_1, unsigned int *VAR_2 )
{

    FILE *VAR_3 = FUNC_1 ( "/etc/hosts", "r" );
    if ( VAR_3 != ((void*)0) ) {
        char *VAR_4 = ((void*)0);
        size_t VAR_5 = 0;

        while ( FUNC_8 ( &VAR_4, &VAR_5, VAR_3 ) > 0 ) {

            unsigned int VAR_6 = 0, VAR_7 = 0;
            char *VAR_8 = VAR_4;


            do {
                char VAR_9 = VAR_4[VAR_6];

                if ( VAR_9 == ' ' || VAR_9 == '\t' || VAR_9 == '\n' || VAR_9 == '\0' || VAR_9 == '#' ) {
                    VAR_4[VAR_6] = '\0';

                    if ( VAR_8[0] != '\0' ) {
                        VAR_7++;

                        if ( VAR_7 > 1 ) {


                            int VAR_10 = 0;
                            for ( unsigned int VAR_11 = 0; VAR_11 < ( *VAR_2 ); VAR_11++ ) {
                                if ( !FUNC_3 ( VAR_8, VAR_1[VAR_11].hostname ) ) {
                                    VAR_10 = 1;
                                    break;
                                }
                            }

                            if ( !VAR_10 ) {

                                VAR_1 = FUNC_4 ( VAR_1,
                                                   ( ( *VAR_2 ) + 2 ) * sizeof ( SshEntry ) );
                                VAR_1[( *VAR_2 )].hostname = FUNC_5 ( VAR_8 );
                                VAR_1[( *VAR_2 )].port = 0;
                                VAR_1[( *VAR_2 ) + 1].hostname = ((void*)0);
                                ( *VAR_2 )++;
                            }
                        }
                    }

                    VAR_8 = &VAR_4[VAR_6 + 1];

                    if ( VAR_9 == '#' ) {
                        break;
                    }
                }

                VAR_6++;
            } while ( VAR_4[VAR_6] != '\0' && VAR_4[VAR_6] != '#' );
        }
        if ( VAR_4 != ((void*)0) ) {
            FUNC_2 ( VAR_4 );
        }
        if ( FUNC_0 ( VAR_3 ) != 0 ) {
            FUNC_7 ( "Failed to close hosts file: '%s'", FUNC_6 ( VAR_0 ) );
        }
    }

    return VAR_1;
}

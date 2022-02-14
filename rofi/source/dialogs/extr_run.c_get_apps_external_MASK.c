
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int run_list_command; } ;
typedef int FILE ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 char** FUNC_4 (char**,unsigned int) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (char**,size_t*,int *) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static char ** FUNC_11 ( char **VAR_2, unsigned int *VAR_3, unsigned int VAR_4 )
{
    int VAR_5 = FUNC_0 ( VAR_0.run_list_command );
    if ( VAR_5 >= 0 ) {
        FILE *VAR_6 = FUNC_2 ( VAR_5, "r" );
        if ( VAR_6 ) {
            char *VAR_7 = ((void*)0);
            size_t VAR_8 = 0;

            while ( FUNC_8 ( &VAR_7, &VAR_8, VAR_6 ) > 0 ) {
                int VAR_9 = 0;

                if ( VAR_7[FUNC_10 ( VAR_7 ) - 1] == '\n' ) {
                    VAR_7[FUNC_10 ( VAR_7 ) - 1] = '\0';
                }



                for ( unsigned int VAR_10 = 0; VAR_9 == 0 && VAR_10 < VAR_4; VAR_10++ ) {
                    if ( FUNC_9 ( VAR_7, VAR_2[VAR_10] ) == 0 ) {
                        VAR_9 = 1;
                    }
                }

                if ( VAR_9 == 1 ) {
                    continue;
                }


                VAR_2 = FUNC_4 ( VAR_2, ( ( *VAR_3 ) + 2 ) * sizeof ( char* ) );
                VAR_2[( *VAR_3 )] = FUNC_5 ( VAR_7 );

                ( *VAR_3 )++;
            }
            if ( VAR_7 != ((void*)0) ) {
                FUNC_3 ( VAR_7 );
            }
            if ( FUNC_1 ( VAR_6 ) != 0 ) {
                FUNC_7 ( "Failed to close stdout off executor script: '%s'",
                            FUNC_6 ( VAR_1 ) );
            }
        }
    }
    VAR_2[( *VAR_3 ) ] = ((void*)0);
    return VAR_2;
}

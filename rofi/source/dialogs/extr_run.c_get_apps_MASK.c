
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dirent {scalar_t__ d_type; char* d_name; } ;
typedef int gsize ;
typedef char gchar ;
typedef scalar_t__ gboolean ;
struct TYPE_7__ {char* run_list_command; } ;
struct TYPE_6__ {char* message; } ;
typedef TYPE_1__ GError ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (char*) ;
 char const* VAR_5 ;
 int FUNC_1 (int *) ;
 TYPE_5__ VAR_6 ;
 char* FUNC_2 (char const*,char*,int *) ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,int ) ;
 char* FUNC_6 (char*,int,int *,int *,TYPE_1__**) ;
 int FUNC_7 (char*) ;
 char const* FUNC_8 () ;
 int * FUNC_9 (char*) ;
 char* FUNC_10 (char const*,int,int *,int *,TYPE_1__**) ;
 int FUNC_11 (char**,unsigned int,int,int ,int *) ;
 char** FUNC_12 (char**,unsigned int) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 char* FUNC_15 (int *) ;
 char** FUNC_16 (char**,unsigned int*,unsigned int) ;
 char** FUNC_17 (char*,unsigned int*) ;
 int * FUNC_18 (char*) ;
 struct dirent* FUNC_19 (int *) ;
 char* FUNC_20 (char const*) ;
 int VAR_7 ;
 char* FUNC_21 (char*,char const* const,char**) ;

__attribute__((used)) static char ** FUNC_22 ( unsigned int *VAR_8 )
{
    GError *VAR_9 = ((void*)0);
    char **VAR_10 = ((void*)0);
    unsigned int VAR_11 = 0;
    char *VAR_12;

    if ( FUNC_9 ( "PATH" ) == ((void*)0) ) {
        return ((void*)0);
    }
    FUNC_0 ( "start" );
    VAR_12 = FUNC_2 ( VAR_5, VAR_4, ((void*)0) );
    VAR_10 = FUNC_17 ( VAR_12, VAR_8 );
    FUNC_7 ( VAR_12 );

    VAR_11 = ( *VAR_8 );

    VAR_12 = FUNC_15 ( FUNC_9 ( "PATH" ) );

    gsize VAR_13 = 0;
    gchar *VAR_14 = FUNC_10 ( FUNC_8 (), -1, ((void*)0), &VAR_13, &VAR_9 );
    if ( VAR_9 != ((void*)0) ) {
        FUNC_4 ( "Failed to convert homedir to UTF-8: %s", VAR_9->message );
        FUNC_3 ( &VAR_9 );
        FUNC_7 ( VAR_14 );
        return ((void*)0);
    }

    const char *const VAR_15 = ":";
    char *VAR_16 = ((void*)0);
    for ( const char *VAR_17 = FUNC_21 ( VAR_12, VAR_15, &VAR_16 ); VAR_17 != ((void*)0); VAR_17 = FUNC_21 ( ((void*)0), VAR_15, &VAR_16 ) ) {
        char *VAR_18 = FUNC_20 ( VAR_17 );
        DIR *VAR_19 = FUNC_18 ( VAR_18 );
        FUNC_4 ( "Checking path %s for executable.", VAR_18 );
        FUNC_7 ( VAR_18 );

        if ( VAR_19 != ((void*)0) ) {
            struct dirent *VAR_20;
            gsize VAR_21 = 0;
            gchar *VAR_22 = FUNC_10 ( VAR_17, -1, ((void*)0), &VAR_21, &VAR_9 );
            if ( VAR_9 != ((void*)0) ) {
                FUNC_4 ( "Failed to convert directory name to UTF-8: %s", VAR_9->message );
                FUNC_3 ( &VAR_9 );
                FUNC_1 ( VAR_19 );
                continue;
            }
            gboolean VAR_23 = FUNC_13 ( VAR_22, VAR_14 );
            FUNC_7 ( VAR_22 );

            while ( ( VAR_20 = FUNC_19 ( VAR_19 ) ) != ((void*)0) ) {
                if ( VAR_20->d_type != VAR_1 && VAR_20->d_type != VAR_0 && VAR_20->d_type != VAR_2 ) {
                    continue;
                }

                if ( VAR_20->d_name[0] == '.' ) {
                    continue;
                }
                if ( VAR_23 ) {
                    gchar *VAR_24 = FUNC_2 ( VAR_17, VAR_20->d_name, ((void*)0) );
                    gboolean VAR_25 = FUNC_5 ( VAR_24, VAR_3 );
                    FUNC_7 ( VAR_24 );
                    if ( !VAR_25 ) {
                        continue;
                    }
                }

                gsize VAR_26;
                gchar *VAR_27 = FUNC_6 ( VAR_20->d_name, -1, ((void*)0), &VAR_26, &VAR_9 );
                if ( VAR_9 != ((void*)0) ) {
                    FUNC_4 ( "Failed to convert filename to UTF-8: %s", VAR_9->message );
                    FUNC_3 ( &VAR_9 );
                    FUNC_7 ( VAR_27 );
                    continue;
                }


                int VAR_28 = 0;
                for ( unsigned int VAR_29 = 0; VAR_28 == 0 && VAR_29 < VAR_11; VAR_29++ ) {
                    if ( FUNC_14 ( VAR_27, VAR_10[VAR_29] ) == 0 ) {
                        VAR_28 = 1;
                    }
                }

                if ( VAR_28 == 1 ) {
                    FUNC_7 ( VAR_27 );
                    continue;
                }

                VAR_10 = FUNC_12 ( VAR_10, ( ( *VAR_8 ) + 2 ) * sizeof ( char* ) );
                VAR_10[( *VAR_8 )] = VAR_27;
                VAR_10[( *VAR_8 ) + 1] = ((void*)0);
                ( *VAR_8 )++;
            }

            FUNC_1 ( VAR_19 );
        }
    }
    FUNC_7 ( VAR_14 );


    if ( VAR_6.run_list_command != ((void*)0) && VAR_6.run_list_command[0] != '\0' ) {
        VAR_10 = FUNC_16 ( VAR_10, VAR_8, VAR_11 );
    }

    if ( ( *VAR_8 ) == 0 ) {
        return VAR_10;
    }

    if ( ( *VAR_8 ) > VAR_11 ) {
        FUNC_11 ( &VAR_10[VAR_11], ( *VAR_8 ) - VAR_11, sizeof ( char* ), VAR_7, ((void*)0) );
    }
    FUNC_7 ( VAR_12 );

    unsigned int VAR_30 = 0;
    for ( unsigned int VAR_31 = VAR_11; VAR_31 < ( ( *VAR_8 ) - 1 ); VAR_31++ ) {
        if ( FUNC_14 ( VAR_10[VAR_31], VAR_10[VAR_31 + 1] ) == 0 ) {
            FUNC_7 ( VAR_10[VAR_31] );
            VAR_10[VAR_31] = ((void*)0);
            VAR_30++;
        }
    }

    if ( ( *VAR_8 ) > VAR_11 ) {
        FUNC_11 ( &VAR_10[VAR_11], ( *VAR_8 ) - VAR_11, sizeof ( char* ),
                            VAR_7,
                            ((void*)0) );
    }

    ( *VAR_8 ) -= VAR_30;

    FUNC_0 ( "stop" );
    return VAR_10;
}

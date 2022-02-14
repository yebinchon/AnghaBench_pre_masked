
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * gpointer ;
typedef int gboolean ;
struct TYPE_4__ {int message; } ;
typedef int RofiHelperExecuteContext ;
typedef int * GSpawnChildSetupFunc ;
typedef TYPE_1__ GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int **,int **) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,char**,int *,int ,int *,int *,int *,TYPE_1__**) ;
 char* FUNC_4 (char*,char const*,char const*,int ) ;
 int FUNC_5 (char**) ;
 int FUNC_6 (char*,int ) ;

gboolean FUNC_7 ( const char *VAR_3, char **VAR_4, const char *VAR_5, const char *VAR_6, RofiHelperExecuteContext *VAR_7 )
{
    gboolean VAR_8 = VAR_2;
    GError *VAR_9 = ((void*)0);

    GSpawnChildSetupFunc VAR_10 = ((void*)0);
    gpointer VAR_11 = ((void*)0);

    FUNC_0 ( VAR_7, &VAR_10, &VAR_11 );

    FUNC_3 ( VAR_3, VAR_4, ((void*)0), VAR_1, VAR_10, VAR_11, ((void*)0), &VAR_9 );
    if ( VAR_9 != ((void*)0) ) {
        char *VAR_12 = FUNC_4 ( "Failed to execute: '%s%s'\nError: '%s'", VAR_5, VAR_6, VAR_9->message );
        FUNC_6 ( VAR_12, VAR_0 );
        FUNC_2 ( VAR_12 );

        FUNC_1 ( VAR_9 );
        VAR_8 = VAR_0;
    }


    FUNC_5 ( VAR_4 );
    return VAR_8;
}

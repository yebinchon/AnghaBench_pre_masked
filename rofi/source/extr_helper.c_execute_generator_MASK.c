
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int run_command; } ;
struct TYPE_5__ {int message; } ;
typedef TYPE_1__ GError ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char**,int *,int ,int *,int *,int *,int *,int*,int *,TYPE_1__**) ;
 char* FUNC_3 (char*,char const*,int ) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (int ,char***,int*,char*,char const*,char*) ;
 int FUNC_6 (char*,int ) ;

int FUNC_7 ( const char * VAR_3 )
{
    char **VAR_4 = ((void*)0);
    int VAR_5 = 0;
    FUNC_5 ( VAR_2.run_command, &VAR_4, &VAR_5, "{cmd}", VAR_3, (char *) 0 );

    int VAR_6 = -1;
    GError *VAR_7 = ((void*)0);
    FUNC_2 ( ((void*)0), VAR_4, ((void*)0), VAR_1, ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_6, ((void*)0), &VAR_7 );

    if ( VAR_7 != ((void*)0) ) {
        char *VAR_8 = FUNC_3 ( "Failed to execute: '%s'\nError: '%s'", VAR_3, VAR_7->message );
        FUNC_6 ( VAR_8, VAR_0 );
        FUNC_1 ( VAR_8 );

        FUNC_0 ( VAR_7 );
        VAR_6 = -1;
    }
    FUNC_4 ( VAR_4 );
    return VAR_6;
}

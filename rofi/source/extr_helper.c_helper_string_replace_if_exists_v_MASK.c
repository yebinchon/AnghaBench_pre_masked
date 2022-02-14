
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int message; } ;
typedef int GRegex ;
typedef int GHashTable ;
typedef TYPE_1__ GError ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,int ,int ,TYPE_1__**) ;
 char* FUNC_3 (int *,char*,int,int ,int ,int ,int *,TYPE_1__**) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (char*,char*,int ) ;
 int VAR_1 ;
 int FUNC_6 (char*,int ) ;

char *FUNC_7 ( char * VAR_2, GHashTable *VAR_3 )
{
    GError *VAR_4 = ((void*)0);
    char *VAR_5 = ((void*)0);


    GRegex *VAR_6 = FUNC_2 ( "\\[(.*)({[-\\w]+})(.*)\\]|({[\\w-]+})", 0, 0, &VAR_4 );
    if ( VAR_4 == ((void*)0) ){
        VAR_5 = FUNC_3 ( VAR_6, VAR_2, -1, 0, 0, VAR_1, VAR_3, &VAR_4 );
    }

    FUNC_4 ( VAR_6 );

    if ( VAR_4 != ((void*)0) ) {
        char *VAR_7 = FUNC_5 ( "Failed to parse: '%s'\nError: '%s'", VAR_2, VAR_4->message );
        FUNC_6 ( VAR_7, VAR_0 );
        FUNC_1 ( VAR_7 );

        FUNC_0 ( VAR_4 );
        FUNC_1 ( VAR_5 );
        return ((void*)0);
    }
    return VAR_5;
}

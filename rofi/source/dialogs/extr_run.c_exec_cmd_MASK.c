
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int gsize ;
typedef char gchar ;
struct TYPE_7__ {int message; } ;
struct TYPE_6__ {int * name; } ;
typedef TYPE_1__ RofiHelperExecuteContext ;
typedef TYPE_2__ GError ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int,int *,int *,TYPE_2__**) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int *,char*,int,TYPE_1__*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*) ;

__attribute__((used)) static void FUNC_8 ( const char *VAR_2, int VAR_3 )
{
    GError *VAR_4 = ((void*)0);
    if ( !VAR_2 || !VAR_2[0] ) {
        return;
    }
    gsize VAR_5 = 0;
    gchar *VAR_6 = FUNC_3 ( VAR_2, -1, ((void*)0), &VAR_5, &VAR_4 );
    if ( VAR_4 != ((void*)0) ) {
        FUNC_4 ( "Failed to convert command to locale encoding: %s", VAR_4->message );
        FUNC_1 ( VAR_4 );
        return;
    }

    char *VAR_7 = FUNC_0 ( VAR_1, VAR_0, ((void*)0) );
    RofiHelperExecuteContext VAR_8 = { .name = ((void*)0) };

    if ( FUNC_5 ( ((void*)0), VAR_6, VAR_3, VAR_3 ? &VAR_8 : ((void*)0) ) ) {





        FUNC_7 ( VAR_7, VAR_2 );
    }
    else {
        FUNC_6 ( VAR_7, VAR_2 );
    }
    FUNC_2 ( VAR_7 );
    FUNC_2 ( VAR_6 );
}

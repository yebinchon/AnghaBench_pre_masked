
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* gpointer ;
struct TYPE_4__ {int http_server_states; } ;
typedef TYPE_1__ SeafSyncManager ;
typedef int HttpServerState ;
typedef int GList ;
typedef int GHashTableIter ;


 int FUNC_0 (TYPE_1__*,char*,int *,int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,void**,void**) ;

__attribute__((used)) static void
FUNC_3 (SeafSyncManager *VAR_0, GList *VAR_1)
{
    GHashTableIter VAR_2;
    gpointer VAR_3, VAR_4;
    char *VAR_5;
    HttpServerState *VAR_6;

    FUNC_1 (&VAR_2, VAR_0->http_server_states);
    while (FUNC_2 (&VAR_2, &VAR_3, &VAR_4)) {
        VAR_5 = VAR_3;
        VAR_6 = VAR_4;
        FUNC_0 (VAR_0, VAR_5, VAR_6, VAR_1);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* gpointer ;
typedef scalar_t__ gint64 ;
struct TYPE_4__ {int http_tx_mgr; int repo_mgr; } ;
struct TYPE_3__ {int http_version; int head_commit_map_lock; scalar_t__ last_update_head_commit_map_time; scalar_t__ head_commit_map_init; int * head_commit_map; int use_fileserver_port; int effective_host; } ;
typedef TYPE_1__ HttpServerState ;
typedef int GList ;
typedef int GHashTable ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* VAR_2 ;
 int FUNC_5 (char*,char*) ;
 int * FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8 (gpointer VAR_3, gpointer VAR_4, gpointer VAR_5)
{
    char *VAR_6 = VAR_3;
    HttpServerState *VAR_7 = VAR_4;





    if (VAR_7->http_version >= 2) {
        FUNC_5 ("Updating repo head commit ids for server %s.\n", VAR_6);
        GList *VAR_8 = FUNC_6 (VAR_2->repo_mgr,
                                                                            VAR_6);
        if (!VAR_8) {
            return;
        }

        GHashTable *VAR_9 = FUNC_2 (VAR_2->http_tx_mgr,
                                                                   VAR_7->effective_host,
                                                                   VAR_7->use_fileserver_port,
                                                                   VAR_8);
        if (VAR_9) {
            FUNC_3 (&VAR_7->head_commit_map_lock);
            FUNC_0 (VAR_7->head_commit_map);
            VAR_7->head_commit_map = VAR_9;
            if (!VAR_7->head_commit_map_init)
                VAR_7->head_commit_map_init = VAR_0;
            VAR_7->last_update_head_commit_map_time = (gint64)FUNC_7(((void*)0));
            FUNC_4 (&VAR_7->head_commit_map_lock);
        }

        FUNC_1 (VAR_8, VAR_1);
    }
}

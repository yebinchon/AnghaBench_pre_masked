
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int synced_tree; int syncing_tree; int paths; } ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int paths_lock; int active_paths; } ;
typedef TYPE_2__ SeafSyncManager ;
typedef TYPE_3__ ActivePathsInfo ;


 TYPE_3__* FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char const*) ;

void
FUNC_6 (SeafSyncManager *VAR_0,
                                      const char *VAR_1,
                                      const char *VAR_2)
{
    ActivePathsInfo *VAR_3;

    if (!VAR_1 || !VAR_2) {
        FUNC_4 ("BUG: empty repo_id or path.\n");
        return;
    }

    FUNC_2 (&VAR_0->priv->paths_lock);

    VAR_3 = FUNC_0 (VAR_0->priv->active_paths, VAR_1);
    if (!VAR_3) {
        FUNC_3 (&VAR_0->priv->paths_lock);
        return;
    }

    FUNC_1 (VAR_3->paths, VAR_2);
    FUNC_5 (VAR_3->syncing_tree, VAR_2);
    FUNC_5 (VAR_3->synced_tree, VAR_2);

    FUNC_3 (&VAR_0->priv->paths_lock);
}

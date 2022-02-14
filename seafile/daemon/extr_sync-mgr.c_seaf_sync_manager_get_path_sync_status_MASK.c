
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ gboolean ;
struct TYPE_15__ {int filelock_mgr; int repo_mgr; } ;
struct TYPE_14__ {int synced_tree; int syncing_tree; int paths; } ;
struct TYPE_13__ {TYPE_1__* priv; } ;
struct TYPE_12__ {scalar_t__ in_error; } ;
struct TYPE_11__ {int paths_lock; int active_paths; } ;
typedef size_t SyncStatus ;
typedef TYPE_2__ SyncInfo ;
typedef TYPE_3__ SeafSyncManager ;
typedef TYPE_4__ ActivePathsInfo ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 TYPE_4__* FUNC_0 (int ,char const*) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (TYPE_3__*,char const*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,char const*) ;
 int * VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_6__* VAR_7 ;
 scalar_t__ FUNC_6 (int ,char const*,char const*) ;
 scalar_t__ FUNC_7 (int ,char const*,char const*) ;
 int FUNC_8 (int ,char const*,char const*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int ,char const*) ;

char *
FUNC_11 (SeafSyncManager *VAR_8,
                                        const char *VAR_9,
                                        const char *VAR_10,
                                        gboolean VAR_11)
{
    ActivePathsInfo *VAR_12;
    SyncInfo *VAR_13;
    SyncStatus VAR_14 = VAR_2;

    if (!VAR_9 || !VAR_10) {
        FUNC_9 ("BUG: empty repo_id or path.\n");
        return ((void*)0);
    }

    if (VAR_10[0] == 0) {
        return FUNC_2 (VAR_8, VAR_9);
    }


    VAR_13 = FUNC_3 (VAR_8, VAR_9);
    if (VAR_13 && VAR_13->in_error) {
        VAR_14 = VAR_2;
        goto out;
    }

    FUNC_4 (&VAR_8->priv->paths_lock);

    VAR_12 = FUNC_0 (VAR_8->priv->active_paths, VAR_9);
    if (!VAR_12) {
        FUNC_5 (&VAR_8->priv->paths_lock);
        VAR_14 = VAR_2;
        goto out;
    }

    VAR_14 = (SyncStatus) FUNC_0 (VAR_12->paths, VAR_10);
    if (VAR_11 && (VAR_14 == VAR_2)) {




        if (FUNC_10 (VAR_12->syncing_tree, VAR_10))
            VAR_14 = VAR_5;
        else if (FUNC_10 (VAR_12->synced_tree, VAR_10))
            VAR_14 = VAR_4;
    }

    FUNC_5 (&VAR_8->priv->paths_lock);

    if (VAR_14 == VAR_4) {
        if (!FUNC_8(VAR_7->repo_mgr, VAR_9, VAR_10))
            VAR_14 = VAR_3;
        else if (FUNC_7 (VAR_7->filelock_mgr,
                                                             VAR_9, VAR_10))
            VAR_14 = VAR_1;
        else if (FUNC_6 (VAR_7->filelock_mgr,
                                                       VAR_9, VAR_10))
            VAR_14 = VAR_0;
    }

out:
    return FUNC_1(VAR_6[VAR_14]);
}

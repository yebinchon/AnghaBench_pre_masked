
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* gpointer ;
struct TYPE_12__ {int wt_monitor; } ;
struct TYPE_11__ {TYPE_1__* priv; } ;
struct TYPE_10__ {scalar_t__ sync_interval; int id; int worktree; int worktree_invalid; scalar_t__ auto_sync; } ;
struct TYPE_9__ {int repo_hash; } ;
typedef TYPE_3__ SeafRepoManager ;
typedef TYPE_2__ SeafRepo ;
typedef int GHashTableIter ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__**,TYPE_2__**) ;
 TYPE_6__* VAR_0 ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4 (SeafRepoManager *VAR_1)
{
    GHashTableIter VAR_2;
    SeafRepo *VAR_3;
    gpointer VAR_4, VAR_5;

    FUNC_0 (&VAR_2, VAR_1->priv->repo_hash);
    while (FUNC_1 (&VAR_2, &VAR_4, &VAR_5)) {
        VAR_3 = VAR_5;
        if (VAR_3->auto_sync && !VAR_3->worktree_invalid && (VAR_3->sync_interval == 0)) {
            if (FUNC_3 (VAR_0->wt_monitor, VAR_3->id, VAR_3->worktree) < 0) {
                FUNC_2 ("failed to watch repo %s.\n", VAR_3->id);



            }
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int wt_monitor; } ;
struct TYPE_4__ {scalar_t__ sync_interval; int id; scalar_t__ auto_sync; scalar_t__ worktree_invalid; } ;
typedef int SeafRepoManager ;
typedef TYPE_1__ SeafRepo ;


 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

void
FUNC_2 (SeafRepoManager *VAR_2,
                                            SeafRepo *VAR_3)
{
    if (VAR_3->worktree_invalid)
        return;

    VAR_3->worktree_invalid = VAR_0;

    if (VAR_3->auto_sync && (VAR_3->sync_interval == 0)) {
        if (FUNC_1 (VAR_1->wt_monitor, VAR_3->id) < 0) {
            FUNC_0 ("failed to unwatch repo %s.\n", VAR_3->id);
        }
    }
}

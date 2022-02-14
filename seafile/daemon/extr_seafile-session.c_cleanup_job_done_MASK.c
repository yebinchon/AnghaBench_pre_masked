
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int started; int filelock_mgr; int clone_mgr; int repo_mgr; int wt_monitor; int sync_mgr; int http_tx_mgr; int ev_mgr; } ;
typedef TYPE_1__ SeafileSession ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8 (void *VAR_1)
{
    SeafileSession *VAR_2 = VAR_1;

    if (FUNC_0 (VAR_2->ev_mgr) < 0) {
        FUNC_1 ("Failed to start event manager.\n");
        return;
    }

    if (FUNC_2 (VAR_2->http_tx_mgr) < 0) {
        FUNC_1 ("Failed to start http transfer manager.\n");
        return;
    }

    if (FUNC_6 (VAR_2->sync_mgr) < 0) {
        FUNC_1 ("Failed to start sync manager.\n");
        return;
    }

    if (FUNC_7 (VAR_2->wt_monitor) < 0) {
        FUNC_1 ("Failed to start worktree monitor.\n");
        return;
    }


    if (FUNC_5 (VAR_2->repo_mgr) < 0) {
        FUNC_1 ("Failed to start repo manager.\n");
        return;
    }

    if (FUNC_3 (VAR_2->clone_mgr) < 0) {
        FUNC_1 ("Failed to start clone manager.\n");
        return;
    }

    if (FUNC_4 (VAR_2->filelock_mgr) < 0) {
        FUNC_1 ("Failed to start filelock manager.\n");
        return;
    }


    VAR_2->started = VAR_0;
}

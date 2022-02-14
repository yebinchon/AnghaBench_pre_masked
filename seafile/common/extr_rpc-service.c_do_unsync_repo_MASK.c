
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int repo_mgr; int sync_mgr; int wt_monitor; int started; } ;
struct TYPE_9__ {scalar_t__ sync_interval; int worktree; int id; scalar_t__ auto_sync; } ;
struct TYPE_8__ {scalar_t__ in_sync; } ;
typedef TYPE_1__ SyncInfo ;
typedef TYPE_2__ SeafRepo ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 TYPE_6__* VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static
int FUNC_8(SeafRepo *VAR_1)
{
    if (!VAR_0->started) {
        FUNC_2 ("System not started, skip removing repo.\n");
        return -1;
    }

    if (VAR_1->auto_sync && (VAR_1->sync_interval == 0))
        FUNC_7 (VAR_0->wt_monitor, VAR_1->id);

    FUNC_5 (VAR_0->sync_mgr, VAR_1->id);

    SyncInfo *VAR_2 = FUNC_6 (VAR_0->sync_mgr, VAR_1->id);





    char *VAR_3 = FUNC_1 (VAR_1->worktree);
    if (VAR_2 != ((void*)0) && VAR_2->in_sync) {
        FUNC_4 (VAR_0->repo_mgr, VAR_1);
    } else {
        FUNC_3 (VAR_0->repo_mgr, VAR_1);
    }

    FUNC_0 (VAR_3);

    return 0;
}

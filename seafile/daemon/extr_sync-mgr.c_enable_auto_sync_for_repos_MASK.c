
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int wt_monitor; int repo_mgr; } ;
struct TYPE_7__ {TYPE_1__* data; struct TYPE_7__* next; } ;
struct TYPE_6__ {scalar_t__ sync_interval; int worktree; int id; } ;
typedef int SeafSyncManager ;
typedef TYPE_1__ SeafRepo ;
typedef TYPE_2__ GList ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_4__* VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3 (SeafSyncManager *VAR_1)
{
    GList *VAR_2;
    GList *VAR_3;
    SeafRepo *VAR_4;

    VAR_2 = FUNC_1 (VAR_0->repo_mgr, -1, -1);
    for (VAR_3 = VAR_2; VAR_3; VAR_3 = VAR_3->next) {
        VAR_4 = VAR_3->data;
        if (VAR_4->sync_interval == 0)
            FUNC_2 (VAR_0->wt_monitor, VAR_4->id, VAR_4->worktree);
    }

    FUNC_0 (VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_16__ {scalar_t__ server_url; scalar_t__ sync_wt_name; scalar_t__ is_readonly; int passwd; int worktree; } ;
struct TYPE_15__ {scalar_t__ sync_interval; TYPE_1__* head; int id; int name; int worktree; scalar_t__ auto_sync; int server_url; scalar_t__ encrypted; int manager; } ;
struct TYPE_14__ {char* commit_id; } ;
struct TYPE_13__ {int repo_mgr; int wt_monitor; int branch_mgr; } ;
typedef TYPE_2__ SeafRepo ;
typedef int SeafBranch ;
typedef TYPE_3__ CloneTask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_10__* VAR_6 ;
 int * FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*,int ) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*,int ,...) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_12 (SeafRepo *VAR_7, CloneTask *VAR_8)
{
    SeafBranch *VAR_9 = ((void*)0);

    FUNC_5 (VAR_7->manager,
                                         VAR_7,
                                         VAR_8->worktree);

    VAR_9 = FUNC_1 (VAR_6->branch_mgr, VAR_7->id, "local");
    if (!VAR_9) {
        FUNC_8 ("Cannot get branch local for repo %s(%.10s).\n",
                      VAR_7->name, VAR_7->id);
        FUNC_11 (VAR_8, VAR_5);
        return;
    }

    FUNC_6 (VAR_7, VAR_9);
    FUNC_2 (VAR_9);

    if (VAR_7->encrypted) {
        if (FUNC_3 (VAR_6->repo_mgr,
                                               VAR_7,
                                               VAR_8->passwd) < 0) {
            FUNC_8 ("[Clone mgr] failed to set passwd for %s.\n", VAR_7->id);
            FUNC_11 (VAR_8, VAR_4);
            return;
        }
    }

    if (VAR_8->is_readonly) {
        FUNC_7 (VAR_7);
    }

    if (VAR_8->sync_wt_name) {
        FUNC_4 (VAR_6->repo_mgr,
                                             VAR_7->id,
                                             VAR_3,
                                             "true");
    }

    if (VAR_8->server_url)
        VAR_7->server_url = FUNC_0(VAR_8->server_url);

    if (VAR_7->auto_sync && (VAR_7->sync_interval == 0)) {
        if (FUNC_9 (VAR_6->wt_monitor,
                                        VAR_7->id, VAR_7->worktree) < 0) {
            FUNC_8 ("failed to watch repo %s(%.10s).\n", VAR_7->name, VAR_7->id);
            FUNC_11 (VAR_8, VAR_4);
            return;
        }
    }




    FUNC_4 (VAR_6->repo_mgr,
                                         VAR_7->id,
                                         VAR_2,
                                         VAR_7->head->commit_id);
    FUNC_4 (VAR_6->repo_mgr,
                                         VAR_7->id,
                                         VAR_1,
                                         VAR_7->head->commit_id);

    FUNC_10 (VAR_8, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int gpointer ;
struct TYPE_10__ {scalar_t__ type; int repo_id; int worktree; } ;
typedef TYPE_1__ WatchCommand ;
struct TYPE_12__ {TYPE_2__* priv; } ;
struct TYPE_11__ {int handle_hash; } ;
typedef TYPE_2__ SeafWTMonitorPriv ;
typedef TYPE_3__ SeafWTMonitor ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void
FUNC_7 (SeafWTMonitor *VAR_3, WatchCommand *VAR_4)
{
    SeafWTMonitorPriv *VAR_5 = VAR_3->priv;

    if (VAR_4->type == VAR_0) {
        if (FUNC_0 (VAR_5->handle_hash, VAR_4->repo_id,
                                          ((void*)0), ((void*)0))) {
            FUNC_4 (VAR_3, 0);
            return;
        }

        if (FUNC_1(VAR_3, VAR_4->repo_id, VAR_4->worktree) < 0) {
            FUNC_6 ("[wt mon] failed to watch worktree of repo %s.\n",
                          VAR_4->repo_id);
            FUNC_4 (VAR_3, -1);
            return;
        }

        FUNC_5 ("[wt mon] add watch for repo %s\n", VAR_4->repo_id);
        FUNC_4 (VAR_3, 0);
    } else if (VAR_4->type == VAR_1) {
        gpointer VAR_6, VAR_7;
        if (!FUNC_0 (VAR_5->handle_hash, VAR_4->repo_id,
                                           &VAR_6, &VAR_7)) {
            FUNC_4 (VAR_3, 0);
            return;
        }

        FUNC_3 (VAR_3, VAR_4->repo_id, VAR_7);
        FUNC_4 (VAR_3, 0);
    } else if (VAR_4->type == VAR_2) {
        if (FUNC_2 (VAR_3, VAR_4->repo_id) < 0) {
            FUNC_6 ("[wt mon] failed to refresh watch of repo %s.\n",
                          VAR_4->repo_id);
            FUNC_4 (VAR_3, -1);
            return;
        }
        FUNC_4 (VAR_3, 0);
    }
}

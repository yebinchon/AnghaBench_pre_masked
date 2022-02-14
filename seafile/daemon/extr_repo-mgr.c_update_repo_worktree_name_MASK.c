
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ gboolean ;
struct TYPE_6__ {int wt_monitor; int repo_mgr; } ;
struct TYPE_5__ {int id; int worktree; } ;
typedef TYPE_1__ SeafRepo ;


 int VAR_0 ;
 char* FUNC_0 (char*,char const*,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_5 (char*,int ,char const*) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*,char*) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,int ,...) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12 (SeafRepo *VAR_2, const char *VAR_3, gboolean VAR_4)
{
    char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    char *VAR_7 = ((void*)0);

    FUNC_5 ("Update worktree folder name of repo %s to %s.\n",
                  VAR_2->id, VAR_3);

    VAR_5 = FUNC_3 (VAR_2->worktree);
    if (FUNC_4 (VAR_5, ".") == 0)
        return;
    VAR_6 = FUNC_2 (VAR_2->worktree);

    VAR_7 = FUNC_0 (VAR_5, VAR_3, ((void*)0));




    if (FUNC_7 (VAR_2->worktree, VAR_7) < 0) {
        FUNC_8 ("Failed to rename worktree from %s to %s: %s.\n",
                      VAR_2->worktree, VAR_7, FUNC_11(VAR_0));
        goto out;
    }

    if (FUNC_6 (VAR_1->repo_mgr, VAR_2, VAR_7) < 0) {
        goto out;
    }

    if (VAR_4) {
        if (FUNC_9 (VAR_1->wt_monitor, VAR_2->id) < 0) {
            FUNC_8 ("Failed to unwatch repo %s old worktree.\n", VAR_2->id);
            goto out;
        }

        if (FUNC_10 (VAR_1->wt_monitor, VAR_2->id, VAR_2->worktree) < 0) {
            FUNC_8 ("Failed to watch repo %s new worktree.\n", VAR_2->id);
        }
    }

out:
    FUNC_1 (VAR_5);
    FUNC_1 (VAR_6);
    FUNC_1 (VAR_7);
}

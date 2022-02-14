
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int id; int name; int * worktree; } ;
struct TYPE_5__ {int st_mode; } ;
typedef TYPE_1__ SeafStat ;
typedef TYPE_2__ SeafRepo ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (char*,int *,int ,...) ;

int
FUNC_4 (SeafRepo *VAR_1)
{
    SeafStat VAR_2;

    if (VAR_1->worktree == ((void*)0)) {
        FUNC_3 ("Worktree for repo '%s'(%.8s) is not set.\n",
                      &VAR_1->name, VAR_1->id);
        return -1;
    }


    if (FUNC_1(VAR_1->worktree, VAR_0) < 0) {
        FUNC_3 ("Failed to access worktree %s for repo '%s'(%.8s)\n",
                      VAR_1->worktree, VAR_1->name, VAR_1->id);
        return -1;
    }
    if (FUNC_2(VAR_1->worktree, &VAR_2) < 0) {
        FUNC_3 ("Failed to stat worktree %s for repo '%s'(%.8s)\n",
                      VAR_1->worktree, VAR_1->name, VAR_1->id);
        return -1;
    }
    if (!FUNC_0(VAR_2.st_mode)) {
        FUNC_3 ("Worktree %s for repo '%s'(%.8s) is not a directory.\n",
                      VAR_1->worktree, VAR_1->name, VAR_1->id);
        return -1;
    }

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int worktree_invalid; scalar_t__ worktree; int id; } ;
typedef int SeafRepoManager ;
typedef TYPE_1__ SeafRepo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int *,int ,char*,scalar_t__) ;

int
FUNC_4 (SeafRepoManager *VAR_2,
                                     SeafRepo *VAR_3,
                                     const char *VAR_4)
{
    if (FUNC_0(VAR_4, VAR_1) != 0)
        return -1;

    if (VAR_3->worktree)
        FUNC_1 (VAR_3->worktree);
    VAR_3->worktree = FUNC_2(VAR_4);

    if (FUNC_3 (VAR_2, VAR_3->id,
                                             "worktree",
                                             VAR_3->worktree) < 0)
        return -1;

    VAR_3->worktree_invalid = VAR_0;

    return 0;
}

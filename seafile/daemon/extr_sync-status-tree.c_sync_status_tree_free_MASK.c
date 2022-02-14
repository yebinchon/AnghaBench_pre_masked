
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SyncStatusTree {struct SyncStatusTree* worktree; int root; } ;


 int FUNC_0 (struct SyncStatusTree*) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (struct SyncStatusTree *VAR_0)
{
    if (!VAR_0)
        return;





    FUNC_1 (VAR_0->root);

    FUNC_0 (VAR_0->worktree);
    FUNC_0 (VAR_0);
}

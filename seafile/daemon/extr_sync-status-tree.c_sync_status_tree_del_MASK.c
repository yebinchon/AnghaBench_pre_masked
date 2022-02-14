
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int guint ;
struct TYPE_3__ {int worktree; int * root; } ;
typedef TYPE_1__ SyncStatusTree ;
typedef int SyncStatusDir ;


 int FUNC_0 (int *,char**,int ,int ,int ) ;
 int FUNC_1 (char**) ;
 char** FUNC_2 (char const*,char*,int ) ;
 int FUNC_3 (char**) ;

void
FUNC_4 (SyncStatusTree *VAR_0,
                      const char *VAR_1)
{
    char **VAR_2 = ((void*)0);
    guint VAR_3;
    SyncStatusDir *VAR_4 = VAR_0->root;

    VAR_2 = FUNC_2 (VAR_1, "/", 0);
    if (!VAR_2)
        return;
    VAR_3 = FUNC_3 (VAR_2);

    FUNC_0 (VAR_4, VAR_2, VAR_3, 0, VAR_0->worktree);

    FUNC_1 (VAR_2);
}

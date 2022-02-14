
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int repo_mgr; } ;
struct TYPE_4__ {int worktree; } ;
typedef TYPE_1__ SeafRepo ;
typedef int SeafFilelockManager ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char const*,int *) ;
 int FUNC_1 (char*) ;
 TYPE_3__* VAR_2 ;
 TYPE_1__* FUNC_2 (int ,char const*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (char*) ;

void
FUNC_6 (SeafFilelockManager *VAR_3,
                                      const char *VAR_4,
                                      const char *VAR_5)
{
    SeafRepo *VAR_6 = FUNC_2 (VAR_2->repo_mgr, VAR_4);
    if (!VAR_6)
        return;

    char *VAR_7 = FUNC_0 (VAR_6->worktree, VAR_5, ((void*)0));





    if (FUNC_5 (VAR_7))
        FUNC_3 (VAR_7, VAR_1, VAR_0);

    FUNC_1 (VAR_7);
}

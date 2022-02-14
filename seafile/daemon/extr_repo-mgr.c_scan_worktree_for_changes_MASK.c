
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct index_state {int dummy; } ;
typedef int options ;
struct TYPE_7__ {int changeset; int is_repo_ro; int * fset; } ;
struct TYPE_6__ {int worktree; int email; int version; int id; int changeset; int is_readonly; } ;
typedef int SeafileCrypt ;
typedef TYPE_1__ SeafRepo ;
typedef int LockedFileSet ;
typedef int GList ;
typedef TYPE_2__ AddOptions ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,struct index_state*,int ,char*,int *,int ,int *,int *,int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct index_state*,int ,char*,int *,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3 (struct index_state *VAR_1, SeafRepo *VAR_2,
                           SeafileCrypt *VAR_3, GList *VAR_4,
                           LockedFileSet *VAR_5)
{
    FUNC_2 (VAR_1, VAR_2->worktree, "", VAR_4, VAR_5,
                    VAR_2->id, VAR_2->is_readonly, VAR_2->changeset);

    AddOptions VAR_6;
    FUNC_1 (&VAR_6, 0, sizeof(VAR_6));
    VAR_6.fset = VAR_5;
    VAR_6.is_repo_ro = VAR_2->is_readonly;
    VAR_6.changeset = VAR_2->changeset;

    if (FUNC_0 (VAR_2->id, VAR_2->version, VAR_2->email,
                       VAR_1, VAR_2->worktree, "", VAR_3, VAR_0, VAR_4,
                       ((void*)0), ((void*)0), &VAR_6) < 0)
        return -1;

    return 0;
}

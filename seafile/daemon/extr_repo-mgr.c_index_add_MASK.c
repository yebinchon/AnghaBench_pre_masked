
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct index_state {int dummy; } ;
typedef int gboolean ;
struct TYPE_7__ {int repo_mgr; } ;
struct TYPE_6__ {scalar_t__ version; int worktree; int id; int enc_iv; int enc_key; int enc_version; scalar_t__ encrypted; } ;
typedef int SeafileCrypt ;
typedef TYPE_1__ SeafRepo ;
typedef int LockedFileSet ;
typedef int GList ;


 scalar_t__ FUNC_0 (TYPE_1__*,struct index_state*,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct index_state*,TYPE_1__*,int *,int *,int *) ;
 TYPE_2__* VAR_0 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_9 (SeafRepo *VAR_1, struct index_state *VAR_2, gboolean VAR_3)
{
    SeafileCrypt *VAR_4 = ((void*)0);
    LockedFileSet *VAR_5 = ((void*)0);
    GList *VAR_6 = ((void*)0);
    int VAR_7 = 0;

    if (VAR_1->encrypted) {
        VAR_4 = FUNC_8 (VAR_1->enc_version, VAR_1->enc_key, VAR_1->enc_iv);
    }






    VAR_6 = FUNC_5 (VAR_1->worktree);

    if (!VAR_3) {
        if (FUNC_0 (VAR_1, VAR_2, VAR_4, VAR_6, VAR_5) < 0) {
            FUNC_7 ("Failed to apply worktree changes to index.\n");
            VAR_7 = -1;
        }
    } else if (FUNC_3 (VAR_2, VAR_1, VAR_4, VAR_6, VAR_5) < 0) {
        FUNC_7 ("Failed to scan worktree for changes.\n");
        VAR_7 = -1;
    }

    FUNC_4 (VAR_6);





    FUNC_1 (VAR_4);

    return VAR_7;
}

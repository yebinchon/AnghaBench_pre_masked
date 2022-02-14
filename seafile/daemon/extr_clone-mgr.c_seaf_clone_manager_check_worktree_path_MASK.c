
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* gpointer ;
typedef int gboolean ;
struct TYPE_16__ {int repo_mgr; int * ccnet_dir; int * worktree_dir; int * seaf_dir; } ;
struct TYPE_15__ {TYPE_2__* data; struct TYPE_15__* next; } ;
struct TYPE_14__ {int tasks; } ;
struct TYPE_13__ {int name; int * worktree; } ;
struct TYPE_12__ {scalar_t__ state; int repo_id; int * worktree; } ;
typedef TYPE_2__ SeafRepo ;
typedef TYPE_3__ SeafCloneManager ;
typedef TYPE_4__ GList ;
typedef int GHashTableIter ;
typedef int GError ;
typedef TYPE_1__ CloneTask ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*,int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__**,TYPE_1__**) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int **,int ,int ,char*) ;
 TYPE_8__* VAR_6 ;
 TYPE_4__* FUNC_5 (int ,int,int) ;
 int FUNC_6 (char*,...) ;

gboolean
FUNC_7 (SeafCloneManager *VAR_7, const char *VAR_8, GError **VAR_9)
{
    GList *VAR_10, *VAR_11;
    SeafRepo *VAR_12;
    GHashTableIter VAR_13;
    gpointer VAR_14, VAR_15;
    CloneTask *VAR_16;

    if (FUNC_0 (VAR_8, VAR_6->seaf_dir) != 0 ||

        FUNC_0 (VAR_8, VAR_6->worktree_dir) < 0 ||
        FUNC_0 (VAR_8, VAR_6->ccnet_dir) != 0) {
        FUNC_6 ("Worktree path conflicts with seafile system path.\n");
        FUNC_4 (VAR_9, VAR_3, VAR_4,
                     "Worktree conflicts system path");
        return VAR_2;
    }

    VAR_10 = FUNC_5 (VAR_6->repo_mgr, -1, -1);
    for (VAR_11 = VAR_10; VAR_11 != ((void*)0); VAR_11 = VAR_11->next) {
        VAR_12 = VAR_11->data;
        if (VAR_12->worktree != ((void*)0) &&
            FUNC_0 (VAR_8, VAR_12->worktree) != 0) {
            FUNC_6 ("Worktree path conflict with repo %s.\n", VAR_12->name);
            FUNC_4 (VAR_9, VAR_3, VAR_4,
                         "Worktree conflicts existing repo");
            FUNC_3 (VAR_10);
            return VAR_2;
        }
    }
    FUNC_3 (VAR_10);

    FUNC_1 (&VAR_13, VAR_7->tasks);
    while (FUNC_2 (&VAR_13, &VAR_14, &VAR_15)) {
        VAR_16 = VAR_15;
        if (VAR_16->state == VAR_1 ||
            VAR_16->state == VAR_0)
            continue;
        if (FUNC_0 (VAR_8, VAR_16->worktree) != 0) {
            FUNC_6 ("Worktree path conflict with clone %.8s.\n",
                          VAR_16->repo_id);
            FUNC_4 (VAR_9, VAR_3, VAR_4,
                         "Worktree conflicts existing repo");
            return VAR_2;
        }
    }

    return VAR_5;
}

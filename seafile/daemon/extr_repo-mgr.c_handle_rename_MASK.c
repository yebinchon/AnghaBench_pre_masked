
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct index_state {int dummy; } ;
typedef int options ;
typedef int gint64 ;
typedef scalar_t__ gboolean ;
struct TYPE_9__ {int new_path; int path; } ;
typedef TYPE_1__ WTEvent ;
struct TYPE_12__ {int filelock_mgr; int sync_mgr; } ;
struct TYPE_11__ {int changeset; int is_repo_ro; int * fset; } ;
struct TYPE_10__ {int worktree; int email; int version; int id; int changeset; int is_readonly; } ;
typedef int SeafileCrypt ;
typedef TYPE_2__ SeafRepo ;
typedef int LockedFileSet ;
typedef int GList ;
typedef TYPE_3__ AddOptions ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,struct index_state*,int ,int ,int *,scalar_t__,int *,int *,int *,TYPE_3__*) ;
 int FUNC_1 (int ,int ,int *,int *,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int FUNC_8 (int ,int ,int ,scalar_t__,int *) ;
 int FUNC_9 (struct index_state*,int ,scalar_t__*) ;
 int FUNC_10 (struct index_state*,int ,int ,scalar_t__*,int *,int *) ;
 int FUNC_11 (int ,struct index_state*,int ,int ,int *,int *,int ,int **,int ) ;
 TYPE_4__* VAR_3 ;
 int FUNC_12 (char*,int ,...) ;
 scalar_t__ FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,struct index_state*,int *,int ) ;

__attribute__((used)) static void
FUNC_16 (SeafRepo *VAR_4, struct index_state *VAR_5,
               SeafileCrypt *VAR_6, GList *VAR_7,
               LockedFileSet *VAR_8,
               WTEvent *VAR_9, GList **VAR_10,
               gint64 *VAR_11)
{
    gboolean VAR_12, VAR_13, VAR_14;

    FUNC_14 (VAR_3->sync_mgr, VAR_4->id, VAR_9->path);

    if (!FUNC_5(VAR_4->id,
                          VAR_4->is_readonly, VAR_9->path) ||
        !FUNC_5(VAR_4->id,
                          VAR_4->is_readonly, VAR_9->new_path)) {
        FUNC_12 ("Rename: %s or %s is not writable, ignore.\n",
                    VAR_9->path, VAR_9->new_path);
        return;
    }

    if (FUNC_13 (VAR_3->filelock_mgr,
                                              VAR_4->id, VAR_9->path)) {
        FUNC_12 ("Rename: %s is locked on server, ignore.\n", VAR_9->path);


        return;
    }

    if (FUNC_13 (VAR_3->filelock_mgr,
                                              VAR_4->id, VAR_9->new_path)) {
        FUNC_12 ("Rename: %s is locked on server, ignore.\n", VAR_9->new_path);


        return;
    }

    VAR_13 = FUNC_2(VAR_4->worktree, VAR_9->path, VAR_7);
    VAR_14 = FUNC_2(VAR_4->worktree, VAR_9->new_path, VAR_7);


    if (VAR_14) {
        if (!VAR_13 &&
            !FUNC_6 (VAR_9->new_path) &&
            FUNC_3 (VAR_8, VAR_9->path)) {
            VAR_12 = VAR_2;
            FUNC_9 (VAR_5, VAR_9->path, &VAR_12);
            if (VAR_12)
                FUNC_11 (VAR_4->id,
                                           VAR_5,
                                           VAR_4->worktree, VAR_9->path,
                                           VAR_7, VAR_8,
                                           VAR_4->is_readonly,
                                           VAR_10,
                                           VAR_4->changeset);

            FUNC_8 (VAR_4->changeset,
                                   VAR_0,
                                   VAR_9->path,
                                   VAR_2,
                                   ((void*)0));
        }
        return;
    }



    if (!VAR_13 && !FUNC_4 (VAR_9->path, VAR_9->new_path) &&
        FUNC_3 (VAR_8, VAR_9->path)) {
        VAR_12 = VAR_2;
        FUNC_10 (VAR_5, VAR_9->path, VAR_9->new_path, &VAR_12,
                              ((void*)0), ((void*)0));
        if (VAR_12)
            FUNC_11 (VAR_4->id,
                                       VAR_5,
                                       VAR_4->worktree, VAR_9->path,
                                       VAR_7, VAR_8,
                                       VAR_4->is_readonly,
                                       VAR_10,
                                       VAR_4->changeset);


        FUNC_15 (VAR_4->worktree,
                                                VAR_5,
                                                VAR_7,
                                                VAR_9->path);

        FUNC_1 (VAR_4->changeset,
                          VAR_1,
                          ((void*)0),
                          ((void*)0),
                          ((void*)0),
                          VAR_9->path,
                          VAR_9->new_path);
    }

    AddOptions VAR_15;
    FUNC_7 (&VAR_15, 0, sizeof(VAR_15));
    VAR_15.fset = VAR_8;
    VAR_15.is_repo_ro = VAR_4->is_readonly;
    VAR_15.changeset = VAR_4->changeset;
    FUNC_0 (VAR_4->id, VAR_4->version, VAR_4->email,
                   VAR_5, VAR_4->worktree, VAR_9->new_path,
                   VAR_6, VAR_2, VAR_7,
                   VAR_11, ((void*)0), &VAR_15);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_18__ ;


struct index_state {scalar_t__ cache_changed; } ;
struct TYPE_28__ {int sec; } ;
struct cache_entry {TYPE_1__ ce_mtime; } ;
typedef int istate ;
typedef scalar_t__ gboolean ;
struct TYPE_35__ {char* index_dir; } ;
struct TYPE_34__ {scalar_t__ status; scalar_t__ size; int name; int new_name; int mode; } ;
struct TYPE_33__ {TYPE_7__* data; struct TYPE_33__* next; } ;
struct TYPE_32__ {char* repo_id; int repo_version; char* worktree; char* passwd; int total_download; int * repo_name; scalar_t__ is_clone; } ;
struct TYPE_31__ {char const* commit_id; } ;
struct TYPE_30__ {int root_id; int enc_version; int salt; int random_key; scalar_t__ encrypted; } ;
struct TYPE_29__ {char* worktree; unsigned char* enc_key; unsigned char* enc_iv; int enc_version; } ;
struct TYPE_27__ {int filelock_mgr; TYPE_9__* repo_mgr; int commit_mgr; int branch_mgr; } ;
typedef int SeafileCrypt ;
typedef TYPE_2__ SeafRepo ;
typedef TYPE_3__ SeafCommit ;
typedef TYPE_4__ SeafBranch ;
typedef int LockedFileSet ;
typedef scalar_t__ IgnoreReason ;
typedef TYPE_5__ HttpTxTask ;
typedef TYPE_6__ GList ;
typedef int GHashTable ;
typedef int GDestroyNotify ;
typedef TYPE_7__ DiffEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (char*,int,int ,TYPE_7__*,TYPE_6__**) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (char*,int *,struct index_state*,char*,int ) ;
 scalar_t__ FUNC_3 (char*,int,int ,int ,TYPE_6__**,int ) ;
 scalar_t__ VAR_20 ;
 int FUNC_4 (struct index_state*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (TYPE_7__*,char*,int *,int *) ;
 int FUNC_8 (char*,int,char*,struct index_state*,char*,int *,TYPE_5__*,TYPE_6__*,int *,int *,char const*,int *) ;
 scalar_t__ FUNC_9 (char*,int,int ,int ,TYPE_6__**) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int ,int ,int (*) (int *),...) ;
 int FUNC_13 (TYPE_6__*,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 struct cache_entry* FUNC_14 (struct index_state*,int ,int ,int ) ;
 int FUNC_15 (int *,int ,int ,int ,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (struct index_state*,int ,int) ;
 scalar_t__ FUNC_20 (struct index_state*,char*,int) ;
 int FUNC_21 (struct index_state*,int ,int *) ;
 int FUNC_22 (struct index_state*,int ,int ,int *,int *,char*) ;
 TYPE_18__* VAR_23 ;
 TYPE_4__* FUNC_23 (int ,char*,char*) ;
 int FUNC_24 (TYPE_4__*) ;
 TYPE_3__* FUNC_25 (int ,char*,int,char const*) ;
 int FUNC_26 (TYPE_3__*) ;
 int FUNC_27 (char*,int ,...) ;
 scalar_t__ FUNC_28 (int ,char*,int ) ;
 int FUNC_29 (int ,char*,int ) ;
 int FUNC_30 (char*,int ) ;
 int FUNC_31 (TYPE_6__*) ;
 TYPE_6__* FUNC_32 (char*) ;
 int * FUNC_33 (TYPE_9__*,char*) ;
 TYPE_2__* FUNC_34 (TYPE_9__*,char*) ;
 int FUNC_35 (char*,...) ;
 int * FUNC_36 (int ,unsigned char*,unsigned char*) ;
 int FUNC_37 (int ,char*,int ,int ,unsigned char*,unsigned char*) ;
 int FUNC_38 (char*,int *,int ,int ) ;
 scalar_t__ FUNC_39 (int ,scalar_t__*) ;
 int FUNC_40 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_41 (int ,int ) ;
 int FUNC_42 (int ) ;
 int FUNC_43 (char*,struct index_state*,int ) ;
 int FUNC_44 (struct index_state*,char*) ;
 int * VAR_24 ;

int
FUNC_45 (HttpTxTask *VAR_25, const char *VAR_26)
{
    char *VAR_27;
    int VAR_28;
    gboolean VAR_29;
    char *VAR_30;
    char *VAR_31;

    SeafRepo *VAR_32 = ((void*)0);
    SeafBranch *VAR_33 = ((void*)0);
    SeafCommit *VAR_34 = ((void*)0), *VAR_35 = ((void*)0);
    char VAR_36[VAR_14];
    struct index_state VAR_37;
    int VAR_38 = VAR_10;
    GList *VAR_39 = ((void*)0);
    SeafileCrypt *VAR_40 = ((void*)0);
    GHashTable *VAR_41 = ((void*)0), *VAR_42 = ((void*)0);
    GList *VAR_43 = ((void*)0);
    LockedFileSet *VAR_44 = ((void*)0);

    VAR_27 = VAR_25->repo_id;
    VAR_28 = VAR_25->repo_version;
    VAR_29 = VAR_25->is_clone;
    VAR_30 = VAR_25->worktree;
    VAR_31 = VAR_25->passwd;

    FUNC_19 (&VAR_37, 0, sizeof(VAR_37));
    FUNC_40 (VAR_36, VAR_14, "%s/%s",
              VAR_23->repo_mgr->index_dir, VAR_27);
    if (FUNC_20 (&VAR_37, VAR_36, VAR_28) < 0) {
        FUNC_35 ("Failed to load index.\n");
        return VAR_8;
    }

    if (!VAR_29) {
        VAR_32 = FUNC_34 (VAR_23->repo_mgr, VAR_27);
        if (!VAR_32) {
            FUNC_35 ("Failed to get repo %.8s.\n", VAR_27);
            goto out;
        }

        VAR_33 = FUNC_23 (VAR_23->branch_mgr,
                                                 VAR_27, "master");
        if (!VAR_33) {
            FUNC_35 ("Failed to get master branch for repo %.8s.\n",
                          VAR_27);
            VAR_38 = VAR_8;
            goto out;
        }

        VAR_35 = FUNC_25 (VAR_23->commit_mgr,
                                                      VAR_27,
                                                      VAR_28,
                                                      VAR_33->commit_id);
        if (!VAR_35) {
            FUNC_35 ("Failed to get master head %s of repo %.8s.\n",
                          VAR_27, VAR_33->commit_id);
            VAR_38 = VAR_8;
            goto out;
        }
    }

    if (!VAR_29)
        VAR_30 = VAR_32->worktree;

    VAR_34 = FUNC_25 (VAR_23->commit_mgr,
                                                  VAR_27,
                                                  VAR_28,
                                                  VAR_26);
    if (!VAR_34) {
        FUNC_35 ("Failed to get remote head %s of repo %.8s.\n",
                      VAR_27, VAR_26);
        VAR_38 = VAR_8;
        goto out;
    }

    if (FUNC_3 (VAR_27, VAR_28,
                           VAR_35 ? VAR_35->root_id : VAR_6,
                           VAR_34->root_id,
                           &VAR_39, VAR_19) < 0) {
        FUNC_35 ("Failed to diff for repo %.8s.\n", VAR_27);
        VAR_38 = VAR_8;
        goto out;
    }

    GList *VAR_45;
    DiffEntry *VAR_46;


    if (FUNC_9 (VAR_27, VAR_28,
                             VAR_34->root_id,
                             VAR_35 ? VAR_35->root_id : VAR_6,
                             &VAR_39) < 0) {
        VAR_38 = VAR_8;
        goto out;
    }
    if (VAR_34->encrypted) {
        if (!VAR_29) {
            VAR_40 = FUNC_36 (VAR_32->enc_version,
                                       VAR_32->enc_key,
                                       VAR_32->enc_iv);
        } else {
            unsigned char VAR_47[32], VAR_48[16];
            FUNC_37 (VAR_34->enc_version,
                                          VAR_31,
                                          VAR_34->random_key,
                                          VAR_34->salt,
                                          VAR_47, VAR_48);
            VAR_40 = FUNC_36 (VAR_34->enc_version,
                                       VAR_47, VAR_48);
        }
    }

    VAR_41 = FUNC_12 (VAR_22, VAR_21,
                                           FUNC_10, FUNC_10);
    VAR_42 = FUNC_12 (VAR_22, VAR_21,
                                              FUNC_10, ((void*)0));

    VAR_43 = FUNC_32 (VAR_30);

    struct cache_entry *VAR_49;





    for (VAR_45 = VAR_39; VAR_45; VAR_45 = VAR_45->next) {
        VAR_46 = VAR_45->data;
        if (VAR_46->status == VAR_1) {
            FUNC_27 ("Delete file %s.\n", VAR_46->name);

            if (FUNC_39 (VAR_46->name, ((void*)0))) {
                FUNC_30 ("Path %s is invalid on Windows, skip delete.\n",
                              VAR_46->name);
                continue;
            }

            VAR_49 = FUNC_14 (&VAR_37, VAR_46->name, FUNC_42(VAR_46->name), 0);
            if (!VAR_49)
                continue;

            gboolean VAR_50 = FUNC_28 (VAR_23->filelock_mgr,
                                                                              VAR_27,
                                                                              VAR_46->name);
            if (VAR_50)
                FUNC_29 (VAR_23->filelock_mgr,
                                                      VAR_27, VAR_46->name);
            FUNC_1 (VAR_30, VAR_46->name, VAR_46->mode, VAR_49->ce_mtime.sec);




            FUNC_21 (&VAR_37, VAR_46->name, ((void*)0));
            FUNC_43 (VAR_30, &VAR_37, VAR_46->name);
        } else if (VAR_46->status == VAR_2) {
            FUNC_27 ("Delete dir %s.\n", VAR_46->name);

            if (FUNC_39 (VAR_46->name, ((void*)0))) {
                FUNC_30 ("Path %s is invalid on Windows, skip delete.\n",
                              VAR_46->name);
                continue;
            }


            if (!VAR_35 || FUNC_41(VAR_35->root_id, VAR_6) == 0)
                continue;

            FUNC_2 (VAR_27, VAR_25->repo_name, &VAR_37, VAR_30, VAR_46->name);


            FUNC_21 (&VAR_37, VAR_46->name, ((void*)0));

            FUNC_43 (VAR_30, &VAR_37, VAR_46->name);
        }
    }

    for (VAR_45 = VAR_39; VAR_45; VAR_45 = VAR_45->next) {
        VAR_46 = VAR_45->data;
        if (VAR_46->status == VAR_5 ||
            VAR_46->status == VAR_3) {
            FUNC_27 ("Rename %s to %s.\n", VAR_46->name, VAR_46->new_name);
            if (FUNC_28 (VAR_23->filelock_mgr,
                                                      VAR_27, VAR_46->name))
                FUNC_29 (VAR_23->filelock_mgr,
                                                      VAR_27, VAR_46->name);

            FUNC_7 (VAR_46, VAR_30, VAR_41, VAR_42);




            if (!VAR_29)
                FUNC_22 (&VAR_37, VAR_46->name, VAR_46->new_name, ((void*)0),
                                      VAR_24, VAR_27);
            else
                FUNC_22 (&VAR_37, VAR_46->name, VAR_46->new_name, ((void*)0),
                                      ((void*)0), ((void*)0));


            FUNC_43 (VAR_30, &VAR_37, VAR_46->name);
        }
    }

    if (VAR_37.cache_changed)
        FUNC_44 (&VAR_37, VAR_36);

    for (VAR_45 = VAR_39; VAR_45; VAR_45 = VAR_45->next) {
        VAR_46 = VAR_45->data;
        if (VAR_46->status == VAR_0 || VAR_46->status == VAR_4) {
            VAR_25->total_download += VAR_46->size;
        }
    }

    VAR_38 = FUNC_8 (VAR_27,
                               VAR_28,
                               VAR_30,
                               &VAR_37,
                               VAR_36,
                               VAR_40,
                               VAR_25,
                               VAR_39,
                               VAR_41,
                               VAR_42,
                               VAR_26,
                               VAR_44);

out:
    FUNC_4 (&VAR_37);

    FUNC_24 (VAR_33);
    FUNC_26 (VAR_35);
    FUNC_26 (VAR_34);

    FUNC_13 (VAR_39, (GDestroyNotify)VAR_20);

    FUNC_10 (VAR_40);
    if (VAR_41)
        FUNC_11 (VAR_41);
    if (VAR_42)
        FUNC_11 (VAR_42);

    if (VAR_43)
        FUNC_31 (VAR_43);





    return VAR_38;
}

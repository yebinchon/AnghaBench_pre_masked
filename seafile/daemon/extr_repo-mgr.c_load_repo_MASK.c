
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ gboolean ;
struct TYPE_27__ {char* commit_id; } ;
struct TYPE_26__ {char* id; char* name; int sync_interval; void* worktree; void* is_readonly; void* worktree_invalid; int * head; void* server_url; void* token; void* email; scalar_t__ auto_sync; void* is_corrupted; TYPE_3__* manager; } ;
struct TYPE_25__ {TYPE_2__* priv; TYPE_1__* seaf; } ;
struct TYPE_24__ {int repo_hash; int db; } ;
struct TYPE_23__ {int commit_mgr; int branch_mgr; } ;
typedef TYPE_3__ SeafRepoManager ;
typedef TYPE_4__ SeafRepo ;
typedef int SeafCommit ;
typedef TYPE_5__ SeafBranch ;


 void* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,TYPE_4__*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (void*,char*) ;
 int VAR_9 ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 void* FUNC_7 (TYPE_3__*,char*,char*) ;
 int FUNC_8 (TYPE_3__*,char*,char*,char*) ;
 int VAR_10 ;
 TYPE_5__* FUNC_9 (int ,char*,char*) ;
 int FUNC_10 (TYPE_5__*) ;
 int * FUNC_11 (int ,char*,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*,int *) ;
 int FUNC_17 (TYPE_3__*,TYPE_4__*) ;
 TYPE_4__* FUNC_18 (char const*,int *,int *) ;
 int FUNC_19 (char*,...) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (char*,int,char*,char*) ;
 scalar_t__ FUNC_22 (int ,char*,int ,TYPE_4__*) ;
 int FUNC_23 (TYPE_4__*,char*,void*) ;

__attribute__((used)) static SeafRepo *
FUNC_24 (SeafRepoManager *VAR_11, const char *VAR_12)
{
    char VAR_13[256];

    SeafRepo *VAR_14 = FUNC_18(VAR_12, ((void*)0), ((void*)0));
    if (!VAR_14) {
        FUNC_19 ("[repo mgr] failed to alloc repo.\n");
        return ((void*)0);
    }

    VAR_14->manager = VAR_11;

    FUNC_21(VAR_13, 256, "SELECT branch_name FROM RepoBranch WHERE repo_id='%s'",
             VAR_14->id);
    if (FUNC_22 (VAR_11->priv->db, VAR_13,
                                     VAR_9, VAR_14) < 0) {
        FUNC_19 ("Error read branch for repo %s.\n", VAR_14->id);
        FUNC_15 (VAR_14);
        return ((void*)0);
    }


    if (VAR_14->is_corrupted) {
        FUNC_15 (VAR_14);

        return ((void*)0);
    }


    if (VAR_14->head == ((void*)0)) {

        SeafBranch *VAR_15 =
            FUNC_9 (VAR_11->seaf->branch_mgr,
                                            VAR_14->id, "master");
        if (VAR_15 != ((void*)0)) {
             SeafCommit *VAR_16;

             VAR_16 =
                 FUNC_11 (VAR_11->seaf->commit_mgr,
                                                            VAR_14->id,
                                                            VAR_15->commit_id);
             if (VAR_16) {
                 FUNC_16 (VAR_14, VAR_16);
                 FUNC_12 (VAR_16);
             } else {
                 FUNC_19 ("[repo-mgr] Can not find commit %s\n",
                            VAR_15->commit_id);
                 VAR_14->is_corrupted = VAR_8;
             }

             FUNC_10 (VAR_15);
        } else {
            FUNC_19 ("[repo-mgr] Failed to get branch master");
            VAR_14->is_corrupted = VAR_8;
        }
    }

    if (VAR_14->is_corrupted) {
        FUNC_15 (VAR_14);

        return ((void*)0);
    }

    FUNC_6 (VAR_11, VAR_14);

    char *VAR_17;

    VAR_17 = FUNC_7 (VAR_11, VAR_14->id, VAR_1);
    if (FUNC_3(VAR_17, "false") == 0) {
        VAR_14->auto_sync = 0;
    }
    FUNC_1 (VAR_17);

    VAR_14->worktree = FUNC_7 (VAR_11, VAR_14->id, "worktree");
    if (VAR_14->worktree)
        VAR_14->worktree_invalid = VAR_0;

    VAR_14->email = FUNC_7 (VAR_11, VAR_14->id, VAR_2);
    VAR_14->token = FUNC_7 (VAR_11, VAR_14->id, VAR_6);


    VAR_14->server_url = FUNC_7 (VAR_11, VAR_14->id, VAR_4);

    if (VAR_14->head != ((void*)0) && FUNC_14 (VAR_14) < 0) {
        if (FUNC_20(VAR_10)) {
            FUNC_19 ("Worktree for repo \"%s\" is invalid, but still keep it.\n",
                          VAR_14->name);
            VAR_14->worktree_invalid = VAR_8;
        } else {
            FUNC_13 ("Worktree for repo \"%s\" is invalid, delete it.\n",
                          VAR_14->name);
            FUNC_17 (VAR_11, VAR_14);
            return ((void*)0);
        }
    }


    VAR_17 = FUNC_7 (VAR_11, VAR_14->id, VAR_3);
    if (FUNC_3(VAR_17, "true") == 0)
        VAR_14->is_readonly = VAR_8;
    else
        VAR_14->is_readonly = VAR_0;
    FUNC_1 (VAR_17);


    VAR_17 = FUNC_7 (VAR_11, VAR_14->id, VAR_5);
    if (VAR_17) {
        int VAR_18 = FUNC_0(VAR_17);
        if (VAR_18 > 0)
            VAR_14->sync_interval = VAR_18;
    }
    FUNC_1 (VAR_17);

    if (VAR_14->worktree) {
        gboolean VAR_19 = FUNC_5 (VAR_14->worktree, VAR_14->name);
        VAR_17 = FUNC_7 (VAR_11, VAR_14->id, VAR_7);
        if (FUNC_3 (VAR_17, "true") == 0) {

            if (!VAR_19)
                FUNC_23 (VAR_14, VAR_14->name, VAR_0);
        } else {



            if (VAR_19)
                FUNC_8 (VAR_11, VAR_14->id, VAR_7, "true");
        }
        FUNC_1 (VAR_17);
    }

    FUNC_2 (VAR_11->priv->repo_hash, FUNC_4(VAR_14->id), VAR_14);

    return VAR_14;
}

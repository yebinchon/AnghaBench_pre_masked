
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int opts ;
typedef int gint64 ;
typedef int data ;
struct TYPE_18__ {int delta; struct TYPE_18__* data; int dir_cb; int file_cb; int version; int store_id; int * active_paths; TYPE_3__* task; } ;
struct TYPE_17__ {int repo_id; int repo_version; } ;
struct TYPE_16__ {int commit_id; } ;
struct TYPE_15__ {char* root_id; } ;
struct TYPE_14__ {int commit_mgr; int branch_mgr; } ;
typedef TYPE_1__ SeafCommit ;
typedef TYPE_2__ SeafBranch ;
typedef TYPE_3__ HttpTxTask ;
typedef int GHashTable ;
typedef TYPE_4__ DiffOptions ;
typedef TYPE_4__ CalcQuotaDeltaData ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char const**,TYPE_4__*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 TYPE_10__* VAR_2 ;
 TYPE_2__* FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int
FUNC_8 (HttpTxTask *VAR_3,
                                              gint64 *VAR_4,
                                              GHashTable *VAR_5)
{
    int VAR_6 = 0;
    SeafBranch *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    SeafCommit *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);

    VAR_7 = FUNC_3 (VAR_2->branch_mgr, VAR_3->repo_id, "local");
    if (!VAR_7) {
        FUNC_7 ("Branch local not found for repo %.8s.\n", VAR_3->repo_id);
        VAR_6 = -1;
        goto out;
    }
    VAR_8 = FUNC_3 (VAR_2->branch_mgr, VAR_3->repo_id, "master");
    if (!VAR_8) {
        FUNC_7 ("Branch master not found for repo %.8s.\n", VAR_3->repo_id);
        VAR_6 = -1;
        goto out;
    }

    VAR_9 = FUNC_5 (VAR_2->commit_mgr,
                                                 VAR_3->repo_id, VAR_3->repo_version,
                                                 VAR_7->commit_id);
    if (!VAR_9) {
        FUNC_7 ("Local head commit not found for repo %.8s.\n",
                      VAR_3->repo_id);
        VAR_6 = -1;
        goto out;
    }
    VAR_10 = FUNC_5 (VAR_2->commit_mgr,
                                                 VAR_3->repo_id, VAR_3->repo_version,
                                                 VAR_8->commit_id);
    if (!VAR_10) {
        FUNC_7 ("Master head commit not found for repo %.8s.\n",
                      VAR_3->repo_id);
        VAR_6 = -1;
        goto out;
    }

    CalcQuotaDeltaData VAR_11;
    FUNC_2 (&VAR_11, 0, sizeof(VAR_11));
    VAR_11.task = VAR_3;
    VAR_11.active_paths = VAR_5;

    DiffOptions VAR_12;
    FUNC_2 (&VAR_12, 0, sizeof(VAR_12));
    FUNC_1 (VAR_12.store_id, VAR_3->repo_id, 36);
    VAR_12.version = VAR_3->repo_version;
    VAR_12.file_cb = VAR_1;
    VAR_12.dir_cb = VAR_0;
    VAR_12.data = &VAR_11;

    const char *VAR_13[2];
    VAR_13[0] = VAR_9->root_id;
    VAR_13[1] = VAR_10->root_id;
    if (FUNC_0 (2, VAR_13, &VAR_12) < 0) {
        FUNC_7 ("Failed to diff local and master head for repo %.8s.\n",
                      VAR_3->repo_id);
        VAR_6 = -1;
        goto out;
    }

    *VAR_4 = VAR_11.delta;

out:
    FUNC_4 (VAR_7);
    FUNC_4 (VAR_8);
    FUNC_6 (VAR_9);
    FUNC_6 (VAR_10);

    return VAR_6;
}

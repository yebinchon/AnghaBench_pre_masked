
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef int opts ;
typedef int data ;
struct TYPE_21__ {TYPE_4__* block_list; int added_blocks; struct TYPE_21__* data; int dir_cb; int file_cb; int version; int store_id; TYPE_3__* task; } ;
struct TYPE_20__ {int data; struct TYPE_20__* next; } ;
struct TYPE_19__ {int repo_id; int repo_version; } ;
struct TYPE_18__ {int commit_id; } ;
struct TYPE_17__ {char* root_id; } ;
struct TYPE_16__ {int commit_mgr; int branch_mgr; } ;
typedef TYPE_1__ SeafCommit ;
typedef TYPE_2__ SeafBranch ;
typedef TYPE_3__ HttpTxTask ;
typedef TYPE_4__ GList ;
typedef TYPE_5__ DiffOptions ;
typedef TYPE_5__ CalcBlockListData ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char const**,TYPE_5__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int (*) (int ),int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 TYPE_11__* VAR_4 ;
 TYPE_2__* FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_1__* FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*,int ) ;

__attribute__((used)) static int
FUNC_11 (HttpTxTask *VAR_5, GList **VAR_6)
{
    int VAR_7 = 0;
    SeafBranch *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    SeafCommit *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);

    VAR_8 = FUNC_6 (VAR_4->branch_mgr, VAR_5->repo_id, "local");
    if (!VAR_8) {
        FUNC_10 ("Branch local not found for repo %.8s.\n", VAR_5->repo_id);
        VAR_7 = -1;
        goto out;
    }
    VAR_9 = FUNC_6 (VAR_4->branch_mgr, VAR_5->repo_id, "master");
    if (!VAR_9) {
        FUNC_10 ("Branch master not found for repo %.8s.\n", VAR_5->repo_id);
        VAR_7 = -1;
        goto out;
    }

    VAR_10 = FUNC_8 (VAR_4->commit_mgr,
                                                 VAR_5->repo_id, VAR_5->repo_version,
                                                 VAR_8->commit_id);
    if (!VAR_10) {
        FUNC_10 ("Local head commit not found for repo %.8s.\n",
                      VAR_5->repo_id);
        VAR_7 = -1;
        goto out;
    }
    VAR_11 = FUNC_8 (VAR_4->commit_mgr,
                                                 VAR_5->repo_id, VAR_5->repo_version,
                                                 VAR_9->commit_id);
    if (!VAR_11) {
        FUNC_10 ("Master head commit not found for repo %.8s.\n",
                      VAR_5->repo_id);
        VAR_7 = -1;
        goto out;
    }

    CalcBlockListData VAR_12;
    FUNC_5 (&VAR_12, 0, sizeof(VAR_12));
    VAR_12.added_blocks = FUNC_3 (VAR_3, VAR_2, FUNC_1, ((void*)0));
    VAR_12.task = VAR_5;

    DiffOptions VAR_13;
    FUNC_5 (&VAR_13, 0, sizeof(VAR_13));
    FUNC_4 (VAR_13.store_id, VAR_5->repo_id, 36);
    VAR_13.version = VAR_5->repo_version;
    VAR_13.file_cb = VAR_1;
    VAR_13.dir_cb = VAR_0;
    VAR_13.data = &VAR_12;

    const char *VAR_14[2];
    VAR_14[0] = VAR_10->root_id;
    VAR_14[1] = VAR_11->root_id;
    if (FUNC_0 (2, VAR_14, &VAR_13) < 0) {
        FUNC_10 ("Failed to diff local and master head for repo %.8s.\n",
                      VAR_5->repo_id);
        FUNC_2 (VAR_12.added_blocks);

        GList *VAR_15;
        for (VAR_15 = VAR_12.block_list; VAR_15; VAR_15 = VAR_15->next)
            FUNC_1 (VAR_15->data);

        VAR_7 = -1;
        goto out;
    }

    FUNC_2 (VAR_12.added_blocks);
    *VAR_6 = VAR_12.block_list;

out:
    FUNC_7 (VAR_8);
    FUNC_7 (VAR_9);
    FUNC_9 (VAR_10);
    FUNC_9 (VAR_11);
    return VAR_7;
}

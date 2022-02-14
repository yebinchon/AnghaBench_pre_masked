
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int fs_mgr; } ;
struct TYPE_12__ {int added_blocks; int block_list; TYPE_3__* task; } ;
struct TYPE_11__ {int repo_id; int repo_version; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_9__ {int n_blocks; int * blk_sha1s; } ;
typedef TYPE_1__ Seafile ;
typedef TYPE_2__ SeafDirent ;
typedef TYPE_3__ HttpTxTask ;
typedef int GHashTable ;
typedef TYPE_4__ CalcBlockListData ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int*) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* VAR_3 ;
 TYPE_1__* FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9 (int VAR_4, const char *VAR_5, SeafDirent *VAR_6[], void *VAR_7)
{
    SeafDirent *VAR_8 = VAR_6[0];
    SeafDirent *VAR_9 = VAR_6[1];
    CalcBlockListData *VAR_10 = VAR_7;
    HttpTxTask *VAR_11 = VAR_10->task;
    Seafile *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    int VAR_14;

    if (VAR_8 && FUNC_8 (VAR_8->id, VAR_0) != 0) {
        if (!VAR_9) {
            VAR_12 = FUNC_5 (VAR_3->fs_mgr,
                                              VAR_11->repo_id, VAR_11->repo_version,
                                              VAR_8->id);
            if (!VAR_12) {
                FUNC_6 ("Failed to get seafile object %s:%s.\n",
                              VAR_11->repo_id, VAR_8->id);
                return -1;
            }
            for (VAR_14 = 0; VAR_14 < VAR_12->n_blocks; ++VAR_14)
                FUNC_0 (&VAR_10->block_list, VAR_10->added_blocks,
                                   VAR_12->blk_sha1s[VAR_14]);
            FUNC_7 (VAR_12);
        } else if (FUNC_8 (VAR_8->id, VAR_9->id) != 0) {
            VAR_12 = FUNC_5 (VAR_3->fs_mgr,
                                              VAR_11->repo_id, VAR_11->repo_version,
                                              VAR_8->id);
            if (!VAR_12) {
                FUNC_6 ("Failed to get seafile object %s:%s.\n",
                              VAR_11->repo_id, VAR_8->id);
                return -1;
            }
            VAR_13 = FUNC_5 (VAR_3->fs_mgr,
                                              VAR_11->repo_id, VAR_11->repo_version,
                                              VAR_9->id);
            if (!VAR_13) {
                FUNC_7 (VAR_12);
                FUNC_6 ("Failed to get seafile object %s:%s.\n",
                              VAR_11->repo_id, VAR_9->id);
                return -1;
            }

            GHashTable *VAR_15 = FUNC_4 (VAR_2, VAR_1);
            int VAR_16;
            for (VAR_14 = 0; VAR_14 < VAR_13->n_blocks; ++VAR_14)
                FUNC_2 (VAR_15, VAR_13->blk_sha1s[VAR_14], &VAR_16);

            for (VAR_14 = 0; VAR_14 < VAR_12->n_blocks; ++VAR_14)
                if (!FUNC_3 (VAR_15, VAR_12->blk_sha1s[VAR_14]))
                    FUNC_0 (&VAR_10->block_list, VAR_10->added_blocks,
                                       VAR_12->blk_sha1s[VAR_14]);

            FUNC_7 (VAR_12);
            FUNC_7 (VAR_13);
            FUNC_1 (VAR_15);
        }
    }

    return 0;
}

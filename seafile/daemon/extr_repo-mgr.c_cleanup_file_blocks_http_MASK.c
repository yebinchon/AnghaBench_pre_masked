
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int block_mgr; int fs_mgr; } ;
struct TYPE_8__ {int ref_cnt_lock; int blk_ref_cnts; int repo_version; int repo_id; } ;
struct TYPE_7__ {int n_blocks; char** blk_sha1s; } ;
typedef TYPE_1__ Seafile ;
typedef TYPE_2__ HttpTxTask ;


 int* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_5__* VAR_0 ;
 int FUNC_4 (int ,int ,int ,char*) ;
 TYPE_1__* FUNC_5 (int ,int ,int ,char const*) ;
 int FUNC_6 (char*,int ,char const*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8 (HttpTxTask *VAR_1, const char *VAR_2)
{
    Seafile *VAR_3;
    int VAR_4;
    char *VAR_5;
    int *VAR_6;

    VAR_3 = FUNC_5 (VAR_0->fs_mgr,
                                        VAR_1->repo_id, VAR_1->repo_version,
                                        VAR_2);
    if (!VAR_3) {
        FUNC_6 ("Failed to load seafile object %s:%s\n",
                      VAR_1->repo_id, VAR_2);
        return;
    }

    for (VAR_4 = 0; VAR_4 < VAR_3->n_blocks; ++VAR_4) {
        VAR_5 = VAR_3->blk_sha1s[VAR_4];

        FUNC_2 (&VAR_1->ref_cnt_lock);

        VAR_6 = FUNC_0 (VAR_1->blk_ref_cnts, VAR_5);
        if (VAR_6) {
            --(*VAR_6);
            if (*VAR_6 > 0) {
                FUNC_3 (&VAR_1->ref_cnt_lock);
                continue;
            }
        }

        FUNC_4 (VAR_0->block_mgr,
                                         VAR_1->repo_id, VAR_1->repo_version,
                                         VAR_5);
        FUNC_1 (VAR_1->blk_ref_cnts, VAR_5);

        FUNC_3 (&VAR_1->ref_cnt_lock);
    }

    FUNC_7 (VAR_3);
}

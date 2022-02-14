
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_17__ {void* error; int repo_id; int head; scalar_t__ is_clone; int repo_version; } ;
struct TYPE_16__ {int repo_name; int commit_id; int repo_id; } ;
struct TYPE_15__ {int name; int * head; } ;
struct TYPE_14__ {int branch_mgr; int repo_mgr; int commit_mgr; } ;
typedef TYPE_1__ SeafRepo ;
typedef TYPE_2__ SeafCommit ;
typedef int SeafBranch ;
typedef TYPE_3__ HttpTxTask ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_13__* VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_11 (int ,int ) ;
 TYPE_1__* FUNC_12 (int ,int *,int *) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_15 (HttpTxTask *VAR_3)
{
    SeafRepo *VAR_4;
    SeafCommit *VAR_5;
    SeafBranch *VAR_6;
    int VAR_7 = 0;

    VAR_5 = FUNC_7 (VAR_2->commit_mgr,
                                               VAR_3->repo_id,
                                               VAR_3->repo_version,
                                               VAR_3->head);
    if (!VAR_5) {
        FUNC_14 ("Failed to get commit %s:%s.\n", VAR_3->repo_id, VAR_3->head);
        VAR_3->error = VAR_0;
        return -1;
    }




    VAR_4 = FUNC_11 (VAR_2->repo_mgr, VAR_5->repo_id);
    if (VAR_3->is_clone) {
        if (VAR_4 != ((void*)0))
            goto out;

        VAR_4 = FUNC_12 (VAR_5->repo_id, ((void*)0), ((void*)0));
        if (VAR_4 == ((void*)0)) {

            VAR_3->error = VAR_1;
            VAR_7 = -1;
            goto out;
        }

        FUNC_9 (VAR_4, VAR_5);

        FUNC_10 (VAR_2->repo_mgr, VAR_4);


        VAR_6 = FUNC_4 ("local", VAR_3->repo_id, VAR_3->head);
        FUNC_1 (VAR_2->branch_mgr, VAR_6);
        FUNC_6 (VAR_6);

        VAR_6 = FUNC_4 ("master", VAR_3->repo_id, VAR_3->head);
        FUNC_1 (VAR_2->branch_mgr, VAR_6);
        FUNC_6 (VAR_6);
    } else {
        if (!VAR_4) {
            VAR_3->error = VAR_0;
            VAR_7 = -1;
            goto out;
        }

        VAR_6 = FUNC_2 (VAR_2->branch_mgr,
                                                 VAR_3->repo_id,
                                                 "master");
        if (!VAR_6) {
            FUNC_14 ("Branch master not found for repo %.8s.\n", VAR_3->repo_id);
            VAR_3->error = VAR_0;
            VAR_7 = -1;
            goto out;
        }
        FUNC_5 (VAR_6, VAR_5->commit_id);
        FUNC_3 (VAR_2->branch_mgr, VAR_6);
        FUNC_6 (VAR_6);


        FUNC_5 (VAR_4->head, VAR_5->commit_id);
        FUNC_3 (VAR_2->branch_mgr, VAR_4->head);

        if (FUNC_0 (VAR_4->name, VAR_5->repo_name) != 0)
            FUNC_13 (VAR_4, VAR_5->repo_name);
    }

out:
    FUNC_8 (VAR_5);
    return VAR_7;
}

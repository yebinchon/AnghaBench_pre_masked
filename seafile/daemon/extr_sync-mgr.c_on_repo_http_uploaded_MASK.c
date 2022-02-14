
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {TYPE_1__* head; int id; scalar_t__ delete_pending; } ;
struct TYPE_19__ {scalar_t__ state; int error; int head; int repo_id; } ;
struct TYPE_18__ {int repo_mgr; } ;
struct TYPE_17__ {int head_commit; scalar_t__ in_sync; TYPE_2__* current_task; } ;
struct TYPE_16__ {TYPE_8__* repo; int uploaded; } ;
struct TYPE_15__ {int commit_id; } ;
typedef TYPE_2__ SyncTask ;
typedef TYPE_3__ SyncInfo ;
typedef TYPE_4__ SeafileSession ;
typedef int SeafSyncManager ;
typedef TYPE_5__ HttpTxTask ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_8__*) ;
 int FUNC_5 (int ,TYPE_8__*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_9 (SeafileSession *VAR_7,
                       HttpTxTask *VAR_8,
                       SeafSyncManager *VAR_9)
{
    SyncInfo *VAR_10 = FUNC_2 (VAR_9, VAR_8->repo_id);
    SyncTask *VAR_11 = VAR_10->current_task;

    FUNC_1 (VAR_11 != ((void*)0) && VAR_10->in_sync);

    if (VAR_11->repo->delete_pending) {
        FUNC_8 (VAR_11, VAR_5);
        FUNC_5 (VAR_7->repo_mgr, VAR_11->repo);
        return;
    }

    if (VAR_8->state == VAR_2) {
        FUNC_3 (VAR_10->head_commit, VAR_8->head, 41);


        FUNC_6 (VAR_7->repo_mgr,
                                             VAR_11->repo->id,
                                             VAR_3,
                                             VAR_11->repo->head->commit_id);
        VAR_11->uploaded = VAR_6;
        FUNC_0 (VAR_11);
    } else if (VAR_8->state == VAR_0) {
        FUNC_8 (VAR_11, VAR_5);
    } else if (VAR_8->state == VAR_1) {
        if (VAR_8->error == VAR_4) {
            FUNC_4 (VAR_11, VAR_11->repo);
        } else {
            FUNC_7 (VAR_11, VAR_8->error);
        }
    }
}

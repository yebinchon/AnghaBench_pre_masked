
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ delete_pending; } ;
struct TYPE_16__ {scalar_t__ state; int error; int head; scalar_t__ is_clone; int repo_id; } ;
struct TYPE_15__ {int repo_mgr; } ;
struct TYPE_14__ {int head_commit; TYPE_1__* current_task; } ;
struct TYPE_13__ {TYPE_7__* repo; } ;
typedef TYPE_1__ SyncTask ;
typedef TYPE_2__ SyncInfo ;
typedef TYPE_3__ SeafileSession ;
typedef int SeafSyncManager ;
typedef TYPE_4__ HttpTxTask ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_7__*) ;
 int FUNC_3 (int ,TYPE_7__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_6 (SeafileSession *VAR_6,
                      HttpTxTask *VAR_7,
                      SeafSyncManager *VAR_8)
{
    SyncInfo *VAR_9 = FUNC_0 (VAR_8, VAR_7->repo_id);
    SyncTask *VAR_10 = VAR_9->current_task;


    if (VAR_7->is_clone)
        return;

    if (VAR_10->repo->delete_pending) {
        FUNC_5 (VAR_10, VAR_4);
        FUNC_3 (VAR_6->repo_mgr, VAR_10->repo);
        return;
    }

    if (VAR_7->state == VAR_2) {
        FUNC_1 (VAR_9->head_commit, VAR_7->head, 41);
        FUNC_5 (VAR_10, VAR_5);
    } else if (VAR_7->state == VAR_0) {
        FUNC_5 (VAR_10, VAR_4);
    } else if (VAR_7->state == VAR_1) {
        if (VAR_7->error == VAR_3) {
            FUNC_2 (VAR_10, VAR_10->repo);
        } else {
            FUNC_4 (VAR_10, VAR_7->error);
        }
    }
}

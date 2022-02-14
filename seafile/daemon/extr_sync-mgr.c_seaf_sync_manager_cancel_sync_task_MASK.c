
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int http_tx_mgr; int started; } ;
struct TYPE_10__ {int sync_infos; } ;
struct TYPE_9__ {TYPE_1__* current_task; scalar_t__ sync_perm_err_cnt; int in_error; scalar_t__ err_cnt; int in_sync; } ;
struct TYPE_8__ {scalar_t__ state; } ;
typedef TYPE_1__ SyncTask ;
typedef TYPE_2__ SyncInfo ;
typedef TYPE_3__ SeafSyncManager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;




 TYPE_2__* FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char const*,int ) ;
 TYPE_6__* VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int) ;

void
FUNC_6 (SeafSyncManager *VAR_5,
                                    const char *VAR_6)
{
    SyncInfo *VAR_7;
    SyncTask *VAR_8;

    if (!VAR_4->started) {
        FUNC_4 ("sync manager is not started, skip cancel request.\n");
        return;
    }


    VAR_7 = FUNC_0 (VAR_5->sync_infos, VAR_6);

    if (!VAR_7)
        return;
    else if (!VAR_7->in_sync) {
        if (VAR_7->current_task->state == VAR_3) {
            VAR_7->err_cnt = 0;
            VAR_7->in_error = VAR_0;
            VAR_7->sync_perm_err_cnt = 0;
        }
        return;
    }

    FUNC_1 (VAR_7->current_task != ((void*)0));
    VAR_8 = VAR_7->current_task;

    switch (VAR_8->state) {
    case 131:
        FUNC_3 (VAR_4->http_tx_mgr,
                                     VAR_6,
                                     VAR_1);
        FUNC_5 (VAR_8, 133);
        break;
    case 128:
        FUNC_3 (VAR_4->http_tx_mgr,
                                     VAR_6,
                                     VAR_2);
        FUNC_5 (VAR_8, 133);
        break;
    case 132:
    case 130:
    case 129:
        FUNC_5 (VAR_8, 133);
        break;
    case 133:
        break;
    default:
        FUNC_2 ();
    }
}

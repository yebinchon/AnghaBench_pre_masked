
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int sync_infos; } ;
struct TYPE_7__ {TYPE_1__* current_task; } ;
struct TYPE_6__ {int error; } ;
typedef TYPE_2__ SyncInfo ;
typedef TYPE_3__ SeafSyncManager ;


 TYPE_2__* FUNC_0 (int ,char const*) ;

void
FUNC_1 (SeafSyncManager *VAR_0,
                                       const char *VAR_1,
                                       int VAR_2)
{
    SyncInfo *VAR_3 = FUNC_0 (VAR_0->sync_infos, VAR_1);
    if (!VAR_3)
        return;

    VAR_3->current_task->error = VAR_2;
}

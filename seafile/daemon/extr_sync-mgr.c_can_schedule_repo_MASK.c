
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_6__ {scalar_t__ last_sync_time; } ;
struct TYPE_5__ {int sync_interval; scalar_t__ n_running_tasks; } ;
typedef TYPE_1__ SeafSyncManager ;
typedef TYPE_2__ SeafRepo ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static gboolean
FUNC_1 (SeafSyncManager *VAR_1, SeafRepo *VAR_2)
{
    int VAR_3 = (int)FUNC_0(((void*)0));

    return ((VAR_2->last_sync_time == 0 ||
             VAR_2->last_sync_time < VAR_3 - VAR_1->sync_interval) &&
            VAR_1->n_running_tasks < VAR_0);
}

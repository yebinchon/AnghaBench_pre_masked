
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int started; } ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int auto_sync_enabled; } ;
typedef TYPE_2__ SeafSyncManager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (char*) ;

int
FUNC_3 (SeafSyncManager *VAR_2)
{
    if (!VAR_1->started) {
        FUNC_2 ("sync manager is not started, skip disable auto sync.\n");
        return -1;
    }

    FUNC_0 (VAR_2);

    VAR_2->priv->auto_sync_enabled = VAR_0;
    FUNC_1 ("[sync mgr] auto sync is disabled\n");
    return 0;
}

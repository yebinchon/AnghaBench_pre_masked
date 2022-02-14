
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {scalar_t__ auto_sync_enabled; } ;
typedef TYPE_2__ SeafSyncManager ;



int
FUNC_0 (SeafSyncManager *VAR_0)
{
    if (VAR_0->priv->auto_sync_enabled)
        return 1;
    else
        return 0;
}

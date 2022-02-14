
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int paths_lock; int active_paths; } ;
typedef TYPE_2__ SeafSyncManager ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int *) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4 (SeafSyncManager *VAR_2, const char *VAR_3)
{
    FUNC_2 (&VAR_2->priv->paths_lock);

    FUNC_1 (VAR_2->priv->active_paths, VAR_3);

    FUNC_3 (&VAR_2->priv->paths_lock);





}

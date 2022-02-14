
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* gpointer ;
struct TYPE_11__ {TYPE_1__* priv; } ;
struct TYPE_10__ {int delete_pending; } ;
struct TYPE_9__ {int lock; int repo_hash; } ;
typedef TYPE_3__ SeafRepoManager ;
typedef TYPE_2__ SeafRepo ;
typedef int GList ;
typedef int GHashTableIter ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__**,TYPE_2__**) ;
 int * FUNC_2 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

GList*
FUNC_6 (SeafRepoManager *VAR_0, int VAR_1, int VAR_2)
{
    GList *VAR_3 = ((void*)0);
    GHashTableIter VAR_4;
    SeafRepo *VAR_5;
    gpointer VAR_6, VAR_7;

    if (FUNC_3 (&VAR_0->priv->lock) < 0) {
        FUNC_5 ("[repo mgr] failed to lock repo cache.\n");
        return ((void*)0);
    }
    FUNC_0 (&VAR_4, VAR_0->priv->repo_hash);

    while (FUNC_1 (&VAR_4, &VAR_6, &VAR_7)) {
        VAR_5 = VAR_7;
        if (!VAR_5->delete_pending)
            VAR_3 = FUNC_2 (VAR_3, VAR_5);
    }

    FUNC_4 (&VAR_0->priv->lock);

    return VAR_3;
}

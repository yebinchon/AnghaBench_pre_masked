
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int gchar ;
struct TYPE_9__ {int delete_pending; } ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int lock; int repo_hash; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef TYPE_3__ SeafRepo ;


 TYPE_3__* FUNC_0 (int ,int const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

SeafRepo*
FUNC_4 (SeafRepoManager *VAR_0, const gchar *VAR_1)
{
    SeafRepo *VAR_2;

    if (FUNC_1 (&VAR_0->priv->lock) < 0) {
        FUNC_3 ("[repo mgr] failed to lock repo cache.\n");
        return ((void*)0);
    }

    VAR_2 = FUNC_0 (VAR_0->priv->repo_hash, VAR_1);

    FUNC_2 (&VAR_0->priv->lock);

    if (VAR_2 && !VAR_2->delete_pending)
        return VAR_2;

    return ((void*)0);
}

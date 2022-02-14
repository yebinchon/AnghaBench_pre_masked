
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int gchar ;
typedef int gboolean ;
struct TYPE_8__ {int delete_pending; } ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int lock; int repo_hash; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef TYPE_3__ SeafRepo ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ,int const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

gboolean
FUNC_4 (SeafRepoManager *VAR_2, const gchar *VAR_3)
{
    SeafRepo *VAR_4;

    if (FUNC_1 (&VAR_2->priv->lock) < 0) {
        FUNC_3 ("[repo mgr] failed to lock repo cache.\n");
        return VAR_0;
    }

    VAR_4 = FUNC_0 (VAR_2->priv->repo_hash, VAR_3);

    FUNC_2 (&VAR_2->priv->lock);

    if (VAR_4 && !VAR_4->delete_pending)
        return VAR_1;

    return VAR_0;
}

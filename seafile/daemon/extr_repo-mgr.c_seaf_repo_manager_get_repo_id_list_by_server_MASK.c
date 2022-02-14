
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* gpointer ;
struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {int id; int server_url; int delete_pending; } ;
struct TYPE_8__ {int lock; int repo_hash; } ;
typedef TYPE_3__ SeafRepoManager ;
typedef TYPE_2__ SeafRepo ;
typedef int GList ;
typedef int GHashTableIter ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__**,TYPE_2__**) ;
 int * FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

GList *
FUNC_8 (SeafRepoManager *VAR_0, const char *VAR_1)
{
    GList *VAR_2 = ((void*)0);
    GHashTableIter VAR_3;
    SeafRepo *VAR_4;
    gpointer VAR_5, VAR_6;

    if (FUNC_5 (&VAR_0->priv->lock) < 0) {
        FUNC_7 ("[repo mgr] failed to lock repo cache.\n");
        return ((void*)0);
    }
    FUNC_0 (&VAR_3, VAR_0->priv->repo_hash);

    while (FUNC_1 (&VAR_3, &VAR_5, &VAR_6)) {
        VAR_4 = VAR_6;
        if (!VAR_4->delete_pending && FUNC_3 (VAR_4->server_url, VAR_1) == 0)
            VAR_2 = FUNC_2 (VAR_2, FUNC_4(VAR_4->id));
    }

    FUNC_6 (&VAR_0->priv->lock);

    return VAR_2;
}

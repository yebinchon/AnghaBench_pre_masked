
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int sync_mgr; } ;
struct TYPE_14__ {scalar_t__ version; int id; } ;
struct TYPE_13__ {TYPE_1__* priv; } ;
struct TYPE_12__ {int lock; int repo_hash; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef TYPE_3__ SeafRepo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 TYPE_8__* VAR_2 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;

int
FUNC_9 (SeafRepoManager *VAR_3,
                            SeafRepo *VAR_4)
{
    FUNC_6 (VAR_3, VAR_4->id,
                                          (VAR_4->version > 0) ? VAR_1 : VAR_0);

    FUNC_7 (VAR_2->sync_mgr, VAR_4->id);

    FUNC_4 (VAR_3, VAR_4->id);

    FUNC_1 (VAR_3, VAR_4);

    if (FUNC_3 (&VAR_3->priv->lock) < 0) {
        FUNC_8 ("[repo mgr] failed to lock repo cache.\n");
        return -1;
    }

    FUNC_0 (VAR_3->priv->repo_hash, VAR_4->id);

    FUNC_2 (&VAR_3->priv->lock);

    FUNC_5 (VAR_4);

    return 0;
}

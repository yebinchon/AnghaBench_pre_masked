
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* gpointer ;
struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {int paths; } ;
struct TYPE_8__ {int active_paths; } ;
typedef TYPE_3__ SeafSyncManager ;
typedef int GHashTableIter ;
typedef TYPE_2__ ActivePathsInfo ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__**,TYPE_2__**) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3 (SeafSyncManager *VAR_0)
{
    GHashTableIter VAR_1;
    gpointer VAR_2, VAR_3;
    ActivePathsInfo *VAR_4;
    int VAR_5 = 0;

    FUNC_0 (&VAR_1, VAR_0->priv->active_paths);
    while (FUNC_1 (&VAR_1, &VAR_2, &VAR_3)) {
        VAR_4 = VAR_3;
        VAR_5 += FUNC_2(VAR_4->paths);
    }

    return VAR_5;
}

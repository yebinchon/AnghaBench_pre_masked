
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int json_t ;
typedef void* gpointer ;
struct TYPE_7__ {int paths; } ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int paths_lock; int active_paths; } ;
typedef TYPE_2__ SeafSyncManager ;
typedef int GHashTableIter ;
typedef TYPE_3__ ActivePathsInfo ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,void**,void**) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *,int ) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,char*,int *) ;
 int * FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;

char *
FUNC_14 (SeafSyncManager *VAR_0)
{
    json_t *VAR_1 = ((void*)0), *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
    GHashTableIter VAR_4;
    gpointer VAR_5, VAR_6;
    char *VAR_7;
    ActivePathsInfo *VAR_8;
    char *VAR_9 = ((void*)0);

    FUNC_11 (&VAR_0->priv->paths_lock);

    VAR_1 = FUNC_4 ();

    FUNC_2 (&VAR_4, VAR_0->priv->active_paths);
    while (FUNC_3 (&VAR_4, &VAR_5, &VAR_6)) {
        VAR_7 = VAR_5;
        VAR_8 = VAR_6;

        VAR_2 = FUNC_8();
        VAR_3 = FUNC_1 (VAR_8->paths);
        FUNC_9 (VAR_2, "repo_id", FUNC_10(VAR_7));
        FUNC_9 (VAR_2, "paths", VAR_3);

        FUNC_5 (VAR_1, VAR_2);
    }

    FUNC_12 (&VAR_0->priv->paths_lock);

    VAR_9 = FUNC_7 (VAR_1, FUNC_0(4));
    if (!VAR_9) {
        FUNC_13 ("Failed to convert active paths to json\n");
    }

    FUNC_6 (VAR_1);

    return VAR_9;
}

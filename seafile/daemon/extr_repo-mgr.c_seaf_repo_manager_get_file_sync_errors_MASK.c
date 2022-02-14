
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int db_lock; int db; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef int GList ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int,int) ;
 int FUNC_5 (int ,char*,int ,int **) ;

GList *
FUNC_6 (SeafRepoManager *VAR_1, int VAR_2, int VAR_3)
{
    GList *VAR_4 = ((void*)0);
    char *VAR_5;

    FUNC_1 (&VAR_1->priv->db_lock);

    VAR_5 = FUNC_4 ("SELECT id, repo_id, repo_name, path, err_id, timestamp FROM "
                           "FileSyncError ORDER BY id DESC LIMIT %d OFFSET %d",
                           VAR_3, VAR_2);
    FUNC_5 (VAR_1->priv->db, VAR_5,
                                 VAR_0, &VAR_4);
    FUNC_3 (VAR_5);

    FUNC_2 (&VAR_1->priv->db_lock);

    VAR_4 = FUNC_0 (VAR_4);

    return VAR_4;
}

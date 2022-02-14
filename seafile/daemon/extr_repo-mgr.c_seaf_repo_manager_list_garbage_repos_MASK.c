
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int **) ;

GList *
FUNC_3 (SeafRepoManager *VAR_1)
{
    GList *VAR_2 = ((void*)0);

    FUNC_0 (&VAR_1->priv->db_lock);

    FUNC_2 (VAR_1->priv->db,
                                 "SELECT repo_id FROM GarbageRepos",
                                 VAR_0, &VAR_2);
    FUNC_1 (&VAR_1->priv->db_lock);

    return VAR_2;
}

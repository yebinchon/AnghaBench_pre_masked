
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int db_lock; int db; } ;
typedef TYPE_2__ SeafFilelockManager ;
typedef int GList ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*,int ,int **) ;

GList *
FUNC_6 (SeafFilelockManager *VAR_2)
{
    char *VAR_3;
    GList *VAR_4 = ((void*)0);

    FUNC_1 (&VAR_2->priv->db_lock);

    VAR_3 = FUNC_4 ("SELECT repo_id, path FROM ServerLockedFiles "
                           "WHERE locked_by_me = %d", VAR_0);
    FUNC_5 (VAR_2->priv->db, VAR_3,
                                 VAR_1,
                                 &VAR_4);

    FUNC_2 (&VAR_2->priv->db_lock);

    VAR_4 = FUNC_0 (VAR_4);

    FUNC_3 (VAR_3);
    return VAR_4;
}

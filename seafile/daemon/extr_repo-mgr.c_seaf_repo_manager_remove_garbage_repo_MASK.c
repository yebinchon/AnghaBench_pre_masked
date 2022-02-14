
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sql ;
struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int db_lock; int db; } ;
typedef TYPE_2__ SeafRepoManager ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,char*,char const*) ;
 int FUNC_3 (int ,char*) ;

void
FUNC_4 (SeafRepoManager *VAR_0, const char *VAR_1)
{
    char VAR_2[256];

    FUNC_0 (&VAR_0->priv->db_lock);

    FUNC_2 (VAR_2, sizeof(VAR_2), "DELETE FROM GarbageRepos WHERE repo_id='%s'",
              VAR_1);
    FUNC_3 (VAR_0->priv->db, VAR_2);

    FUNC_1 (&VAR_0->priv->db_lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* seaf; TYPE_2__* priv; } ;
struct TYPE_6__ {int db_lock; int db; } ;
struct TYPE_5__ {int db; } ;
typedef TYPE_3__ SeafBranchManager ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int,char*,char const*,char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char const*,char const*) ;
 scalar_t__ FUNC_6 (int ,char*) ;

int
FUNC_7 (SeafBranchManager *VAR_0,
                                const char *VAR_1,
                                const char *VAR_2)
{

    char *VAR_3;

    FUNC_0 (&VAR_0->priv->db_lock);

    VAR_3 = FUNC_5 ("DELETE FROM Branch WHERE name = %Q AND "
                           "repo_id = '%s'", VAR_2, VAR_1);
    if (FUNC_6 (VAR_0->priv->db, VAR_3) < 0)
        FUNC_3 ("Delete branch %s failed\n", VAR_2);
    FUNC_4 (VAR_3);

    FUNC_1 (&VAR_0->priv->db_lock);

    return 0;
}

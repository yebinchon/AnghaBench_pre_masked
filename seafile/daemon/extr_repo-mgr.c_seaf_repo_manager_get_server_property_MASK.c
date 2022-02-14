
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int db_lock; int db; } ;
typedef TYPE_2__ SeafRepoManager ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char const*,char const*) ;
 char* FUNC_4 (int ,char*) ;

char *
FUNC_5 (SeafRepoManager *VAR_0,
                                       const char *VAR_1,
                                       const char *VAR_2)
{
    char *VAR_3 = FUNC_3 ("SELECT value FROM ServerProperty WHERE "
                                 "server_url=%Q AND key=%Q;",
                                 VAR_1, VAR_2);
    char *VAR_4;

    FUNC_0 (&VAR_0->priv->db_lock);

    VAR_4 = FUNC_4 (VAR_0->priv->db, VAR_3);

    FUNC_1 (&VAR_0->priv->db_lock);

    FUNC_2 (VAR_3);
    return VAR_4;
}

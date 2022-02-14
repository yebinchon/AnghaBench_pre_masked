
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int db_lock; int db; } ;
typedef TYPE_2__ SeafRepoManager ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (TYPE_2__*,char const*,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char const*,char*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void
FUNC_7 (SeafRepoManager *VAR_1,
                          const char *VAR_2,
                          const char *VAR_3)
{
    char *VAR_4 = ((void*)0);
    char *VAR_5 = ((void*)0);

    VAR_4 = FUNC_3 (VAR_1, VAR_2,
                                                          VAR_0);
    if (!VAR_4)
        return;

    FUNC_1 (&VAR_1->priv->db_lock);

    VAR_5 = FUNC_5 ("UPDATE ServerProperty SET server_url=%Q WHERE "
                           "server_url=%Q;", VAR_3, VAR_4);
    FUNC_6 (VAR_1->priv->db, VAR_5);

    FUNC_2 (&VAR_1->priv->db_lock);

    FUNC_4 (VAR_5);
    FUNC_0 (VAR_4);
}

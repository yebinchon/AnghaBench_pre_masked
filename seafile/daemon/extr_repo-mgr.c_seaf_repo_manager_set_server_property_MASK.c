
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int db_lock; int db; } ;
typedef TYPE_2__ SeafRepoManager ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*,char const*,char const*) ;
 int FUNC_6 (int ,char*) ;

int
FUNC_7 (SeafRepoManager *VAR_0,
                                       const char *VAR_1,
                                       const char *VAR_2,
                                       const char *VAR_3)
{
    char *VAR_4;
    int VAR_5;
    char *VAR_6 = FUNC_0(VAR_1);

    FUNC_2 (&VAR_0->priv->db_lock);

    VAR_4 = FUNC_5 ("REPLACE INTO ServerProperty VALUES (%Q, %Q, %Q);",
                           VAR_6, VAR_2, VAR_3);
    VAR_5 = FUNC_6 (VAR_0->priv->db, VAR_4);

    FUNC_3 (&VAR_0->priv->db_lock);

    FUNC_4 (VAR_4);
    FUNC_1 (VAR_6);
    return VAR_5;
}

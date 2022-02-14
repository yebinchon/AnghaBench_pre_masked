
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sql ;
typedef int gint64 ;
struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int db_lock; int db; } ;
typedef TYPE_2__ SeafFilelockManager ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,char*,char const*) ;
 int FUNC_3 (int ,char*) ;

gint64
FUNC_4 (SeafFilelockManager *VAR_0,
                                     const char *VAR_1)
{
    char VAR_2[256];
    gint64 VAR_3;

    FUNC_2 (sizeof(VAR_2), VAR_2,
                      "SELECT timestamp FROM ServerLockedFilesTimestamp WHERE repo_id = '%q'",
                      VAR_1);

    FUNC_0 (&VAR_0->priv->db_lock);

    VAR_3 = FUNC_3 (VAR_0->priv->db, VAR_2);

    FUNC_1 (&VAR_0->priv->db_lock);

    return VAR_3;
}

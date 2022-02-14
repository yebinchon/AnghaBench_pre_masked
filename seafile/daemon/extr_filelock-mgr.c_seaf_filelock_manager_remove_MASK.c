
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int hash_lock; int repo_locked_files; int db_lock; int db; } ;
typedef TYPE_2__ SeafFilelockManager ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char const*,int ) ;
 int FUNC_4 (int *,int,char const*,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int ,char*) ;

int
FUNC_9 (SeafFilelockManager *VAR_2,
                              const char *VAR_3)
{
    char *VAR_4;
    sqlite3_stmt *VAR_5;

    FUNC_1 (&VAR_2->priv->db_lock);

    VAR_4 = "DELETE FROM ServerLockedFiles WHERE repo_id = ?";
    VAR_5 = FUNC_8 (VAR_2->priv->db, VAR_4);
    FUNC_4 (VAR_5, 1, VAR_3, -1, VAR_1);
    if (FUNC_7 (VAR_5) != VAR_0) {
        FUNC_3 ("Failed to remove server locked files for %.8s: %s.\n",
                      VAR_3, FUNC_5 (VAR_2->priv->db));
        FUNC_6 (VAR_5);
        FUNC_2 (&VAR_2->priv->db_lock);
        return -1;
    }
    FUNC_6 (VAR_5);

    VAR_4 = "DELETE FROM ServerLockedFilesTimestamp WHERE repo_id = ?";
    VAR_5 = FUNC_8 (VAR_2->priv->db, VAR_4);
    FUNC_4 (VAR_5, 1, VAR_3, -1, VAR_1);
    if (FUNC_7 (VAR_5) != VAR_0) {
        FUNC_3 ("Failed to remove server locked files timestamp for %.8s: %s.\n",
                      VAR_3, FUNC_5 (VAR_2->priv->db));
        FUNC_6 (VAR_5);
        FUNC_2 (&VAR_2->priv->db_lock);
        return -1;
    }
    FUNC_6 (VAR_5);

    FUNC_2 (&VAR_2->priv->db_lock);

    FUNC_1 (&VAR_2->priv->hash_lock);
    FUNC_0 (VAR_2->priv->repo_locked_files, VAR_3);
    FUNC_2 (&VAR_2->priv->hash_lock);

    return 0;
}

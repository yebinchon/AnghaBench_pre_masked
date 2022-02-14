
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_7__ {int seaf_dir; } ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int db_lock; int hash_lock; int repo_locked_files; int * db; } ;
typedef TYPE_2__ SeafFilelockManager ;


 char* FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_4__* VAR_1 ;
 scalar_t__ FUNC_5 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_6 (char*,int **) ;
 int FUNC_7 (int *,char*) ;

int
FUNC_8 (SeafFilelockManager *VAR_2)
{
    char *VAR_3;
    sqlite3 *VAR_4;
    char *VAR_5;

    VAR_3 = FUNC_0 (VAR_1->seaf_dir, "filelocks.db", ((void*)0));
    if (FUNC_6 (VAR_3, &VAR_4) < 0)
        return -1;
    FUNC_1 (VAR_3);
    VAR_2->priv->db = VAR_4;

    VAR_5 = "CREATE TABLE IF NOT EXISTS ServerLockedFiles ("
        "repo_id TEXT, path TEXT, locked_by_me INTEGER);";
    FUNC_7 (VAR_4, VAR_5);

    VAR_5 = "CREATE INDEX IF NOT EXISTS server_locked_files_repo_id_idx "
        "ON ServerLockedFiles (repo_id);";
    FUNC_7 (VAR_4, VAR_5);

    VAR_5 = "CREATE TABLE IF NOT EXISTS ServerLockedFilesTimestamp ("
        "repo_id TEXT, timestamp INTEGER, PRIMARY KEY (repo_id));";
    FUNC_7 (VAR_4, VAR_5);

    VAR_5 = "SELECT repo_id, path, locked_by_me FROM ServerLockedFiles";

    FUNC_3 (&VAR_2->priv->db_lock);
    FUNC_3 (&VAR_2->priv->hash_lock);

    if (FUNC_5 (VAR_2->priv->db, VAR_5,
                                     VAR_0,
                                     VAR_2->priv->repo_locked_files) < 0) {
        FUNC_4 (&VAR_2->priv->db_lock);
        FUNC_4 (&VAR_2->priv->hash_lock);
        FUNC_2 (VAR_2->priv->repo_locked_files);
        return -1;
    }

    FUNC_4 (&VAR_2->priv->hash_lock);
    FUNC_4 (&VAR_2->priv->db_lock);

    return 0;
}

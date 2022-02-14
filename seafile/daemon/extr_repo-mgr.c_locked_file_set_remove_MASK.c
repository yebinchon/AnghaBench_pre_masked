
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int gboolean ;
struct TYPE_7__ {char const* repo_id; int locked_files; TYPE_2__* mgr; } ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int db_lock; int db; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef TYPE_3__ LockedFileSet ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char const*,char const*) ;
 int FUNC_5 (char*,char const*,int ) ;
 int FUNC_6 (int *,int,char const*,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int ,char*) ;

int
FUNC_11 (LockedFileSet *VAR_2, const char *VAR_3, gboolean VAR_4)
{
    SeafRepoManager *VAR_5 = VAR_2->mgr;
    char *VAR_6;
    sqlite3_stmt *VAR_7;

    if (FUNC_0 (VAR_2->locked_files, VAR_3) == ((void*)0))
        return 0;

    FUNC_4 ("Remove locked file record %.8s, %s.\n",
                VAR_2->repo_id, VAR_3);

    FUNC_2 (&VAR_5->priv->db_lock);

    VAR_6 = "DELETE FROM LockedFiles WHERE repo_id = ? AND path = ?";
    VAR_7 = FUNC_10 (VAR_5->priv->db, VAR_6);
    FUNC_6 (VAR_7, 1, VAR_2->repo_id, -1, VAR_1);
    FUNC_6 (VAR_7, 2, VAR_3, -1, VAR_1);
    if (FUNC_9 (VAR_7) != VAR_0) {
        FUNC_5 ("Failed to remove locked file %s from db: %s.\n",
                      VAR_3, FUNC_7 (VAR_5->priv->db));
        FUNC_8 (VAR_7);
        FUNC_3 (&VAR_5->priv->db_lock);
        return -1;
    }
    FUNC_8 (VAR_7);
    FUNC_3 (&VAR_5->priv->db_lock);

    if (!VAR_4)
        FUNC_1 (VAR_2->locked_files, VAR_3);

    return 0;
}

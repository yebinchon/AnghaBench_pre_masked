
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_13__ {char* data; struct TYPE_13__* next; } ;
struct TYPE_12__ {int locked_by_me; } ;
struct TYPE_11__ {TYPE_1__* priv; } ;
struct TYPE_10__ {int db_lock; int db; int * repo_locked_files; } ;
typedef TYPE_2__ SeafFilelockManager ;
typedef TYPE_3__ LockInfo ;
typedef TYPE_4__ GList ;
typedef int GHashTable ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int *) ;
 void* FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char const*,int ) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int,char const*,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int * FUNC_15 (int ,char*) ;

__attribute__((used)) static int
FUNC_16 (SeafFilelockManager *VAR_3, const char *VAR_4)
{
    char *VAR_5;
    sqlite3_stmt *VAR_6;
    GHashTable *VAR_7;
    GList *VAR_8, *VAR_9;
    char *VAR_10;
    LockInfo *VAR_11;

    FUNC_5 (&VAR_3->priv->db_lock);

    VAR_5 = "DELETE FROM ServerLockedFiles WHERE repo_id = ?";
    VAR_6 = FUNC_15 (VAR_3->priv->db, VAR_5);
    FUNC_9 (VAR_6, 1, VAR_4, -1, VAR_1);
    if (FUNC_14 (VAR_6) != VAR_0) {
        FUNC_7 ("Failed to remove server locked files for %.8s: %s.\n",
                      VAR_4, FUNC_11 (VAR_3->priv->db));
        FUNC_12 (VAR_6);
        FUNC_6 (&VAR_3->priv->db_lock);
        return -1;
    }
    FUNC_12 (VAR_6);

    VAR_7 = FUNC_1 (VAR_3->priv->repo_locked_files, VAR_4);
    if (!VAR_7 || FUNC_2 (VAR_7) == 0) {
        FUNC_6 (&VAR_3->priv->db_lock);
        return 0;
    }

    VAR_8 = FUNC_0 (VAR_7);
    VAR_8 = FUNC_4 (VAR_8, VAR_2);

    VAR_5 = "INSERT INTO ServerLockedFiles (repo_id, path, locked_by_me) VALUES (?, ?, ?)";
    VAR_6 = FUNC_15 (VAR_3->priv->db, VAR_5);

    for (VAR_9 = VAR_8; VAR_9; VAR_9 = VAR_9->next) {
        VAR_10 = VAR_9->data;
        VAR_11 = FUNC_1 (VAR_7, VAR_10);

        FUNC_9 (VAR_6, 1, VAR_4, -1, VAR_1);
        FUNC_9 (VAR_6, 2, VAR_10, -1, VAR_1);
        FUNC_8 (VAR_6, 3, VAR_11->locked_by_me);

        if (FUNC_14 (VAR_6) != VAR_0) {
            FUNC_7 ("Failed to insert server file lock for %.8s: %s.\n",
                          VAR_4, FUNC_11 (VAR_3->priv->db));
            FUNC_12 (VAR_6);
            FUNC_6 (&VAR_3->priv->db_lock);
            return -1;
        }

        FUNC_13 (VAR_6);
        FUNC_10 (VAR_6);
    }

    FUNC_12 (VAR_6);
    FUNC_3 (VAR_8);

    FUNC_6 (&VAR_3->priv->db_lock);

    return 0;
}

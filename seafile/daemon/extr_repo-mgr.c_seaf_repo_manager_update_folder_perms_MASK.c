
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_17__ {char const* path; char const* permission; } ;
struct TYPE_16__ {TYPE_4__* data; struct TYPE_16__* next; } ;
struct TYPE_15__ {TYPE_1__* priv; } ;
struct TYPE_14__ {int perm_lock; int group_perms; int user_perms; int db_lock; int db; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef TYPE_3__ GList ;
typedef int GDestroyNotify ;
typedef scalar_t__ FolderPermType ;
typedef TYPE_4__ FolderPerm ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int ,char const*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,char const*,int ) ;
 int FUNC_10 (int *,int,char const*,int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int * FUNC_16 (int ,char*) ;

int
FUNC_17 (SeafRepoManager *VAR_6,
                                       const char *VAR_7,
                                       FolderPermType VAR_8,
                                       GList *VAR_9)
{
    char *VAR_10;
    sqlite3_stmt *VAR_11;
    GList *VAR_12;
    FolderPerm *VAR_13;

    FUNC_5 ((VAR_8 == VAR_1 ||
                           VAR_8 == VAR_0),
                          -1);



    FUNC_7 (&VAR_6->priv->db_lock);

    if (VAR_8 == VAR_1)
        VAR_10 = "DELETE FROM FolderUserPerms WHERE repo_id = ?";
    else
        VAR_10 = "DELETE FROM FolderGroupPerms WHERE repo_id = ?";
    VAR_11 = FUNC_16 (VAR_6->priv->db, VAR_10);
    FUNC_10 (VAR_11, 1, VAR_7, -1, VAR_3);
    if (FUNC_15 (VAR_11) != VAR_2) {
        FUNC_9 ("Failed to remove folder perms for %.8s: %s.\n",
                      VAR_7, FUNC_12 (VAR_6->priv->db));
        FUNC_13 (VAR_11);
        FUNC_8 (&VAR_6->priv->db_lock);
        return -1;
    }
    FUNC_13 (VAR_11);

    if (!VAR_9) {
        FUNC_8 (&VAR_6->priv->db_lock);
        return 0;
    }

    if (VAR_8 == VAR_1)
        VAR_10 = "INSERT INTO FolderUserPerms VALUES (?, ?, ?)";
    else
        VAR_10 = "INSERT INTO FolderGroupPerms VALUES (?, ?, ?)";
    VAR_11 = FUNC_16 (VAR_6->priv->db, VAR_10);

    for (VAR_12 = VAR_9; VAR_12; VAR_12 = VAR_12->next) {
        VAR_13 = VAR_12->data;

        FUNC_10 (VAR_11, 1, VAR_7, -1, VAR_3);
        FUNC_10 (VAR_11, 2, VAR_13->path, -1, VAR_3);
        FUNC_10 (VAR_11, 3, VAR_13->permission, -1, VAR_3);

        if (FUNC_15 (VAR_11) != VAR_2) {
            FUNC_9 ("Failed to insert folder perms for %.8s: %s.\n",
                          VAR_7, FUNC_12 (VAR_6->priv->db));
            FUNC_13 (VAR_11);
            FUNC_8 (&VAR_6->priv->db_lock);
            return -1;
        }

        FUNC_14 (VAR_11);
        FUNC_11 (VAR_11);
    }

    FUNC_13 (VAR_11);

    FUNC_8 (&VAR_6->priv->db_lock);


    GList *VAR_14, *VAR_15;
    VAR_14 = FUNC_0 (VAR_9);
    VAR_14 = FUNC_4 (VAR_14, VAR_4);

    FUNC_7 (&VAR_6->priv->perm_lock);
    if (VAR_8 == VAR_1) {
        VAR_15 = FUNC_2 (VAR_6->priv->user_perms, VAR_7);
        if (VAR_15)
            FUNC_3 (VAR_15, (GDestroyNotify)VAR_5);
        FUNC_1 (VAR_6->priv->user_perms, FUNC_6(VAR_7), VAR_14);
    } else if (VAR_8 == VAR_0) {
        VAR_15 = FUNC_2 (VAR_6->priv->group_perms, VAR_7);
        if (VAR_15)
            FUNC_3 (VAR_15, (GDestroyNotify)VAR_5);
        FUNC_1 (VAR_6->priv->group_perms, FUNC_6(VAR_7), VAR_14);
    }
    FUNC_8 (&VAR_6->priv->perm_lock);

    return 0;
}

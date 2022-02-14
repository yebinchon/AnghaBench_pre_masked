
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int db_lock; int db; } ;
typedef TYPE_2__ SeafFilelockManager ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*,char const*,int ) ;
 int FUNC_3 (int *,int,char const*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8 (SeafFilelockManager *VAR_2,
                            const char *VAR_3,
                            const char *VAR_4)
{
    char *VAR_5;
    sqlite3_stmt *VAR_6;

    FUNC_0 (&VAR_2->priv->db_lock);

    VAR_5 = "DELETE FROM ServerLockedFiles WHERE repo_id = ? AND path = ?";
    VAR_6 = FUNC_7 (VAR_2->priv->db, VAR_5);
    FUNC_3 (VAR_6, 1, VAR_3, -1, VAR_1);
    FUNC_3 (VAR_6, 2, VAR_4, -1, VAR_1);
    if (FUNC_6 (VAR_6) != VAR_0) {
        FUNC_2 ("Failed to remove locked file %s from %.8s: %s.\n",
                      VAR_4, VAR_3, FUNC_4 (VAR_2->priv->db));
        FUNC_5 (VAR_6);
        FUNC_1 (&VAR_2->priv->db_lock);
        return -1;
    }
    FUNC_5 (VAR_6);

    FUNC_1 (&VAR_2->priv->db_lock);

    return 0;
}

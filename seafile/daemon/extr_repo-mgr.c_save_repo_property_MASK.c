
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int db_lock; int * db; } ;
typedef TYPE_2__ SeafRepoManager ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char const*,char const*,...) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static void
FUNC_6 (SeafRepoManager *VAR_0,
                    const char *VAR_1,
                    const char *VAR_2, const char *VAR_3)
{
    char *VAR_4;
    sqlite3 *VAR_5 = VAR_0->priv->db;

    FUNC_0 (&VAR_0->priv->db_lock);

    VAR_4 = FUNC_3 ("SELECT repo_id FROM RepoProperty WHERE repo_id=%Q AND key=%Q",
                           VAR_1, VAR_2);
    if (FUNC_4(VAR_5, VAR_4)) {
        FUNC_2 (VAR_4);
        VAR_4 = FUNC_3 ("UPDATE RepoProperty SET value=%Q"
                               "WHERE repo_id=%Q and key=%Q",
                               VAR_3, VAR_1, VAR_2);
        FUNC_5 (VAR_5, VAR_4);
        FUNC_2 (VAR_4);
    } else {
        FUNC_2 (VAR_4);
        VAR_4 = FUNC_3 ("INSERT INTO RepoProperty VALUES (%Q, %Q, %Q)",
                               VAR_1, VAR_2, VAR_3);
        FUNC_5 (VAR_5, VAR_4);
        FUNC_2 (VAR_4);
    }

    FUNC_1 (&VAR_0->priv->db_lock);
}

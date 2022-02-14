
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


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*,char const*) ;
 int FUNC_3 (char*,int,char*,char const*,char const*) ;
 scalar_t__ FUNC_4 (int *,char*,int ,char**) ;

__attribute__((used)) static char *
FUNC_5 (SeafRepoManager *VAR_1,
                    const char *VAR_2,
                    const char *VAR_3)
{
    sqlite3 *VAR_4 = VAR_1->priv->db;
    char VAR_5[256];
    char *VAR_6 = ((void*)0);

    FUNC_0 (&VAR_1->priv->db_lock);

    FUNC_3(VAR_5, 256, "SELECT value FROM RepoProperty WHERE "
             "repo_id='%s' and key='%s'", VAR_2, VAR_3);
    if (FUNC_4 (VAR_4, VAR_5, VAR_0, &VAR_6) < 0) {
        FUNC_2 ("Error read property %s for repo %s.\n", VAR_3, VAR_2);
        FUNC_1 (&VAR_1->priv->db_lock);
        return ((void*)0);
    }

    FUNC_1 (&VAR_1->priv->db_lock);

    return VAR_6;
}

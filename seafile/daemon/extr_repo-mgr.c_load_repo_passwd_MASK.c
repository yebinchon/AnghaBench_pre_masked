
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int sql ;
struct TYPE_9__ {char* id; } ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int db_lock; int * db; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef TYPE_3__ SeafRepo ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 (int *,char*,int ,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_4 (SeafRepoManager *VAR_1, SeafRepo *VAR_2)
{
    sqlite3 *VAR_3 = VAR_1->priv->db;
    char VAR_4[256];
    int VAR_5;

    FUNC_0 (&VAR_1->priv->db_lock);

    FUNC_2 (VAR_4, sizeof(VAR_4),
              "SELECT key, iv FROM RepoKeys WHERE repo_id='%s'",
              VAR_2->id);
    VAR_5 = FUNC_3 (VAR_3, VAR_4, VAR_0, VAR_2);
    if (VAR_5 < 0) {
        FUNC_1 (&VAR_1->priv->db_lock);
        return -1;
    }

    FUNC_1 (&VAR_1->priv->db_lock);

    return 0;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_8__ {int repo_id; int name; } ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int db_lock; int * db; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef TYPE_3__ SeafBranch ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ,int ) ;
 scalar_t__ FUNC_5 (int *,char*) ;

int
FUNC_6 (SeafRepoManager *VAR_0, SeafBranch *VAR_1)
{
    char *VAR_2;
    sqlite3 *VAR_3 = VAR_0->priv->db;

    FUNC_0 (&VAR_0->priv->db_lock);

    VAR_2 = FUNC_4 ("DELETE FROM RepoBranch WHERE branch_name = %Q"
                           " AND repo_id = %Q",
                           VAR_1->name, VAR_1->repo_id);
    if (FUNC_5 (VAR_3, VAR_2) < 0) {
        FUNC_2 ("Unmap branch repo failed\n");
        FUNC_1 (&VAR_0->priv->db_lock);
        FUNC_3 (VAR_2);
        return -1;
    }

    FUNC_3 (VAR_2);
    FUNC_1 (&VAR_0->priv->db_lock);

    return 0;
}

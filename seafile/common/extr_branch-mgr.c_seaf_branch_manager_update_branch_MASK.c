
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_10__ {int repo_id; int name; int commit_id; } ;
struct TYPE_9__ {TYPE_2__* seaf; TYPE_1__* priv; } ;
struct TYPE_8__ {int db; } ;
struct TYPE_7__ {int db_lock; int * db; } ;
typedef TYPE_3__ SeafBranchManager ;
typedef TYPE_4__ SeafBranch ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int,char*,int ,char*,int ,char*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (int *,char*) ;

int
FUNC_6 (SeafBranchManager *VAR_0, SeafBranch *VAR_1)
{

    sqlite3 *VAR_2;
    char *VAR_3;

    FUNC_0 (&VAR_0->priv->db_lock);

    VAR_2 = VAR_0->priv->db;
    VAR_3 = FUNC_4 ("UPDATE Branch SET commit_id = %Q "
                           "WHERE name = %Q AND repo_id = %Q",
                           VAR_1->commit_id, VAR_1->name, VAR_1->repo_id);
    FUNC_5 (VAR_2, VAR_3);
    FUNC_3 (VAR_3);

    FUNC_1 (&VAR_0->priv->db_lock);

    return 0;
}

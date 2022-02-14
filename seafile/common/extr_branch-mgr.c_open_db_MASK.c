
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* seaf; TYPE_1__* priv; } ;
struct TYPE_6__ {int db; int seaf_dir; } ;
struct TYPE_5__ {int db; } ;
typedef TYPE_3__ SeafBranchManager ;


 int VAR_0 ;



 char* FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,int *) ;
 scalar_t__ FUNC_6 (int ,char const*) ;

__attribute__((used)) static int
FUNC_7 (SeafBranchManager *VAR_1)
{


    char *VAR_2;
    const char *VAR_3;

    VAR_2 = FUNC_0 (VAR_1->seaf->seaf_dir, VAR_0, ((void*)0));
    if (FUNC_5 (VAR_2, &VAR_1->priv->db) < 0) {
        FUNC_1 ("[Branch mgr] Failed to open branch db\n");
        FUNC_2 (VAR_2);
        return -1;
    }
    FUNC_2 (VAR_2);

    VAR_3 = "CREATE TABLE IF NOT EXISTS Branch ("
          "name TEXT, repo_id TEXT, commit_id TEXT);";
    if (FUNC_6 (VAR_1->priv->db, VAR_3) < 0)
        return -1;

    VAR_3 = "CREATE INDEX IF NOT EXISTS branch_index ON Branch(repo_id, name);";
    if (FUNC_6 (VAR_1->priv->db, VAR_3) < 0)
        return -1;
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_8__ {int name; int repo_id; } ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int db_lock; int * db; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef TYPE_3__ SeafBranch ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int
FUNC_5 (SeafRepoManager *VAR_0, SeafBranch *VAR_1)
{
    char *VAR_2;
    sqlite3 *VAR_3 = VAR_0->priv->db;

    FUNC_0 (&VAR_0->priv->db_lock);

    VAR_2 = FUNC_3 ("REPLACE INTO RepoBranch VALUES (%Q, %Q)",
                           VAR_1->repo_id, VAR_1->name);
    FUNC_4 (VAR_3, VAR_2);
    FUNC_2 (VAR_2);

    FUNC_1 (&VAR_0->priv->db_lock);

    return 0;
}

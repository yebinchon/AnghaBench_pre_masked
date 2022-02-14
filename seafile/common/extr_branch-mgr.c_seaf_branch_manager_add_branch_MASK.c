
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sql ;
typedef scalar_t__ gboolean ;
struct TYPE_10__ {int commit_id; int repo_id; int name; } ;
struct TYPE_9__ {TYPE_2__* seaf; TYPE_1__* priv; } ;
struct TYPE_8__ {int * db; } ;
struct TYPE_7__ {int db_lock; int db; } ;
typedef int SeafDB ;
typedef TYPE_3__ SeafBranchManager ;
typedef TYPE_4__ SeafBranch ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,scalar_t__*,int,char*,int ,char*,int ) ;
 int FUNC_3 (int *,char*,int,char*,int ,char*,int ,char*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int,char*,char*,int ,int ,...) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;

int
FUNC_8 (SeafBranchManager *VAR_1, SeafBranch *VAR_2)
{

    char VAR_3[256];

    FUNC_0 (&VAR_1->priv->db_lock);

    FUNC_5 (sizeof(VAR_3), VAR_3,
                      "SELECT 1 FROM Branch WHERE name=%Q and repo_id=%Q",
                      VAR_2->name, VAR_2->repo_id);
    if (FUNC_6 (VAR_1->priv->db, VAR_3))
        FUNC_5 (sizeof(VAR_3), VAR_3,
                          "UPDATE Branch SET commit_id=%Q WHERE "
                          "name=%Q and repo_id=%Q",
                          VAR_2->commit_id, VAR_2->name, VAR_2->repo_id);
    else
        FUNC_5 (sizeof(VAR_3), VAR_3,
                          "INSERT INTO Branch VALUES (%Q, %Q, %Q)",
                          VAR_2->name, VAR_2->repo_id, VAR_2->commit_id);

    FUNC_7 (VAR_1->priv->db, VAR_3);

    FUNC_1 (&VAR_1->priv->db_lock);

    return 0;
}

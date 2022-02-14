
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int sql ;
struct TYPE_10__ {char* id; TYPE_2__* manager; } ;
struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int lock; int repo_hash; int db_lock; int * db; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef TYPE_3__ SeafRepo ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,char*,char*) ;
 int FUNC_9 (int *,char*) ;

int
FUNC_10 (SeafRepoManager *VAR_0,
                            SeafRepo *VAR_1)
{
    char VAR_2[256];
    sqlite3 *VAR_3 = VAR_0->priv->db;

    FUNC_2 (&VAR_0->priv->db_lock);

    FUNC_8 (VAR_2, sizeof(VAR_2), "REPLACE INTO Repo VALUES ('%s');", VAR_1->id);
    FUNC_9 (VAR_3, VAR_2);

    FUNC_3 (&VAR_0->priv->db_lock);




    FUNC_6 (VAR_0, VAR_1->id);

    VAR_1->manager = VAR_0;

    if (FUNC_5 (&VAR_0->priv->lock) < 0) {
        FUNC_7 ("[repo mgr] failed to lock repo cache.\n");
        return -1;
    }

    FUNC_0 (VAR_0->priv->repo_hash, FUNC_1(VAR_1->id), VAR_1);

    FUNC_4 (&VAR_0->priv->lock);

    return 0;
}

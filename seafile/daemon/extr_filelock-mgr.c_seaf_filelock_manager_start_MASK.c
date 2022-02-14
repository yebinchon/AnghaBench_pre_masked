
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* gpointer ;
struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int hash_lock; int repo_locked_files; } ;
typedef TYPE_2__ SeafFilelockManager ;
typedef int GHashTableIter ;
typedef int GHashTable ;


 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,void**,void**) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5 (SeafFilelockManager *VAR_1)
{
    GHashTableIter VAR_2;
    gpointer VAR_3, VAR_4;
    char *VAR_5;
    GHashTable *VAR_6;

    FUNC_3 (&VAR_1->priv->hash_lock);

    FUNC_1 (&VAR_2, VAR_1->priv->repo_locked_files);
    while (FUNC_2 (&VAR_2, &VAR_3, &VAR_4)) {
        VAR_5 = VAR_3;
        VAR_6 = VAR_4;
        FUNC_0 (VAR_6, VAR_0, VAR_5);
    }

    FUNC_4 (&VAR_1->priv->hash_lock);

    return 0;
}

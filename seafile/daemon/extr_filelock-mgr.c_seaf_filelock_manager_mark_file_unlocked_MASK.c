
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int hash_lock; int repo_locked_files; } ;
typedef TYPE_2__ SeafFilelockManager ;
typedef int GHashTable ;


 int * FUNC_0 (int ,char const*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (TYPE_2__*,char const*,char const*) ;

int
FUNC_6 (SeafFilelockManager *VAR_0,
                                          const char *VAR_1,
                                          const char *VAR_2)
{
    GHashTable *VAR_3;

    FUNC_2 (&VAR_0->priv->hash_lock);

    VAR_3 = FUNC_0 (VAR_0->priv->repo_locked_files, VAR_1);
    if (!VAR_3) {
        FUNC_3 (&VAR_0->priv->hash_lock);
        return 0;
    }

    FUNC_1 (VAR_3, VAR_2);

    FUNC_3 (&VAR_0->priv->hash_lock);





    return FUNC_5 (VAR_0, VAR_1, VAR_2);
}

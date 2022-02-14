
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_7__ {int locked_by_me; } ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int hash_lock; int * repo_locked_files; } ;
typedef TYPE_2__ SeafFilelockManager ;
typedef TYPE_3__ LockInfo ;
typedef int GHashTable ;


 int VAR_0 ;
 void* FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

gboolean
FUNC_3 (SeafFilelockManager *VAR_1,
                                      const char *VAR_2,
                                      const char *VAR_3)
{
    gboolean VAR_4;

    FUNC_1 (&VAR_1->priv->hash_lock);

    GHashTable *VAR_5 = FUNC_0 (VAR_1->priv->repo_locked_files, VAR_2);
    if (!VAR_5) {
        FUNC_2 (&VAR_1->priv->hash_lock);
        return VAR_0;
    }

    LockInfo *VAR_6 = FUNC_0 (VAR_5, VAR_3);
    if (!VAR_6) {
        FUNC_2 (&VAR_1->priv->hash_lock);
        return VAR_0;
    }
    VAR_4 = !VAR_6->locked_by_me;

    FUNC_2 (&VAR_1->priv->hash_lock);
    return VAR_4;
}

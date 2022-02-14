
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ locked_by_me; } ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int hash_lock; int * repo_locked_files; } ;
typedef TYPE_2__ SeafFilelockManager ;
typedef TYPE_3__ LockInfo ;
typedef int GHashTable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3 (SeafFilelockManager *VAR_6,
                                       const char *VAR_7,
                                       const char *VAR_8)
{
    int VAR_9;

    FUNC_1 (&VAR_6->priv->hash_lock);

    GHashTable *VAR_10 = FUNC_0 (VAR_6->priv->repo_locked_files, VAR_7);
    if (!VAR_10) {
        FUNC_2 (&VAR_6->priv->hash_lock);
        return VAR_3;
    }

    LockInfo *VAR_11 = FUNC_0 (VAR_10, VAR_8);
    if (!VAR_11) {
        FUNC_2 (&VAR_6->priv->hash_lock);
        return VAR_3;
    }

    if (VAR_11->locked_by_me == VAR_5)
        VAR_9 = VAR_1;
    else if (VAR_11->locked_by_me == VAR_4)
        VAR_9 = VAR_0;
    else
        VAR_9 = VAR_2;

    FUNC_2 (&VAR_6->priv->hash_lock);
    return VAR_9;
}

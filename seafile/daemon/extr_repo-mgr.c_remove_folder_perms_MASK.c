
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int perm_lock; int group_perms; int user_perms; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef int GList ;
typedef int GDestroyNotify ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5 (SeafRepoManager *VAR_1, const char *VAR_2)
{
    GList *VAR_3 = ((void*)0);

    FUNC_3 (&VAR_1->priv->perm_lock);

    VAR_3 = FUNC_0 (VAR_1->priv->user_perms, VAR_2);
    if (VAR_3) {
        FUNC_2 (VAR_3, (GDestroyNotify)VAR_0);
        FUNC_1 (VAR_1->priv->user_perms, VAR_2);
    }

    VAR_3 = FUNC_0 (VAR_1->priv->group_perms, VAR_2);
    if (VAR_3) {
        FUNC_2 (VAR_3, (GDestroyNotify)VAR_0);
        FUNC_1 (VAR_1->priv->group_perms, VAR_2);
    }

    FUNC_4 (&VAR_1->priv->perm_lock);
}

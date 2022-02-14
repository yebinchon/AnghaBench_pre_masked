
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_6__ {TYPE_2__* repo_mgr; } ;
struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int perm_lock; int group_perms; int user_perms; } ;
typedef TYPE_2__ SeafRepoManager ;
typedef int GList ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,char const*) ;
 char* FUNC_2 (char*,char const*,int *) ;
 char* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static gboolean
FUNC_7 (const char *VAR_3,
                  gboolean VAR_4,
                  const char *VAR_5)
{
    SeafRepoManager *VAR_6 = VAR_2->repo_mgr;
    GList *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    char *VAR_9 = ((void*)0);
    char *VAR_10 = ((void*)0);

    FUNC_4 (&VAR_6->priv->perm_lock);

    VAR_7 = FUNC_1 (VAR_6->priv->user_perms, VAR_3);
    VAR_8 = FUNC_1 (VAR_6->priv->group_perms, VAR_3);

    if (VAR_7 || VAR_8)
        VAR_10 = FUNC_2 ("/", VAR_5, ((void*)0));

    if (VAR_7)
        VAR_9 = FUNC_3 (VAR_7, VAR_10);
    if (!VAR_9 && VAR_8)
        VAR_9 = FUNC_3 (VAR_8, VAR_10);

    FUNC_5 (&VAR_6->priv->perm_lock);

    FUNC_0 (VAR_10);

    if (!VAR_9)
        return !VAR_4;

    if (FUNC_6 (VAR_9, "rw") == 0)
        return VAR_1;
    else
        return VAR_0;
}

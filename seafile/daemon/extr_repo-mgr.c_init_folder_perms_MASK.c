
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {char* data; struct TYPE_12__* next; } ;
struct TYPE_11__ {TYPE_1__* priv; } ;
struct TYPE_10__ {int perm_lock; void* group_perms; void* user_perms; int repo_hash; } ;
typedef TYPE_1__ SeafRepoManagerPriv ;
typedef TYPE_2__ SeafRepoManager ;
typedef TYPE_3__ GList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (void*,int ,TYPE_3__*) ;
 void* FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,char*,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9 (SeafRepoManager *VAR_5)
{
    SeafRepoManagerPriv *VAR_6 = VAR_5->priv;
    GList *VAR_7 = FUNC_0 (VAR_6->repo_hash);
    GList *VAR_8;
    GList *VAR_9;
    char *VAR_10;

    VAR_6->user_perms = FUNC_2 (VAR_4, VAR_3, VAR_2, ((void*)0));
    VAR_6->group_perms = FUNC_2 (VAR_4, VAR_3, VAR_2, ((void*)0));
    FUNC_6 (&VAR_6->perm_lock, ((void*)0));

    for (VAR_8 = VAR_7; VAR_8; VAR_8 = VAR_8->next) {
        VAR_10 = VAR_8->data;
        VAR_9 = FUNC_5 (VAR_5, VAR_10, VAR_1);
        if (VAR_9) {
            FUNC_7 (&VAR_6->perm_lock);
            FUNC_1 (VAR_6->user_perms, FUNC_4(VAR_10), VAR_9);
            FUNC_8 (&VAR_6->perm_lock);
        }
        VAR_9 = FUNC_5 (VAR_5, VAR_10, VAR_0);
        if (VAR_9) {
            FUNC_7 (&VAR_6->perm_lock);
            FUNC_1 (VAR_6->group_perms, FUNC_4(VAR_10), VAR_9);
            FUNC_8 (&VAR_6->perm_lock);
        }
    }

    FUNC_3 (VAR_7);
}

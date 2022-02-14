
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ data; struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__* group_perms; TYPE_2__* user_perms; } ;
typedef TYPE_1__ HttpFolderPermRes ;
typedef TYPE_2__ GList ;
typedef int FolderPerm ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2 (HttpFolderPermRes *VAR_0)
{
    GList *VAR_1;

    if (!VAR_0)
        return;
    for (VAR_1 = VAR_0->user_perms; VAR_1; VAR_1 = VAR_1->next)
        FUNC_0 ((FolderPerm *)VAR_1->data);
    for (VAR_1 = VAR_0->group_perms; VAR_1; VAR_1 = VAR_1->next)
        FUNC_0 ((FolderPerm *)VAR_1->data);
    FUNC_1 (VAR_0);
}

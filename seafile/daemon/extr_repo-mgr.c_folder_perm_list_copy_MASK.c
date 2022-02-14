
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int permission; int path; } ;
struct TYPE_9__ {TYPE_2__* data; struct TYPE_9__* next; } ;
typedef TYPE_1__ GList ;
typedef TYPE_2__ FolderPerm ;


 TYPE_2__* FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static GList *
FUNC_2 (GList *VAR_0)
{
    GList *VAR_1 = ((void*)0), *VAR_2;
    FolderPerm *VAR_3, *VAR_4;

    for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
        VAR_3 = VAR_2->data;
        VAR_4 = FUNC_0 (VAR_3->path, VAR_3->permission);
        VAR_1 = FUNC_1 (VAR_1, VAR_4);
    }

    return VAR_1;
}

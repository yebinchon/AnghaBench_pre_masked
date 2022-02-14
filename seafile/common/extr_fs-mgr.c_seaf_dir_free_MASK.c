
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; scalar_t__ data; } ;
struct TYPE_6__ {struct TYPE_6__* ondisk; TYPE_2__* entries; } ;
typedef int SeafDirent ;
typedef TYPE_1__ SeafDir ;
typedef TYPE_2__ GList ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

void
FUNC_3 (SeafDir *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;

    GList *VAR_1 = VAR_0->entries;
    while (VAR_1) {
        FUNC_2 ((SeafDirent *)VAR_1->data);
        VAR_1 = VAR_1->next;
    }

    FUNC_1 (VAR_0->entries);
    FUNC_0 (VAR_0->ondisk);
    FUNC_0(VAR_0);
}

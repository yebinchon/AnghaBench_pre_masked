
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int data; } ;
typedef TYPE_1__ GList ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2 (GList *VAR_0)
{
    GList *VAR_1 = VAR_0;

    while (VAR_1) {
        FUNC_0 (VAR_1->data);
        VAR_1 = VAR_1->next;
    }

    FUNC_1 (VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* value; struct TYPE_4__* key; struct TYPE_4__* nextPtr; } ;
typedef TYPE_1__ list_item_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(list_item_t **VAR_0)
{
    list_item_t *VAR_1, *VAR_2 = *VAR_0;
    while (VAR_2) {
 VAR_1 = VAR_2;
 VAR_2 = VAR_2->nextPtr;
 FUNC_0(VAR_1->key);
 FUNC_0(VAR_1->value);
 FUNC_0(VAR_1);
    }
}

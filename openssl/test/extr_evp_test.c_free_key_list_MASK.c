
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* name; int key; struct TYPE_4__* next; } ;
typedef TYPE_1__ KEY_LIST ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(KEY_LIST *VAR_0)
{
    while (VAR_0 != ((void*)0)) {
        KEY_LIST *VAR_1 = VAR_0->next;

        FUNC_0(VAR_0->key);
        FUNC_1(VAR_0->name);
        FUNC_1(VAR_0);
        VAR_0 = VAR_1;
    }
}

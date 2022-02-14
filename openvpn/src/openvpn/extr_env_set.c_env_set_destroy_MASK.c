
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_set {struct env_set* string; struct env_set* next; struct env_set* list; int * gc; } ;
struct env_item {struct env_item* string; struct env_item* next; struct env_item* list; int * gc; } ;


 int FUNC_0 (struct env_set*) ;

void
FUNC_1(struct env_set *VAR_0)
{
    if (VAR_0 && VAR_0->gc == ((void*)0))
    {
        struct env_item *VAR_1 = VAR_0->list;
        while (VAR_1)
        {
            struct env_item *VAR_2 = VAR_1->next;
            FUNC_0(VAR_1->string);
            FUNC_0(VAR_1);
            VAR_1 = VAR_2;
        }
        FUNC_0(VAR_0);
    }
}

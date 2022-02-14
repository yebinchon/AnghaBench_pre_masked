
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_entry_special {int addr; int (* free_fnc ) (int ) ;struct gc_entry_special* next; } ;
struct gc_arena {struct gc_entry_special* list_special; } ;


 int FUNC_0 (struct gc_entry_special*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct gc_arena *VAR_0)
{
    struct gc_entry_special *VAR_1;
    VAR_1 = VAR_0->list_special;
    VAR_0->list_special = ((void*)0);

    while (VAR_1 != ((void*)0))
    {
        struct gc_entry_special *VAR_2 = VAR_1->next;
        VAR_1->free_fnc(VAR_1->addr);
        FUNC_0(VAR_1);
        VAR_1 = VAR_2;
    }
}

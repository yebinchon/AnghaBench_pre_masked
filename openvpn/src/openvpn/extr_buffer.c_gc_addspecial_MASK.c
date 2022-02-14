
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_entry_special {void (* free_fnc ) (void*) ;struct gc_entry_special* next; void* addr; } ;
struct gc_arena {struct gc_entry_special* list_special; } ;


 int FUNC_0 (struct gc_arena*) ;
 int FUNC_1 (struct gc_entry_special*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;

void
FUNC_4(void *VAR_2, void (VAR_3)(void *), struct gc_arena *VAR_4)
{
    FUNC_0(VAR_4);
    struct gc_entry_special *VAR_5;



    VAR_5 = (struct gc_entry_special *) FUNC_2(sizeof(struct gc_entry_special));

    FUNC_1(VAR_5);
    VAR_5->free_fnc = VAR_3;
    VAR_5->addr = VAR_2;

    VAR_5->next = VAR_4->list_special;
    VAR_4->list_special = VAR_5;
}

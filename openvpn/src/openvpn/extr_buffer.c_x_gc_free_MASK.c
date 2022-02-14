
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_entry {struct gc_entry* next; } ;
struct gc_arena {struct gc_entry* list; } ;


 int FUNC_0 (struct gc_entry*) ;

void
FUNC_1(struct gc_arena *VAR_0)
{
    struct gc_entry *VAR_1;
    VAR_1 = VAR_0->list;
    VAR_0->list = ((void*)0);

    while (VAR_1 != ((void*)0))
    {
        struct gc_entry *VAR_2 = VAR_1->next;
        FUNC_0(VAR_1);
        VAR_1 = VAR_2;
    }
}

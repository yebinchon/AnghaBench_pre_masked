
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_entry {struct gc_entry* next; } ;
struct gc_arena {struct gc_entry* list; } ;



void
FUNC_0(struct gc_arena *VAR_0, struct gc_arena *VAR_1)
{
    if (VAR_0 && VAR_1)
    {
        struct gc_entry *VAR_2 = VAR_1->list;
        if (VAR_2)
        {
            while (VAR_2->next != ((void*)0))
            {
                VAR_2 = VAR_2->next;
            }
            VAR_2->next = VAR_0->list;
            VAR_0->list = VAR_1->list;
            VAR_1->list = ((void*)0);
        }
    }
}

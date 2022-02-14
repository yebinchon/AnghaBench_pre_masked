
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_list {scalar_t__ size; int * tail; struct buffer_entry* head; } ;
struct buffer_entry {int buf; struct buffer_entry* next; } ;


 int FUNC_0 (struct buffer_entry*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct buffer_list *VAR_0)
{
    struct buffer_entry *VAR_1 = VAR_0->head;
    while (VAR_1)
    {
        struct buffer_entry *VAR_2 = VAR_1->next;
        FUNC_1(&VAR_1->buf);
        FUNC_0(VAR_1);
        VAR_1 = VAR_2;
    }
    VAR_0->head = VAR_0->tail = ((void*)0);
    VAR_0->size = 0;
}

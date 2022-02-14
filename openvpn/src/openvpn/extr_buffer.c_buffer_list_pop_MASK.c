
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_list {int * tail; int size; struct buffer_entry* head; } ;
struct buffer_entry {int buf; struct buffer_entry* next; } ;


 int FUNC_0 (struct buffer_entry*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct buffer_list *VAR_0)
{
    if (VAR_0 && VAR_0->head)
    {
        struct buffer_entry *VAR_1 = VAR_0->head->next;
        FUNC_1(&VAR_0->head->buf);
        FUNC_0(VAR_0->head);
        VAR_0->head = VAR_1;
        --VAR_0->size;
        if (!VAR_1)
        {
            VAR_0->tail = ((void*)0);
        }
    }
}

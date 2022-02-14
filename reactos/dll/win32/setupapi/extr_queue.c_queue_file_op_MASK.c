
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_op_queue {int count; struct file_op* tail; struct file_op* head; } ;
struct file_op {struct file_op* next; } ;



__attribute__((used)) static inline void FUNC_0( struct file_op_queue *VAR_0, struct file_op *VAR_1 )
{
    VAR_1->next = ((void*)0);
    if (VAR_0->tail) VAR_0->tail->next = VAR_1;
    else VAR_0->head = VAR_1;
    VAR_0->tail = VAR_1;
    VAR_0->count++;
}

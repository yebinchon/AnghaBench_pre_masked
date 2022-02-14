
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list {int * match; int * free; int * dup; scalar_t__ len; int * tail; int head; } ;
typedef struct list list ;


 struct list* FUNC_0 (int) ;

list *FUNC_1(void)
{
    struct list *VAR_0;

    if ((VAR_0 = FUNC_0(sizeof(*VAR_0))) == ((void*)0))
        return ((void*)0);
    VAR_0->head = *(VAR_0->tail = ((void*)0));
    VAR_0->len = 0;
    VAR_0->dup = ((void*)0);
    VAR_0->free = ((void*)0);
    VAR_0->match = ((void*)0);
    return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quicklist {int fill; scalar_t__ compress; scalar_t__ count; scalar_t__ len; int * tail; int head; } ;
typedef struct quicklist quicklist ;


 struct quicklist* FUNC_0 (int) ;

quicklist *FUNC_1(void) {
    struct quicklist *VAR_0;

    VAR_0 = FUNC_0(sizeof(*VAR_0));
    VAR_0->head = *(VAR_0->tail = ((void*)0));
    VAR_0->len = 0;
    VAR_0->count = 0;
    VAR_0->compress = 0;
    VAR_0->fill = -2;
    return VAR_0;
}

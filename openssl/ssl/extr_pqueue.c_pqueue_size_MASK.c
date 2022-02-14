
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* items; } ;
typedef TYPE_1__ pqueue ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_2__ pitem ;



size_t FUNC_0(pqueue *VAR_0)
{
    pitem *VAR_1 = VAR_0->items;
    size_t VAR_2 = 0;

    while (VAR_1 != ((void*)0)) {
        VAR_2++;
        VAR_1 = VAR_1->next;
    }
    return VAR_2;
}

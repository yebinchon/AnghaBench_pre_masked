
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; scalar_t__ used; int * tail; int current; int head; } ;
typedef TYPE_1__ BN_POOL ;



__attribute__((used)) static void FUNC_0(BN_POOL *VAR_0)
{
    VAR_0->head = VAR_0->current = *(VAR_0->tail = ((void*)0));
    VAR_0->used = VAR_0->size = 0;
}

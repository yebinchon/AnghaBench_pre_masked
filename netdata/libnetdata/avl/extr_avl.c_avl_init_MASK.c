
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* compar ) (void*,void*) ;int * root; } ;
typedef TYPE_1__ avl_tree ;



void FUNC_0(avl_tree *VAR_0, int (*VAR_1)(void * , void * )) {
    VAR_0->root = ((void*)0);
    VAR_0->compar = VAR_1;
}

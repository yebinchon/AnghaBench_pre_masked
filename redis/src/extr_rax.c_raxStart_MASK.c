
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stack; int * node_cb; int * data; int key_max; int key_static_string; int key; scalar_t__ key_len; int * rt; int flags; } ;
typedef TYPE_1__ raxIterator ;
typedef int rax ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(raxIterator *VAR_2, rax *VAR_3) {
    VAR_2->flags = VAR_0;
    VAR_2->rt = VAR_3;
    VAR_2->key_len = 0;
    VAR_2->key = VAR_2->key_static_string;
    VAR_2->key_max = VAR_1;
    VAR_2->data = ((void*)0);
    VAR_2->node_cb = ((void*)0);
    FUNC_0(&VAR_2->stack);
}

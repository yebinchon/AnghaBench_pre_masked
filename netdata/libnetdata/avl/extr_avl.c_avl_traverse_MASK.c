
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ root; } ;
typedef TYPE_1__ avl_tree ;


 int FUNC_0 (scalar_t__,int (*) (void*,void*),void*) ;

int FUNC_1(avl_tree *VAR_0, int (*VAR_1)(void * , void * ), void *VAR_2) {
    if(VAR_0->root)
        return FUNC_0(VAR_0->root, VAR_1, VAR_2);
    else
        return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rwlock; int mutex; int avl_tree; } ;
typedef TYPE_1__ avl_tree_lock ;


 int FUNC_0 (int *,int (*) (void*,void*)) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(avl_tree_lock *VAR_0, int (*VAR_1)(void * , void * )) {
    FUNC_0(&VAR_0->avl_tree, VAR_1);


    int VAR_2;




    VAR_2 = FUNC_3(&VAR_0->rwlock);


    if(VAR_2 != 0)
        FUNC_1("Failed to initialize AVL mutex/rwlock, error: %d", VAR_2);


}

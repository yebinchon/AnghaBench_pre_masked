
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ root; } ;
struct TYPE_6__ {TYPE_1__ avl_tree; } ;
typedef TYPE_2__ avl_tree_lock ;
typedef int RRDVAR ;
typedef int RRDHOST ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(RRDHOST *VAR_0, avl_tree_lock *VAR_1) {



    RRDVAR *VAR_2, *VAR_3 = ((void*)0);
    while((VAR_2 = (RRDVAR *)VAR_1->avl_tree.root)) {
        if(FUNC_2(VAR_2 == VAR_3)) {
            FUNC_0("RRDVAR: INTERNAL ERROR: Cannot cleanup tree of RRDVARs");
            break;
        }
        VAR_3 = VAR_2;
        FUNC_1(VAR_0, VAR_1, VAR_2);
    }
}

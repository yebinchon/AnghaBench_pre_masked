
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int avl ;
struct TYPE_8__ {int rrdset_root_index_name; } ;
struct TYPE_7__ {int avlname; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDHOST ;


 void* FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (void*) ;

RRDSET *FUNC_2(RRDHOST *VAR_0, RRDSET *VAR_1) {
    void *VAR_2;

    VAR_2 = FUNC_0(&VAR_0->rrdset_root_index_name, (avl *) (&VAR_1->avlname));
    if(VAR_2) return FUNC_1(VAR_2);
    return ((void*)0);
}

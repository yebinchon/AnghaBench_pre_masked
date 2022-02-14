
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * extra_op_iter; int * subspace_iter; int * outer; int extra_op_dtype; int extra_op; int subspace; int ait; int array; } ;
typedef TYPE_1__ PyArrayMapIterObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(PyArrayMapIterObject *VAR_0)
{
    FUNC_1(VAR_0->array);
    FUNC_3(VAR_0->array);
    FUNC_3(VAR_0->ait);
    FUNC_3(VAR_0->subspace);
    FUNC_3(VAR_0->extra_op);
    FUNC_3(VAR_0->extra_op_dtype);
    if (VAR_0->outer != ((void*)0)) {
        FUNC_0(VAR_0->outer);
    }
    if (VAR_0->subspace_iter != ((void*)0)) {
        FUNC_0(VAR_0->subspace_iter);
    }
    if (VAR_0->extra_op_iter != ((void*)0)) {
        FUNC_0(VAR_0->extra_op_iter);
    }
    FUNC_2(VAR_0);
}

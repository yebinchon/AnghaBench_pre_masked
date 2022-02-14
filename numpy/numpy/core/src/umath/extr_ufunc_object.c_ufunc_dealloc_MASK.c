
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ identity; int * obj; int * identity_value; int userloops; int op_flags; int ptr; int core_signature; int core_offsets; int core_dim_flags; int core_dim_sizes; int core_dim_ixs; int core_num_dims; } ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyObject ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(PyUFuncObject *VAR_1)
{
    FUNC_2((PyObject *)VAR_1);
    FUNC_0(VAR_1->core_num_dims);
    FUNC_0(VAR_1->core_dim_ixs);
    FUNC_0(VAR_1->core_dim_sizes);
    FUNC_0(VAR_1->core_dim_flags);
    FUNC_0(VAR_1->core_offsets);
    FUNC_0(VAR_1->core_signature);
    FUNC_0(VAR_1->ptr);
    FUNC_0(VAR_1->op_flags);
    FUNC_4(VAR_1->userloops);
    if (VAR_1->identity == VAR_0) {
        FUNC_3(VAR_1->identity_value);
    }
    if (VAR_1->obj != ((void*)0)) {
        FUNC_3(VAR_1->obj);
    }
    FUNC_1(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int npy_uint32 ;
typedef int npy_intp ;
struct TYPE_3__ {int nargs; int* core_num_dims; int core_num_dim_ix; int * core_dim_flags; int * core_dim_sizes; } ;
typedef TYPE_1__ PyUFuncObject ;



__attribute__((used)) static int
FUNC_0(PyUFuncObject *VAR_0,
                           int VAR_1[],
                           npy_intp VAR_2[],
                           npy_uint32 VAR_3[]) {
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0->nargs; VAR_4++) {
        VAR_1[VAR_4] = VAR_0->core_num_dims[VAR_4];
    }
    for (VAR_4 = 0; VAR_4 < VAR_0->core_num_dim_ix; VAR_4++) {
        VAR_2[VAR_4] = VAR_0->core_dim_sizes[VAR_4];
        VAR_3[VAR_4] = VAR_0->core_dim_flags[VAR_4];
    }
    return 0;
}

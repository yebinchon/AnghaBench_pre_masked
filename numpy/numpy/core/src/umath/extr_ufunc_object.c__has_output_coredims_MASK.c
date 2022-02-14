
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nin; int nout; scalar_t__* core_num_dims; } ;
typedef TYPE_1__ PyUFuncObject ;



__attribute__((used)) static int
FUNC_0(PyUFuncObject *VAR_0) {
    int VAR_1;
    for (VAR_1 = VAR_0->nin; VAR_1 < VAR_0->nin + VAR_0->nout; ++VAR_1) {
        if (VAR_0->core_num_dims[VAR_1] > 0) {
            return 1;
        }
    }
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nin; int nout; int* core_num_dims; int core_signature; } ;
typedef TYPE_1__ PyUFuncObject ;


 int FUNC_0 (int ,char*,int ,int ,char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(PyUFuncObject *VAR_1) {
    int VAR_2;
    int VAR_3 = VAR_1->nin, VAR_4 = VAR_1->nout;
    int VAR_5 = VAR_1->core_num_dims[0];
    for (VAR_2 = 1; VAR_2 < VAR_3 + VAR_4; VAR_2++) {
        if (VAR_1->core_num_dims[VAR_2] != (VAR_2 < VAR_3 ? VAR_5 : 0)) {
            FUNC_0(VAR_0,
                "%s does not support keepdims: its signature %s requires "
                "%s %d to have %d core dimensions, but keepdims can only "
                "be used when all inputs have the same number of core "
                "dimensions and all outputs have no core dimensions.",
                FUNC_1(VAR_1),
                VAR_1->core_signature,
                VAR_2 < VAR_3 ? "input" : "output",
                VAR_2 < VAR_3 ? VAR_2 : VAR_2 - VAR_3,
                VAR_1->core_num_dims[VAR_2]);
            return -1;
        }
    }
    return 0;
}

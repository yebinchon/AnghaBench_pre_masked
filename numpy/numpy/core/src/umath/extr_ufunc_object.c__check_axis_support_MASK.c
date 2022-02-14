
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int core_num_dim_ix; int core_signature; } ;
typedef TYPE_1__ PyUFuncObject ;


 int FUNC_0 (int ,char*,int ,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(PyUFuncObject *VAR_1) {
    if (VAR_1->core_num_dim_ix != 1) {
        FUNC_0(VAR_0,
                     "%s: axis can only be used with a single shared core "
                     "dimension, not with the %d distinct ones implied by "
                     "signature %s.",
                     FUNC_1(VAR_1),
                     VAR_1->core_num_dim_ix,
                     VAR_1->core_signature);
        return -1;
    }
    return 0;
}

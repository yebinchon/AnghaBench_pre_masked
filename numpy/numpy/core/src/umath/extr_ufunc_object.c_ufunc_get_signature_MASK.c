
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int core_signature; int core_enabled; } ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyObject ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_1(PyUFuncObject *VAR_1)
{
    if (!VAR_1->core_enabled) {
        VAR_0;
    }
    return FUNC_0(VAR_1->core_signature);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* subarray; } ;
struct TYPE_5__ {int shape; } ;
typedef int Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_2__ PyArray_Descr ;


 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static PyObject *
FUNC_3(PyArray_Descr *VAR_0)
{
    Py_ssize_t VAR_1;

    if (!FUNC_0(VAR_0)) {
        return FUNC_1(0);
    }





    VAR_1 = FUNC_2(VAR_0->subarray->shape);
    return FUNC_1(VAR_1);
}

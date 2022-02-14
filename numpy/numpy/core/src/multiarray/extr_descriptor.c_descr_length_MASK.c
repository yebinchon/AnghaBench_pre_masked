
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int names; } ;
typedef int Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static Py_ssize_t
FUNC_2(PyObject *VAR_0)
{
    PyArray_Descr *VAR_1 = (PyArray_Descr *)VAR_0;

    if (FUNC_0(VAR_1)) {
        return FUNC_1(VAR_1->names);
    }
    else {
        return 0;
    }
}

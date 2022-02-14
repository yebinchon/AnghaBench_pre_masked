
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int names; } ;
typedef int Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static PyObject *
FUNC_4(PyArray_Descr *VAR_1, Py_ssize_t VAR_2)
{
    PyObject *VAR_3 = FUNC_1(VAR_1->names, VAR_2);
    PyObject *VAR_4;
    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_0,
                     "Field index %zd out of range.", VAR_2);
        return ((void*)0);
    }
    VAR_4 = FUNC_3(VAR_1, VAR_3);
    FUNC_2(VAR_3);
    return VAR_4;
}

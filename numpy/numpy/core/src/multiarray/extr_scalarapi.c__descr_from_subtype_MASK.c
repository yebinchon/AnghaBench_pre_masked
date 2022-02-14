
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tp_mro; } ;
typedef TYPE_1__ PyTypeObject ;
typedef int PyObject ;
typedef int PyArray_Descr ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static PyArray_Descr *
FUNC_4(PyObject *VAR_1)
{
    PyObject *VAR_2;
    VAR_2 = ((PyTypeObject *)VAR_1)->tp_mro;
    if (FUNC_3(VAR_2) < 2) {
        return FUNC_0(VAR_0);
    }
    return FUNC_1(FUNC_2(VAR_2, 1));
}

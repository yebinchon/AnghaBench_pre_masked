
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *) ;
 int * VAR_2 ;

__attribute__((used)) static PyObject *
FUNC_1(PyArray_Descr *VAR_3)
{
    PyObject *VAR_4;
    VAR_4 = (VAR_3->flags&VAR_0) ? VAR_2 : VAR_1;
    FUNC_0(VAR_4);
    return VAR_4;
}

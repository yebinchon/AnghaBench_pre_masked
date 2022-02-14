
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fields; int type_num; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;


 int * FUNC_0 (long) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_2(PyArray_Descr *VAR_1)
{
    long VAR_2;
    VAR_2 = 0;
    if (VAR_1->fields == VAR_0) {
        VAR_2 = 1;
    }
    if (FUNC_1(VAR_1->type_num)) {
        VAR_2 = 2;
    }
    return FUNC_0(VAR_2);
}

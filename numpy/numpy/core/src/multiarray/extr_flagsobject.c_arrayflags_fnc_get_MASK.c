
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArrayFlagsObject ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *) ;
 int * VAR_3 ;

__attribute__((used)) static PyObject *
FUNC_1(PyArrayFlagsObject *VAR_4)
{
    PyObject *VAR_5;

    if (((VAR_4->flags & VAR_1) == VAR_1) &&
        !((VAR_4->flags & VAR_0) == VAR_0)) {
        VAR_5 = VAR_3;
    }
    else {
        VAR_5 = VAR_2;
    }
    FUNC_0(VAR_5);
    return VAR_5;
}

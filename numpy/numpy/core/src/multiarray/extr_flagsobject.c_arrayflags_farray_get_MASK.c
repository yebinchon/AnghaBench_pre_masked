
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
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int *) ;
 int * VAR_5 ;

__attribute__((used)) static PyObject *
FUNC_1(PyArrayFlagsObject *VAR_6)
{
    PyObject *VAR_7;

    if (((VAR_6->flags & (VAR_0|
                         VAR_3|
                         VAR_2)) != 0) &&
        !((VAR_6->flags & VAR_1) != 0)) {
        VAR_7 = VAR_5;
    }
    else {
        VAR_7 = VAR_4;
    }
    FUNC_0(VAR_7);
    return VAR_7;
}

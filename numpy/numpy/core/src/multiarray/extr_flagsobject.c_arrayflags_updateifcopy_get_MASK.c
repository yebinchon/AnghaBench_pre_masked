
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArrayFlagsObject ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 int * VAR_2 ;

__attribute__((used)) static PyObject *
FUNC_2(PyArrayFlagsObject *VAR_3)
{
    PyObject *VAR_4;

    if(FUNC_0("UPDATEIFCOPY deprecated, use WRITEBACKIFCOPY instead") < 0) {
        return ((void*)0);
    }
    if ((VAR_3->flags & (VAR_0)) == (VAR_0)) {
        VAR_4 = VAR_2;
    }
    else {
        VAR_4 = VAR_1;
    }
    FUNC_1(VAR_4);
    return VAR_4;
}

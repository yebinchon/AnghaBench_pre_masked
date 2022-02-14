
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_2__ {int nd; int * strides; int * dimensions; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArrayObject_fields ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int) ;
 int * FUNC_9 (int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(PyArrayObject *VAR_4, PyObject *VAR_5)
{
    int VAR_6;
    PyArrayObject *VAR_7;

    if (VAR_5 == ((void*)0)) {
        FUNC_6(VAR_2,
                "Cannot delete array shape");
        return -1;
    }

    VAR_7 = (PyArrayObject *)FUNC_3(VAR_4, VAR_5);
    if (VAR_7 == ((void*)0)) {
        return -1;
    }
    if (FUNC_0(VAR_7) != FUNC_0(VAR_4)) {
        FUNC_7(VAR_7);
        FUNC_6(VAR_2,
                        "incompatible shape for a non-contiguous " "array");

        return -1;
    }


    FUNC_10(VAR_4);
    VAR_6 = FUNC_2(VAR_7);
    ((PyArrayObject_fields *)VAR_4)->nd = VAR_6;
    if (VAR_6 > 0) {

        ((PyArrayObject_fields *)VAR_4)->dimensions = FUNC_9(2 * VAR_6);
        if (FUNC_1(VAR_4) == ((void*)0)) {
            FUNC_7(VAR_7);
            FUNC_6(VAR_3,"");
            return -1;
        }
        ((PyArrayObject_fields *)VAR_4)->strides = FUNC_1(VAR_4) + VAR_6;
        if (VAR_6) {
            FUNC_8(FUNC_1(VAR_4), FUNC_1(VAR_7), VAR_6*sizeof(npy_intp));
            FUNC_8(FUNC_4(VAR_4), FUNC_4(VAR_7), VAR_6*sizeof(npy_intp));
        }
    }
    else {
        ((PyArrayObject_fields *)VAR_4)->dimensions = ((void*)0);
        ((PyArrayObject_fields *)VAR_4)->strides = ((void*)0);
    }
    FUNC_7(VAR_7);
    FUNC_5(VAR_4, VAR_0 | VAR_1);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int positive; } ;
typedef int PyObject ;
typedef int PyArrayObject ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int **,int **,int **) ;
 int FUNC_6 (int *,int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_10(PyArrayObject *VAR_1)
{
    PyObject *VAR_2;
    if (FUNC_9(VAR_1)) {
        VAR_2 = FUNC_2(VAR_1, VAR_0.positive);
    }
    else {
        VAR_2 = FUNC_3(VAR_1, VAR_0.positive);
    }
    if (VAR_2 == ((void*)0)) {





        PyObject *VAR_3, *VAR_4, *VAR_5;
        FUNC_5(&VAR_3, &VAR_4, &VAR_5);
        if (FUNC_7((PyObject *)VAR_1)) {
            FUNC_6(VAR_3, VAR_4, VAR_5);
            return ((void*)0);
        }
        FUNC_8(VAR_3);
        FUNC_8(VAR_4);
        FUNC_8(VAR_5);


        if (FUNC_0("Applying '+' to a non-numerical array is "
                      "ill-defined. Returning a copy, but in the future "
                      "this will error.") < 0) {
            return ((void*)0);
        }
        VAR_2 = FUNC_4((PyArrayObject *)FUNC_1(VAR_1));
    }
    return VAR_2;
}

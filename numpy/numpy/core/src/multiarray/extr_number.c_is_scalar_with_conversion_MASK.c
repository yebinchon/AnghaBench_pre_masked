
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* tp_as_number; } ;
struct TYPE_3__ {int * (* nb_float ) (int *) ;} ;
typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;
typedef int PyArrayObject ;
typedef int NPY_SCALARKIND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 double FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 TYPE_2__* FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int * FUNC_17 (int *) ;
 int * FUNC_18 (int *) ;

__attribute__((used)) static NPY_SCALARKIND
FUNC_19(PyObject *VAR_5, double* VAR_6)
{
    PyObject *VAR_7;
    const int VAR_8 = 1;

    if (FUNC_12(VAR_5)) {
        *VAR_6 = (double)FUNC_10(VAR_5);
        return VAR_3;
    }
    if (VAR_8 && FUNC_8(VAR_5)) {
        *VAR_6 = FUNC_7(VAR_5);
        return VAR_2;
    }
    if (FUNC_0(VAR_5)) {
        if ((FUNC_4((PyArrayObject *)VAR_5) == 0) &&
                ((FUNC_2((PyArrayObject *)VAR_5) ||
                 (VAR_8 && FUNC_1((PyArrayObject *)VAR_5))))) {
            VAR_7 = FUNC_15(VAR_5)->tp_as_number->nb_float(VAR_5);
            if (VAR_7 == ((void*)0)) {
                return VAR_4;
            }
            *VAR_6 = FUNC_7(VAR_5);
            FUNC_14(VAR_7);
            if (FUNC_2((PyArrayObject *)VAR_5)) {
                return VAR_3;
            }
            else {
                return VAR_2;
            }
        }
    }
    else if (FUNC_3(VAR_5, VAR_1) ||
                (VAR_8 && FUNC_3(VAR_5, VAR_0))) {
        VAR_7 = FUNC_15(VAR_5)->tp_as_number->nb_float(VAR_5);
        if (VAR_7 == ((void*)0)) {
            return VAR_4;
        }
        *VAR_6 = FUNC_7(VAR_5);
        FUNC_14(VAR_7);

        if (FUNC_3(VAR_5, VAR_1)) {
                return VAR_3;
        }
        else {
            return VAR_2;
        }
    }
    else if (FUNC_9(VAR_5)) {
        PyObject* VAR_9 = FUNC_13(VAR_5);
        Py_ssize_t VAR_10;
        if (VAR_9==((void*)0)) {
            if (FUNC_6()) {
                FUNC_5();
            }
            return VAR_4;
        }
        VAR_10 = FUNC_11(VAR_9);
        if (FUNC_16(VAR_10)) {
            FUNC_5();
            return VAR_4;
        }
        *VAR_6 = (double) VAR_10;
        return VAR_3;
    }
    return VAR_4;
}

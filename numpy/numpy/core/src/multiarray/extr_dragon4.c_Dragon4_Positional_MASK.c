
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int npy_longdouble ;
typedef int npy_half ;
typedef int npy_float ;
typedef int npy_double ;
typedef int TrimMode ;
struct TYPE_14__ {int precision; int sign; int digits_left; int digits_right; int exp_digits; int trim_mode; int cutoff_mode; int digit_mode; scalar_t__ scientific; } ;
struct TYPE_13__ {int obval; } ;
struct TYPE_12__ {int obval; } ;
struct TYPE_11__ {int obval; } ;
struct TYPE_10__ {int obval; } ;
typedef int PyObject ;
typedef TYPE_1__ PyLongDoubleScalarObject ;
typedef TYPE_2__ PyHalfScalarObject ;
typedef TYPE_3__ PyFloatScalarObject ;
typedef TYPE_4__ PyDoubleScalarObject ;
typedef TYPE_5__ Dragon4_Options ;
typedef int DigitMode ;
typedef int CutoffMode ;


 int VAR_0 ;
 int * FUNC_0 (int *,TYPE_5__*) ;
 int * FUNC_1 (int *,TYPE_5__*) ;
 int * FUNC_2 (int *,TYPE_5__*) ;
 int * FUNC_3 (int *,TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;

PyObject *
FUNC_7(PyObject *VAR_4, DigitMode VAR_5, CutoffMode VAR_6,
                   int VAR_7, int VAR_8, TrimMode VAR_9, int VAR_10,
                   int VAR_11)
{
    npy_double VAR_12;
    Dragon4_Options VAR_13;

    VAR_13.scientific = 0;
    VAR_13.digit_mode = VAR_5;
    VAR_13.cutoff_mode = VAR_6;
    VAR_13.precision = VAR_7;
    VAR_13.sign = VAR_8;
    VAR_13.trim_mode = VAR_9;
    VAR_13.digits_left = VAR_10;
    VAR_13.digits_right = VAR_11;
    VAR_13.exp_digits = -1;

    if (FUNC_4(VAR_4, VAR_2)) {
        npy_half VAR_14 = ((PyHalfScalarObject *)VAR_4)->obval;
        return FUNC_2(&VAR_14, &VAR_13);
    }
    else if (FUNC_4(VAR_4, VAR_1)) {
        npy_float VAR_15 = ((PyFloatScalarObject *)VAR_4)->obval;
        return FUNC_1(&VAR_15, &VAR_13);
    }
    else if (FUNC_4(VAR_4, VAR_0)) {
        npy_double VAR_16 = ((PyDoubleScalarObject *)VAR_4)->obval;
        return FUNC_0(&VAR_16, &VAR_13);
    }
    else if (FUNC_4(VAR_4, VAR_3)) {
        npy_longdouble VAR_17 = ((PyLongDoubleScalarObject *)VAR_4)->obval;
        return FUNC_3(&VAR_17, &VAR_13);
    }

    VAR_12 = FUNC_6(VAR_4);
    if (FUNC_5()) {
        return ((void*)0);
    }
    return FUNC_0(&VAR_12, &VAR_13);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * square; int * sqrt; int * _ones_like; int * reciprocal; int * positive; } ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;
typedef scalar_t__ NPY_SCALARKIND ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,double*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_13(PyArrayObject *VAR_3, PyObject *VAR_4, int VAR_5,
                  PyObject **VAR_6)
{
    double VAR_7;
    NPY_SCALARKIND VAR_8;

    if (FUNC_1(VAR_3) &&
            !FUNC_9(VAR_3) &&
            ((VAR_8=FUNC_12(VAR_4, &VAR_7))>0)) {
        PyObject *VAR_9 = ((void*)0);
        if (FUNC_6(VAR_3) || FUNC_5(VAR_3)) {
            if (VAR_7 == 1.0) {
                VAR_9 = VAR_2.positive;
            }
            else if (VAR_7 == -1.0) {
                VAR_9 = VAR_2.reciprocal;
            }
            else if (VAR_7 == 0.0) {
                VAR_9 = VAR_2._ones_like;
            }
            else if (VAR_7 == 0.5) {
                VAR_9 = VAR_2.sqrt;
            }
            else if (VAR_7 == 2.0) {
                VAR_9 = VAR_2.square;
            }
            else {
                return -1;
            }

            if (VAR_5 || FUNC_11(VAR_3)) {
                *VAR_6 = FUNC_3(VAR_3, VAR_9);
            }
            else {
                *VAR_6 = FUNC_4(VAR_3, VAR_9);
            }
            return 0;
        }





        else if (VAR_7 == 2.0) {
            VAR_9 = VAR_2.square;
            if (VAR_5) {
                *VAR_6 = FUNC_3(VAR_3, VAR_9);
            }
            else {

                if (VAR_8 == VAR_1 && FUNC_8(VAR_3)) {
                    PyArray_Descr *VAR_10 = FUNC_2(VAR_0);
                    VAR_3 = (PyArrayObject *)FUNC_0(VAR_3, VAR_10,
                            FUNC_7(VAR_3));
                    if (VAR_3 != ((void*)0)) {

                        *VAR_6 = FUNC_3(VAR_3, VAR_9);
                        FUNC_10(VAR_3);
                    }
                }
                else {
                    *VAR_6 = FUNC_4(VAR_3, VAR_9);
                }
            }
            return 0;
        }
    }

    return -1;
}

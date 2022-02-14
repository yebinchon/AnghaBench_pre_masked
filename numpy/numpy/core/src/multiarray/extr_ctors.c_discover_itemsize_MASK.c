
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int
FUNC_14(PyObject *VAR_1, int VAR_2, int *VAR_3, int VAR_4)
{
    int VAR_5;
    npy_intp VAR_6, VAR_7;

    if (FUNC_0(VAR_1)) {
        *VAR_3 = FUNC_2(*VAR_3, FUNC_1((PyArrayObject *)VAR_1));
        return 0;
    }

    if ((VAR_2 == 0) || FUNC_11(VAR_1) ||



            FUNC_3(VAR_1) ||

            FUNC_12(VAR_1)) {


        if (VAR_4 && VAR_1 != ((void*)0) &&
                !FUNC_11(VAR_1) && !FUNC_12(VAR_1)) {
            PyObject *VAR_8 = ((void*)0);
            if (VAR_4 == VAR_0) {
                VAR_8 = FUNC_7(VAR_1);
            }
            else {



                VAR_8 = FUNC_8(VAR_1);

            }
            if (VAR_8) {
                VAR_6 = FUNC_6(VAR_8);
                FUNC_13(VAR_8);
            }
            else {
                VAR_6 = -1;
            }
        }
        else {
            VAR_6 = FUNC_6(VAR_1);
        }
        if (VAR_6 == -1) {
            FUNC_4();
        }
        else {
            *VAR_3 = FUNC_2(*VAR_3, VAR_6);
        }
        return 0;
    }

    VAR_6 = FUNC_10(VAR_1);
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        PyObject *VAR_9 = FUNC_9(VAR_1,VAR_7);

        if (VAR_9 == ((void*)0)) {
            return -1;
        }

        VAR_5 = FUNC_14(VAR_9, VAR_2 - 1, VAR_3, VAR_4);
        FUNC_13(VAR_9);
        if (VAR_5 == -1) {
            return -1;
        }
    }

    return 0;
}

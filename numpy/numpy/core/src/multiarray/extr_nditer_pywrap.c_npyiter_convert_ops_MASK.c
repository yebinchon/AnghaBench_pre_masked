
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint32 ;
typedef int npy_intp ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * VAR_8 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int*,int) ;

__attribute__((used)) static int
FUNC_12(PyObject *VAR_9, PyObject *VAR_10,
                    PyArrayObject **VAR_11, npy_uint32 *VAR_12,
                    int *VAR_13)
{
    int VAR_14, VAR_15;


    if (FUNC_7(VAR_9) || FUNC_4(VAR_9)) {
        VAR_15 = FUNC_6(VAR_9);
        if (VAR_15 == 0) {
            FUNC_3(VAR_7,
                    "Must provide at least one operand");
            return 0;
        }
        if (VAR_15 > VAR_5) {
            FUNC_3(VAR_7, "Too many operands");
            return 0;
        }

        for (VAR_14 = 0; VAR_14 < VAR_15; ++VAR_14) {
            PyObject *VAR_16 = FUNC_5(VAR_9, VAR_14);
            if (VAR_16 == ((void*)0)) {
                npy_intp VAR_17;
                for (VAR_17 = 0; VAR_17 < VAR_14; ++VAR_17) {
                    FUNC_10(VAR_11[VAR_17]);
                }
                return 0;
            }
            else if (VAR_16 == VAR_8) {
                FUNC_8(VAR_16);
                VAR_16 = ((void*)0);
            }

            VAR_11[VAR_14] = (PyArrayObject *)VAR_16;
        }
    }
    else {
        VAR_15 = 1;

        FUNC_9(VAR_9);
        VAR_11[0] = (PyArrayObject *)VAR_9;
    }

    *VAR_13 = VAR_15;


    if (VAR_10 == ((void*)0) || VAR_10 == VAR_8) {
        for (VAR_14 = 0; VAR_14 < VAR_15; ++VAR_14) {





            if (VAR_11[VAR_14] == ((void*)0)) {
                VAR_12[VAR_14] = VAR_4 | VAR_1;
            }
            else {
                VAR_12[VAR_14] = VAR_2;
            }
        }
    }
    else if (FUNC_11(VAR_10,
                                      VAR_12, VAR_15) != 1) {
        for (VAR_14 = 0; VAR_14 < VAR_15; ++VAR_14) {
            FUNC_10(VAR_11[VAR_14]);
        }
        *VAR_13 = 0;
        return 0;
    }


    for (VAR_14 = 0; VAR_14 < VAR_15; ++VAR_14) {
        if (VAR_11[VAR_14] != ((void*)0)) {
            PyArrayObject *VAR_18;
            int VAR_19 = 0;

            if (VAR_12[VAR_14]&(VAR_3|VAR_4)) {
                VAR_19 |= VAR_0;
            }
            VAR_18 = (PyArrayObject *)FUNC_0((PyObject *)VAR_11[VAR_14],
                                                  VAR_19);
            if (VAR_18 == ((void*)0)) {
                if (FUNC_2() &&
                            FUNC_1(VAR_6)) {
                    FUNC_3(VAR_6,
                            "Iterator operand is flagged as writeable, "
                            "but is an object which cannot be written "
                            "back to via WRITEBACKIFCOPY");
                }
                for (VAR_14 = 0; VAR_14 < VAR_15; ++VAR_14) {
                    FUNC_8(VAR_11[VAR_14]);
                }
                *VAR_13 = 0;
                return 0;
            }
            FUNC_8(VAR_11[VAR_14]);
            VAR_11[VAR_14] = VAR_18;
        }
    }

    return 1;
}

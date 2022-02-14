
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int * base; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArrayObject_fields ;
typedef int PyArrayObject ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *,char*,char**,int **,int **,int **) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static PyObject *
FUNC_13(PyArrayObject *VAR_9, PyObject *VAR_10, PyObject *VAR_11)
{
    static char *VAR_12[] = {"write", "align", "uic", ((void*)0)};
    PyObject *VAR_13 = VAR_7;
    PyObject *VAR_14 = VAR_7;
    PyObject *VAR_15 = VAR_7;
    int VAR_16 = FUNC_7(VAR_9);

    PyArrayObject_fields *VAR_17 = (PyArrayObject_fields *)VAR_9;

    if (!FUNC_2(VAR_10, VAR_11, "|OOO:setflags", VAR_12,
                                     &VAR_13,
                                     &VAR_14,
                                     &VAR_15))
        return ((void*)0);

    if (VAR_14 != VAR_7) {
        if (FUNC_10(VAR_14)) {
            FUNC_5(VAR_9, VAR_0);
        }
        else if (FUNC_1(VAR_9)) {
            FUNC_6(VAR_9, VAR_0);
        }
        else {
            FUNC_8(VAR_6,
                            "cannot set aligned flag of mis-"
                            "aligned array to True");
            return ((void*)0);
        }
    }

    if (VAR_15 != VAR_7) {
        if (FUNC_9(VAR_15)) {
            VAR_17->flags = VAR_16;
            FUNC_8(VAR_6,
                            "cannot set WRITEBACKIFCOPY "
                            "flag to True");
            return ((void*)0);
        }
        else {
            FUNC_5(VAR_9, VAR_5);
            FUNC_5(VAR_9, VAR_2);
            FUNC_11(VAR_17->base);
            VAR_17->base = ((void*)0);
        }
    }

    if (VAR_13 != VAR_7) {
        if (FUNC_9(VAR_13)) {
            if (FUNC_12(VAR_9)) {






                if ((FUNC_3(VAR_9) == ((void*)0)) &&
                            !FUNC_4(VAR_9, VAR_1) &&
                            !FUNC_4(VAR_9, VAR_4)) {

                    if (FUNC_0("making a non-writeable array writeable "
                                  "is deprecated for arrays without a base "
                                  "which do not own their data.") < 0) {
                        return ((void*)0);
                    }
                }
                FUNC_6(VAR_9, VAR_4);
                FUNC_5(VAR_9, VAR_3);
            }
            else {
                VAR_17->flags = VAR_16;
                FUNC_8(VAR_6,
                                "cannot set WRITEABLE "
                                "flag to True of this "
                                "array");
                return ((void*)0);
            }
        }
        else {
            FUNC_5(VAR_9, VAR_4);
            FUNC_5(VAR_9, VAR_3);
        }
    }
    VAR_8;
}

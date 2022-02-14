
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npyiter_opitflags ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;
typedef int NPY_CASTING ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (int ,int *) ;
 int VAR_3 ;
 int FUNC_7 (int *,int ,int ) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int **,int *) ;
 int * FUNC_10 (char*,int,...) ;
 int * FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_15(int VAR_5, PyArrayObject **VAR_6,
                    PyArray_Descr **VAR_7,
                    NPY_CASTING VAR_8,
                    npyiter_opitflags *VAR_9)
{
    int VAR_10;

    for(VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10) {
        FUNC_1("Iterator: Checking casting for operand %d\n",
                            (int)VAR_10);
        if (VAR_6[VAR_10] != ((void*)0) && !FUNC_5(FUNC_4(VAR_6[VAR_10]),
                                                     VAR_7[VAR_10])) {

            if ((VAR_9[VAR_10] & VAR_1) &&
                        !FUNC_2(VAR_6[VAR_10],
                                          VAR_7[VAR_10],
                                          VAR_8)) {
                PyObject *VAR_11;
                VAR_11 = FUNC_10(
                        "Iterator operand %d dtype could not be cast from ",
                        VAR_10);
                FUNC_9(&VAR_11,
                        FUNC_8((PyObject *)FUNC_4(VAR_6[VAR_10])));
                FUNC_9(&VAR_11,
                        FUNC_11(" to "));
                FUNC_9(&VAR_11,
                        FUNC_8((PyObject *)VAR_7[VAR_10]));
                FUNC_9(&VAR_11,
                        FUNC_10(" according to the rule %s",
                                FUNC_13(VAR_8)));
                FUNC_6(VAR_3, VAR_11);
                FUNC_12(VAR_11);
                return 0;
            }

            if ((VAR_9[VAR_10] & VAR_2) &&
                        !FUNC_3(VAR_7[VAR_10],
                                          FUNC_4(VAR_6[VAR_10]),
                                          VAR_8)) {
                PyObject *VAR_12;
                VAR_12 = FUNC_11(
                        "Iterator requested dtype could not be cast from ");
                FUNC_9(&VAR_12,
                        FUNC_8((PyObject *)VAR_7[VAR_10]));
                FUNC_9(&VAR_12,
                        FUNC_11(" to "));
                FUNC_9(&VAR_12,
                        FUNC_8((PyObject *)FUNC_4(VAR_6[VAR_10])));
                FUNC_9(&VAR_12,
                        FUNC_10(", the operand %d dtype, "
                                "according to the rule %s",
                                VAR_10,
                                FUNC_13(VAR_8)));
                FUNC_6(VAR_3, VAR_12);
                FUNC_12(VAR_12);
                return 0;
            }

            FUNC_0("Iterator: Setting NPY_OP_ITFLAG_CAST "
                                "because the types aren't equivalent\n");

            VAR_9[VAR_10] |= VAR_0;
        }
    }

    return 1;
}

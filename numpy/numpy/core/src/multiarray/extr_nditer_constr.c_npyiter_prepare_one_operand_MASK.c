
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int npyiter_opitflags ;
typedef int npy_uint32 ;
struct TYPE_14__ {int flags; int byteorder; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;
typedef int PyArrayObject ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*,TYPE_1__*) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int ,char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_15(PyArrayObject **VAR_18,
                        char **VAR_19,
                        PyArray_Descr *VAR_20,
                        PyArray_Descr **VAR_21,
                        npy_uint32 VAR_22,
                        npy_uint32 VAR_23, npyiter_opitflags *VAR_24)
{

    if (*VAR_18 == ((void*)0)) {

        if ((VAR_23 & (VAR_4|VAR_10)) == 0) {
            FUNC_11(VAR_17,
                    "Iterator operand was NULL, but neither the "
                    "ALLOCATE nor the VIRTUAL flag was specified");
            return 0;
        }

        if (VAR_23 & VAR_4) {

            if (!((*VAR_24) & VAR_15)) {
                FUNC_11(VAR_17,
                        "Automatic allocation was requested for an iterator "
                        "operand, but it wasn't flagged for writing");
                return 0;
            }






            if (((VAR_22 & (VAR_6 |
                            VAR_7)) == VAR_6) &&
                    ((*VAR_24) & VAR_14)) {
                FUNC_11(VAR_17,
                        "Automatic allocation was requested for an iterator "
                        "operand, and it was flagged as readable, but "
                        "buffering  without delayed allocation was enabled");
                return 0;
            }


            FUNC_14(VAR_20);
            *VAR_21 = VAR_20;
        }
        else {
            *VAR_21 = ((void*)0);
        }


        if (VAR_23 & VAR_5) {
            if (*VAR_21 == ((void*)0)) {
                *VAR_21 = FUNC_6(VAR_0);
                if (*VAR_21 == ((void*)0)) {
                    return 0;
                }
            }
        }

        *VAR_19 = ((void*)0);

        return 1;
    }


    if (VAR_23 & VAR_10) {
        FUNC_11(VAR_17,
                "Iterator operand flag VIRTUAL was specified, "
                "but the operand was not NULL");
        return 0;
    }


    if (FUNC_4(*VAR_18)) {

        if ((*VAR_24) & VAR_15
            && FUNC_8(*VAR_18, "operand array with iterator "
                                           "write flag set") < 0) {
            return 0;
        }
        if (!(VAR_22 & VAR_11) && FUNC_10(*VAR_18) == 0) {
            FUNC_11(VAR_17,
                    "Iteration of zero-sized operands is not enabled");
            return 0;
        }
        *VAR_19 = FUNC_3(*VAR_18);

        *VAR_21 = FUNC_5(*VAR_18);
        if (*VAR_21 == ((void*)0)) {
            FUNC_11(VAR_17,
                    "Iterator input operand has no dtype descr");
            return 0;
        }
        FUNC_13(*VAR_21);




        if (!(VAR_22 & VAR_9)) {
            PyArray_Descr *VAR_25 = FUNC_5(*VAR_18);
            if (((VAR_25->flags & (VAR_2 |
                           VAR_1)) != 0) ||
                    (VAR_25 != *VAR_21 &&
                        (((*VAR_21)->flags & (VAR_2 |
                                             VAR_1))) != 0)) {
                FUNC_11(VAR_16,
                        "Iterator operand or requested dtype holds "
                        "references, but the REFS_OK flag was not enabled");
                return 0;
            }
        }





        if (VAR_20 != ((void*)0)) {

            FUNC_13(VAR_20);

            VAR_20 = FUNC_2((PyObject *)(*VAR_18), FUNC_5(*VAR_18),
                                                          VAR_20);
            if (VAR_20 == ((void*)0)) {
                return 0;
            }


            FUNC_12(*VAR_21);
            *VAR_21 = VAR_20;
        }


        if (VAR_23 & VAR_8) {

            if (!FUNC_9((*VAR_21)->byteorder)) {
                PyArray_Descr *VAR_26;


                VAR_26 = FUNC_7(*VAR_21, VAR_12);
                FUNC_12(*VAR_21);
                *VAR_21 = VAR_26;

                FUNC_1("Iterator: Setting NPY_OP_ITFLAG_CAST "
                                    "because of NPY_ITER_NBO\n");

                *VAR_24 |= VAR_13;
            }
        }

        if (VAR_23 & VAR_3) {

            if (!FUNC_0(*VAR_18)) {
                FUNC_1("Iterator: Setting NPY_OP_ITFLAG_CAST "
                                    "because of NPY_ITER_ALIGNED\n");
                *VAR_24 |= VAR_13;
            }
        }




    }
    else {
        FUNC_11(VAR_17,
                "Iterator inputs must be ndarrays");
        return 0;
    }

    return 1;
}

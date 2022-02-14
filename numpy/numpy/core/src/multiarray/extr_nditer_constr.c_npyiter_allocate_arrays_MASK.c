
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_1__ ;


typedef int npyiter_opitflags ;
typedef int npy_uint32 ;
typedef scalar_t__ npy_intp ;
struct TYPE_25__ {scalar_t__ elsize; } ;
typedef int PyTypeObject ;
typedef TYPE_1__ PyArray_Descr ;
typedef TYPE_1__ PyArrayObject ;
typedef int NpyIter_BufferData ;
typedef int NpyIter_AxisData ;
typedef int NpyIter ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 void** FUNC_2 (int *) ;
 void** FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,int,int) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_1__** FUNC_11 (int *) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_15 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 int * FUNC_18 (TYPE_1__*) ;
 scalar_t__ FUNC_19 (TYPE_1__*) ;
 scalar_t__ FUNC_20 (int *,TYPE_1__*,int ,int *,int *,int *,int ,int *) ;
 int * FUNC_21 (TYPE_1__*) ;
 scalar_t__ FUNC_22 (TYPE_1__*,TYPE_1__*) ;
 int VAR_16 ;
 int FUNC_23 (int ,char*) ;
 int VAR_17 ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (int *,int) ;
 TYPE_1__* FUNC_27 (int *,int *,int,int*,int,int *,TYPE_1__*,int*) ;
 int FUNC_28 (int *,int,TYPE_1__*,int,int ,int*) ;
 scalar_t__ FUNC_29 (TYPE_1__*,int) ;
 int FUNC_30 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_31(NpyIter *VAR_18,
                        npy_uint32 VAR_19,
                        PyArray_Descr **VAR_20, PyTypeObject *VAR_21,
                        const npy_uint32 *VAR_22, npyiter_opitflags *VAR_23,
                        int **VAR_24)
{
    npy_uint32 VAR_25 = FUNC_8(VAR_18);
    int VAR_26, VAR_27 = FUNC_9(VAR_18);
    int VAR_28, VAR_29 = FUNC_10(VAR_18);

    int VAR_30 = 0;

    NpyIter_BufferData *VAR_31 = ((void*)0);
    PyArrayObject **VAR_32 = FUNC_11(VAR_18);

    if (VAR_25 & VAR_6) {
        VAR_31 = FUNC_7(VAR_18);
    }

    if (VAR_19 & VAR_2) {
        for (VAR_28 = 0; VAR_28 < VAR_29; ++VAR_28) {
            int VAR_33 = 0;
            int VAR_34;

            if (VAR_32[VAR_28] == ((void*)0)) {

                continue;
            }

            if (!(VAR_23[VAR_28] & VAR_14)) {





                continue;
            }

            for (VAR_34 = 0; VAR_34 < VAR_29; ++VAR_34) {
                if (VAR_34 == VAR_28 || VAR_32[VAR_34] == ((void*)0)) {
                    continue;
                }

                if (!(VAR_23[VAR_34] & VAR_12)) {

                    continue;
                }

                if (VAR_23[VAR_34] & VAR_10) {

                    continue;
                }
                if ((VAR_22[VAR_28] & VAR_4) &&
                    (VAR_22[VAR_34] & VAR_4) &&
                    FUNC_13(VAR_32[VAR_28]) == FUNC_13(VAR_32[VAR_34]) &&
                    FUNC_19(VAR_32[VAR_28]) == FUNC_19(VAR_32[VAR_34]) &&
                    FUNC_14(FUNC_18(VAR_32[VAR_28]),
                                         FUNC_18(VAR_32[VAR_34]),
                                         FUNC_19(VAR_32[VAR_28])) &&
                    FUNC_14(FUNC_21(VAR_32[VAR_28]),
                                         FUNC_21(VAR_32[VAR_34]),
                                         FUNC_19(VAR_32[VAR_28])) &&
                    FUNC_17(VAR_32[VAR_28]) == FUNC_17(VAR_32[VAR_34]) &&
                    FUNC_29(VAR_32[VAR_28], 1) == 0) {

                    continue;
                }





                VAR_33 = FUNC_30(VAR_32[VAR_28],
                                                          VAR_32[VAR_34],
                                                          1);

                if (VAR_33) {
                    VAR_23[VAR_28] |= VAR_10;
                    break;
                }
            }
        }
    }

    for (VAR_28 = 0; VAR_28 < VAR_29; ++VAR_28) {





        if ((VAR_23[VAR_28] &
                (VAR_15 | VAR_13)) ==
                        (VAR_15 | VAR_13)) {
            VAR_30 = 1;
        }


        if (VAR_32[VAR_28] == ((void*)0)) {
            PyArrayObject *VAR_35;
            PyTypeObject *VAR_36;
            int VAR_37 = VAR_27;


            VAR_36 = (VAR_22[VAR_28] & VAR_3) ?
                                                &VAR_16 : VAR_21;


            VAR_35 = FUNC_27(VAR_18, VAR_36,
                                        VAR_19, &VAR_23[VAR_28],
                                        VAR_37,
                                        ((void*)0),
                                        VAR_20[VAR_28],
                                        VAR_24 ? VAR_24[VAR_28] : ((void*)0));
            if (VAR_35 == ((void*)0)) {
                return 0;
            }

            VAR_32[VAR_28] = VAR_35;





            FUNC_28(VAR_18, VAR_28, VAR_32[VAR_28], VAR_37,
                    FUNC_16(VAR_32[VAR_28]), VAR_24 ? VAR_24[VAR_28] : ((void*)0));





            if (FUNC_0(VAR_35)) {
                VAR_23[VAR_28] |= VAR_7;
            }

            VAR_23[VAR_28] &= ~VAR_9;
        }





        else if ((VAR_23[VAR_28] & (VAR_9 |
                         VAR_12 |
                         VAR_14)) == (VAR_9 |
                                                   VAR_12) &&
                          FUNC_19(VAR_32[VAR_28]) == 0) {
            PyArrayObject *VAR_38;
            FUNC_25(VAR_20[VAR_28]);
            VAR_38 = (PyArrayObject *)FUNC_20(
                                        &VAR_16, VAR_20[VAR_28],
                                        0, ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0));
            if (VAR_38 == ((void*)0)) {
                return 0;
            }
            if (FUNC_15(VAR_38, VAR_32[VAR_28]) != 0) {
                FUNC_24(VAR_38);
                return 0;
            }
            FUNC_24(VAR_32[VAR_28]);
            VAR_32[VAR_28] = VAR_38;





            FUNC_28(VAR_18, VAR_28, VAR_32[VAR_28], 0,
                    FUNC_16(VAR_32[VAR_28]), ((void*)0));





            if (FUNC_0(VAR_38)) {
                VAR_23[VAR_28] |= VAR_7;
            }




            VAR_23[VAR_28] |= VAR_8;
            VAR_23[VAR_28] &= ~VAR_9;
            if (VAR_25 & VAR_6) {
                FUNC_3(VAR_31)[VAR_28] = 0;
            }
        }





        else if (((VAR_23[VAR_28] & VAR_9) &&
                        (VAR_22[VAR_28] &
                        (VAR_1|VAR_5))) ||
                 (VAR_23[VAR_28] & VAR_10)) {
            PyArrayObject *VAR_39;
            int VAR_40 = FUNC_19(VAR_32[VAR_28]);


            VAR_39 = FUNC_27(VAR_18, &VAR_16,
                                        VAR_19, &VAR_23[VAR_28],
                                        VAR_40,
                                        FUNC_18(VAR_32[VAR_28]),
                                        VAR_20[VAR_28],
                                        VAR_24 ? VAR_24[VAR_28] : ((void*)0));
            if (VAR_39 == ((void*)0)) {
                return 0;
            }






            if (VAR_23[VAR_28] & VAR_12) {
                if (FUNC_15(VAR_39, VAR_32[VAR_28]) != 0) {
                    FUNC_24(VAR_39);
                    return 0;
                }
            }


            if (VAR_23[VAR_28] & VAR_14) {
                FUNC_25(VAR_32[VAR_28]);
                if (FUNC_22(VAR_39, VAR_32[VAR_28]) < 0) {
                    FUNC_24(VAR_39);
                    return 0;
                }
                VAR_23[VAR_28] |= VAR_11;
            }

            FUNC_24(VAR_32[VAR_28]);
            VAR_32[VAR_28] = VAR_39;





            FUNC_28(VAR_18, VAR_28, VAR_32[VAR_28], VAR_40,
                    FUNC_16(VAR_32[VAR_28]), VAR_24 ? VAR_24[VAR_28] : ((void*)0));





            if (FUNC_0(VAR_39)) {
                VAR_23[VAR_28] |= VAR_7;
            }

            VAR_23[VAR_28] &= ~VAR_9;
        }
        else {




            if ((VAR_23[VAR_28] & VAR_9) &&
                                  !(VAR_25 & VAR_6)) {
                FUNC_23(VAR_17,
                        "Iterator operand required copying or buffering, "
                        "but neither copying nor buffering was enabled");
                return 0;
            }





            if (FUNC_0(VAR_32[VAR_28])) {
                VAR_23[VAR_28] |= VAR_7;
            }
        }


        if (VAR_22[VAR_28] & VAR_0) {
            NpyIter_AxisData *VAR_41 = FUNC_5(VAR_18);
            npy_intp VAR_42 = FUNC_2(VAR_41)[VAR_28];

            if (VAR_42 != VAR_20[VAR_28]->elsize) {
                FUNC_12("Iterator: Setting NPY_OP_ITFLAG_CAST "
                                    "because of NPY_ITER_CONTIG\n");
                VAR_23[VAR_28] |= VAR_9;
                if (!(VAR_25 & VAR_6)) {
                    FUNC_23(VAR_17,
                            "Iterator operand required buffering, "
                            "to be contiguous as requested, but "
                            "buffering is not enabled");
                    return 0;
                }
            }
        }






        if ((VAR_25 & VAR_6) &&
                                !(VAR_23[VAR_28] & VAR_9)) {
            NpyIter_AxisData *VAR_43 = FUNC_5(VAR_18);
            if (VAR_27 <= 1) {
                VAR_23[VAR_28] |= VAR_8;
                FUNC_3(VAR_31)[VAR_28] = FUNC_2(VAR_43)[VAR_28];
            }
            else if (FUNC_19(VAR_32[VAR_28]) > 0) {
                npy_intp VAR_44, VAR_45, VAR_46 = 0, VAR_47;
                npy_intp VAR_48 =
                                    FUNC_6(VAR_25, VAR_27, VAR_29);

                for (VAR_26 = 0; VAR_26 < VAR_27; ++VAR_26) {
                    VAR_47 = FUNC_1(VAR_43);
                    if (VAR_47 != 1) {
                        VAR_46 = FUNC_2(VAR_43)[VAR_28];
                        break;
                    }
                    FUNC_4(VAR_43, 1);
                }
                ++VAR_26;
                FUNC_4(VAR_43, 1);

                for (; VAR_26 < VAR_27; ++VAR_26) {
                    VAR_44 = FUNC_2(VAR_43)[VAR_28];
                    VAR_45 = FUNC_1(VAR_43);
                    if (VAR_45 != 1) {




                        if (VAR_46*VAR_47 != VAR_44) {
                            break;
                        }
                        else {
                            VAR_47 *= VAR_45;
                        }
                    }
                    FUNC_4(VAR_43, 1);
                }





                if (VAR_26 == VAR_27) {
                    VAR_23[VAR_28] |= VAR_8;
                    FUNC_3(VAR_31)[VAR_28] = VAR_46;
                }
            }
        }
    }

    if (VAR_30) {
        for (VAR_28 = 0; VAR_28 < VAR_29; ++VAR_28) {





            if ((VAR_23[VAR_28] &
                    (VAR_15 | VAR_13)) ==
                        (VAR_15 | VAR_13)) {
                if (!FUNC_26(VAR_18, VAR_28)) {
                    return 0;
                }
            }
        }
    }

    return 1;
}

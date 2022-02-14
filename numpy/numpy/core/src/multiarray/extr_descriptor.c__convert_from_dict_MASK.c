
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_1__ ;


struct TYPE_42__ {int alignment; long elsize; char flags; struct TYPE_42__* metadata; struct TYPE_42__* fields; struct TYPE_42__* names; } ;
typedef TYPE_1__ PyObject ;
typedef TYPE_1__ PyArray_Descr ;


 char VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__**) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 long FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_10 () ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,char*,long,...) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int ,char*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_16 (int) ;
 TYPE_1__* FUNC_17 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_18 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 TYPE_1__* FUNC_22 (int) ;
 int FUNC_23 (TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*) ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_25 (TYPE_1__*,int ) ;
 TYPE_1__* VAR_8 ;
 int FUNC_26 (TYPE_1__*) ;
 TYPE_1__* FUNC_27 (TYPE_1__*,int) ;
 scalar_t__ FUNC_28 (int) ;
 scalar_t__ FUNC_29 (TYPE_1__*) ;

__attribute__((used)) static PyArray_Descr *
FUNC_30(PyObject *VAR_9, int VAR_10)
{
    PyArray_Descr *VAR_11;
    PyObject *VAR_12 = ((void*)0);
    PyObject *VAR_13 = ((void*)0);
    PyObject *VAR_14= ((void*)0);
    PyObject *VAR_15 = ((void*)0);
    PyObject *VAR_16 = ((void*)0);
    PyObject *VAR_17, *VAR_18;
    int VAR_19, VAR_20;
    int VAR_21, VAR_22;
    int VAR_23 = 0;

    char VAR_24 = VAR_3;
    int VAR_25 = 0;

    VAR_12 = FUNC_10();
    if (VAR_12 == ((void*)0)) {
        return (PyArray_Descr *)FUNC_14();
    }



    VAR_13 = FUNC_17(VAR_9, "names");
    if (VAR_13 == ((void*)0)) {
        FUNC_24(VAR_12);

        FUNC_12();
        return FUNC_27(VAR_9, VAR_10);
    }
    VAR_15 = FUNC_17(VAR_9, "formats");
    if (VAR_15 == ((void*)0)) {
        FUNC_24(VAR_12);

        FUNC_12();
        FUNC_24(VAR_13);
        return FUNC_27(VAR_9, VAR_10);
    }
    VAR_19 = FUNC_19(VAR_13);
    VAR_14 = FUNC_17(VAR_9, "offsets");
    if (!VAR_14) {
        FUNC_12();
    }
    VAR_16 = FUNC_17(VAR_9, "titles");
    if (!VAR_16) {
        FUNC_12();
    }

    if ((VAR_19 > FUNC_19(VAR_15))
        || (VAR_14 && (VAR_19 > FUNC_19(VAR_14)))
        || (VAR_16 && (VAR_19 > FUNC_19(VAR_16)))) {
        FUNC_15(VAR_5,
                "'names', 'formats', 'offsets', and 'titles' dict "
                "entries must have the same length");
        goto fail;
    }





    VAR_18 = FUNC_17(VAR_9, "aligned");
    if (VAR_18 == ((void*)0)) {
        FUNC_12();
    } else {
        if (VAR_18 == VAR_8) {
            VAR_10 = 1;
        }
        else if (VAR_18 != VAR_6) {
            FUNC_24(VAR_18);
            FUNC_15(VAR_5,
                    "NumPy dtype descriptor includes 'aligned' entry, "
                    "but its value is neither True nor False");
            goto fail;
        }
        FUNC_24(VAR_18);
    }

    VAR_21 = 0;
    for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
        PyObject *VAR_26, *VAR_27, *VAR_28, *VAR_29, *VAR_30, *VAR_31;
        int VAR_32, VAR_33, VAR_34 = 1;
        PyArray_Descr *VAR_35;


        VAR_32 = 2;
        VAR_29 = ((void*)0);
        VAR_28 = FUNC_16(VAR_20);
        if (VAR_16) {
            VAR_29=FUNC_18(VAR_16, VAR_28);
            if (VAR_29 && VAR_29 != VAR_7) {
                VAR_32 = 3;
            }
            else {
                FUNC_26(VAR_29);
            }
            FUNC_12();
        }
        VAR_26 = FUNC_22(VAR_32);
        VAR_27 = FUNC_18(VAR_15, VAR_28);
        if (!VAR_27) {
            FUNC_24(VAR_26);
            FUNC_24(VAR_28);
            goto fail;
        }
        if (VAR_10) {
            VAR_33 = FUNC_1(VAR_27, &VAR_35);
        }
        else {
            VAR_33 = FUNC_2(VAR_27, &VAR_35);
        }
        FUNC_24(VAR_27);
        if (VAR_33 == VAR_1) {
            FUNC_24(VAR_26);
            FUNC_24(VAR_28);
            goto fail;
        }
        FUNC_23(VAR_26, 0, (PyObject *)VAR_35);
        if (VAR_10) {
            VAR_34 = VAR_35->alignment;
            VAR_23 = FUNC_4(VAR_23,VAR_34);
        }
        if (VAR_14) {
            long VAR_36;
            VAR_31 = FUNC_18(VAR_14, VAR_28);
            if (!VAR_31) {
                FUNC_24(VAR_26);
                FUNC_24(VAR_28);
                goto fail;
            }
            VAR_36 = FUNC_5(VAR_31);
            if (FUNC_28(VAR_36)) {
                FUNC_24(VAR_31);
                FUNC_24(VAR_26);
                FUNC_24(VAR_28);
                goto fail;
            }
            FUNC_24(VAR_31);
            if (VAR_36 < 0) {
                FUNC_13(VAR_5, "offset %ld cannot be negative",
                             VAR_36);
                FUNC_24(VAR_26);
                FUNC_24(VAR_28);
                goto fail;
            }

            FUNC_23(VAR_26, 1, FUNC_16(VAR_36));

            if (VAR_36 < VAR_21) {
                VAR_25 = 1;
            }

            if (VAR_10 && VAR_36 % VAR_35->alignment != 0) {
                FUNC_13(VAR_5,
                        "offset %ld for NumPy dtype with fields is "
                        "not divisible by the field alignment %d "
                        "with align=True",
                        VAR_36, VAR_35->alignment);
                VAR_33 = VAR_1;
            }
            else if (VAR_36 + VAR_35->elsize > VAR_21) {
                VAR_21 = VAR_36 + VAR_35->elsize;
            }
        }
        else {
            if (VAR_10 && VAR_34 > 1) {
                VAR_21 = FUNC_0(VAR_21, VAR_34);
            }
            FUNC_23(VAR_26, 1, FUNC_16(VAR_21));
            VAR_21 += VAR_35->elsize;
        }
        if (VAR_33 == VAR_1) {
            FUNC_24(VAR_28);
            FUNC_24(VAR_26);
            goto fail;
        }
        if (VAR_32 == 3) {
            FUNC_23(VAR_26, 2, VAR_29);
        }
        VAR_30 = FUNC_18(VAR_13, VAR_28);
        FUNC_24(VAR_28);
        if (!VAR_30) {
            FUNC_24(VAR_26);
            goto fail;
        }
        if (!FUNC_6(VAR_30)) {
            FUNC_15(VAR_5,
                    "field names must be strings");
            FUNC_24(VAR_26);
            goto fail;
        }


        if (FUNC_8(VAR_12, VAR_30) != ((void*)0)) {
            FUNC_15(VAR_5,
                    "name already used as a name or title");
            FUNC_24(VAR_26);
            goto fail;
        }
        FUNC_11(VAR_12, VAR_30, VAR_26);
        FUNC_24(VAR_30);
        if (VAR_32 == 3) {
            if (FUNC_6(VAR_29)) {
                if (FUNC_8(VAR_12, VAR_29) != ((void*)0)) {
                    FUNC_15(VAR_5,
                            "title already used as a name or title.");
                    FUNC_24(VAR_26);
                    goto fail;
                }
                FUNC_11(VAR_12, VAR_29, VAR_26);
            }
        }
        FUNC_24(VAR_26);
        if (VAR_33 == VAR_1) {
            goto fail;
        }
        VAR_24 |= (VAR_35->flags & VAR_2);
    }

    VAR_11 = FUNC_3(VAR_4);
    if (VAR_11 == ((void*)0)) {
        goto fail;
    }
    if (VAR_23 > 1) {
        VAR_21 = FUNC_0(VAR_21, VAR_23);
    }
    if (VAR_10) {
        VAR_11->alignment = VAR_23;
    }
    VAR_11->elsize = VAR_21;
    if (!FUNC_21(VAR_13)) {
        FUNC_25(VAR_13, FUNC_20(VAR_13));
        if (VAR_13 == ((void*)0)) {
            FUNC_24(VAR_11);
            goto fail;
        }
    }
    VAR_11->names = VAR_13;
    VAR_11->fields = VAR_12;
    VAR_11->flags = VAR_24;

    VAR_13 = ((void*)0);
    VAR_12 = ((void*)0);





    if (VAR_25 && FUNC_7(VAR_11)) {
        if (FUNC_29(VAR_11) < 0) {
            FUNC_24(VAR_11);
            goto fail;
        }
    }


    if (VAR_10) {
        VAR_11->flags |= VAR_0;
    }


    VAR_18 = FUNC_17(VAR_9, "itemsize");
    if (VAR_18 == ((void*)0)) {
        FUNC_12();
    } else {
        VAR_22 = (int)FUNC_5(VAR_18);
        FUNC_24(VAR_18);
        if (FUNC_28(VAR_22)) {
            FUNC_24(VAR_11);
            goto fail;
        }

        if (VAR_22 < VAR_11->elsize) {
            FUNC_13(VAR_5,
                    "NumPy dtype descriptor requires %d bytes, "
                    "cannot override to smaller itemsize of %d",
                    VAR_11->elsize, VAR_22);
            FUNC_24(VAR_11);
            goto fail;
        }

        if (VAR_10 && VAR_22 % VAR_11->alignment != 0) {
            FUNC_13(VAR_5,
                    "NumPy dtype descriptor requires alignment of %d bytes, "
                    "which is not divisible into the specified itemsize %d",
                    VAR_11->alignment, VAR_22);
            FUNC_24(VAR_11);
            goto fail;
        }

        VAR_11->elsize = VAR_22;
    }


    VAR_17 = FUNC_17(VAR_9, "metadata");

    if (VAR_17 == ((void*)0)) {
        FUNC_12();
    }
    else if (VAR_11->metadata == ((void*)0)) {
        VAR_11->metadata = VAR_17;
    }
    else {
        int VAR_37 = FUNC_9(VAR_11->metadata, VAR_17, 0);
        FUNC_24(VAR_17);
        if (VAR_37 < 0) {
            FUNC_24(VAR_11);
            goto fail;
        }
    }

    FUNC_26(VAR_12);
    FUNC_26(VAR_13);
    FUNC_26(VAR_15);
    FUNC_26(VAR_14);
    FUNC_26(VAR_16);
    return VAR_11;

 fail:
    FUNC_26(VAR_12);
    FUNC_26(VAR_13);
    FUNC_26(VAR_15);
    FUNC_26(VAR_14);
    FUNC_26(VAR_16);
    return ((void*)0);
}

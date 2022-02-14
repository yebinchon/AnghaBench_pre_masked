
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_1__ ;


struct TYPE_42__ {char flags; int alignment; int elsize; struct TYPE_42__* names; struct TYPE_42__* fields; } ;
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
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ,char*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_11 (long) ;
 TYPE_1__* FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 TYPE_1__* FUNC_16 (TYPE_1__*,int) ;
 int FUNC_17 (TYPE_1__*) ;
 TYPE_1__* FUNC_18 (TYPE_1__*,int,int) ;
 TYPE_1__* FUNC_19 (int) ;
 int FUNC_20 (TYPE_1__*,int,TYPE_1__*) ;
 scalar_t__ FUNC_21 (TYPE_1__*) ;
 TYPE_1__* FUNC_22 (char*,int) ;
 scalar_t__ FUNC_23 (TYPE_1__*) ;
 TYPE_1__* FUNC_24 (TYPE_1__*) ;
 TYPE_1__* FUNC_25 (TYPE_1__*) ;
 scalar_t__ FUNC_26 (TYPE_1__*) ;
 int FUNC_27 (TYPE_1__*) ;
 int FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (TYPE_1__*) ;

__attribute__((used)) static PyArray_Descr *
FUNC_30(PyObject *VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10;
    int VAR_11;
    PyObject *VAR_12, *VAR_13, *VAR_14;
    PyObject *VAR_15, *VAR_16, *VAR_17;
    PyObject *VAR_18;
    PyArray_Descr *VAR_19;
    PyArray_Descr *VAR_20;

    char VAR_21 = VAR_3;
    int VAR_22 = 0;

    VAR_8 = FUNC_13(VAR_6);
    VAR_18 = FUNC_19(VAR_8);
    if (!VAR_18) {
        return ((void*)0);
    }
    VAR_10 = 0;
    VAR_12 = FUNC_7();
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
        VAR_13 = FUNC_12(VAR_6, VAR_9);
        if (!FUNC_15(VAR_13) || (FUNC_17(VAR_13) < 2)) {
            goto fail;
        }
        VAR_15 = FUNC_16(VAR_13, 0);
        if (FUNC_5(VAR_15)) {
            VAR_17 = ((void*)0);
        }
        else if (FUNC_15(VAR_15)) {
            if (FUNC_17(VAR_15) != 2) {
                goto fail;
            }
            VAR_17 = FUNC_16(VAR_15, 0);
            VAR_15 = FUNC_16(VAR_15, 1);
            if (!FUNC_5(VAR_15)) {
                goto fail;
            }
        }
        else {
            goto fail;
        }


        FUNC_28(VAR_15);



        if (FUNC_26(VAR_15)) {
            PyObject *VAR_23 = FUNC_24(VAR_15);
            FUNC_27(VAR_15);
            if (VAR_23 == ((void*)0)) {
                goto fail;
            }
            VAR_15 = VAR_23;
        }

        if (FUNC_23(VAR_15) == 0) {
            FUNC_27(VAR_15);
            if (VAR_17 == ((void*)0)) {
                VAR_15 = FUNC_22("f%d", VAR_9);
            }
            else {
                VAR_15 = VAR_17;
                FUNC_28(VAR_15);
            }

        }
        FUNC_20(VAR_18, VAR_9, VAR_15);



        if (FUNC_17(VAR_13) == 2) {
            if (VAR_7) {
                VAR_11 = FUNC_1(FUNC_16(VAR_13, 1),
                                                        &VAR_20);
            }
            else {
                VAR_11 = FUNC_2(FUNC_16(VAR_13, 1), &VAR_20);
            }
        }
        else if (FUNC_17(VAR_13) == 3) {
            VAR_14 = FUNC_18(VAR_13, 1, 3);
            if (VAR_7) {
                VAR_11 = FUNC_1(VAR_14, &VAR_20);
            }
            else {
                VAR_11 = FUNC_2(VAR_14, &VAR_20);
            }
            FUNC_27(VAR_14);
        }
        else {
            goto fail;
        }
        if (VAR_11 == VAR_1) {
            goto fail;
        }

        if ((FUNC_6(VAR_12, VAR_15) != ((void*)0))
             || (VAR_17
                 && FUNC_5(VAR_17)
                 && (FUNC_6(VAR_12, VAR_17) != ((void*)0)))) {



            FUNC_9(VAR_5,
                    "field '%s' occurs more than once", FUNC_14(VAR_15));



            FUNC_27(VAR_20);
            goto fail;
        }
        VAR_21 |= (VAR_20->flags & VAR_2);
        if (VAR_7) {
            int VAR_24;

            VAR_24 = VAR_20->alignment;
            if (VAR_24 > 1) {
                VAR_10 = FUNC_0(VAR_10, VAR_24);
            }
            VAR_22 = FUNC_4(VAR_22, VAR_24);
        }
        VAR_16 = FUNC_19((VAR_17 == ((void*)0) ? 2 : 3));
        FUNC_20(VAR_16, 0, (PyObject *)VAR_20);
        FUNC_20(VAR_16, 1, FUNC_11((long) VAR_10));






        if (VAR_17 != ((void*)0)) {
            FUNC_28(VAR_17);
            FUNC_20(VAR_16, 2, VAR_17);
            FUNC_8(VAR_12, VAR_15, VAR_16);
            if (FUNC_5(VAR_17)) {
                if (FUNC_6(VAR_12, VAR_17) != ((void*)0)) {
                    FUNC_10(VAR_5,
                            "title already used as a name or title.");
                    FUNC_27(VAR_16);
                    goto fail;
                }
                FUNC_8(VAR_12, VAR_17, VAR_16);
            }
        }
        else {
            FUNC_8(VAR_12, VAR_15, VAR_16);
        }

        VAR_10 += VAR_20->elsize;
        FUNC_27(VAR_16);
    }

    if (VAR_22 > 1) {
        VAR_10 = FUNC_0(VAR_10, VAR_22);
    }

    VAR_19 = FUNC_3(VAR_4);
    if (VAR_19 == ((void*)0)) {
        FUNC_29(VAR_12);
        FUNC_29(VAR_18);
        return ((void*)0);
    }
    VAR_19->fields = VAR_12;
    VAR_19->names = VAR_18;
    VAR_19->elsize = VAR_10;
    VAR_19->flags = VAR_21;


    if (VAR_7) {
        VAR_19->flags |= VAR_0;
        VAR_19->alignment = VAR_22;
    }
    return VAR_19;

 fail:
    FUNC_27(VAR_12);
    FUNC_27(VAR_18);
    return ((void*)0);

}

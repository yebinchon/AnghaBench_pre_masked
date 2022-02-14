
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_63__ TYPE_57__ ;
typedef struct TYPE_62__ TYPE_3__ ;
typedef struct TYPE_61__ TYPE_1__ ;


struct TYPE_63__ {TYPE_1__* shape; TYPE_1__* base; } ;
struct TYPE_62__ {int meta; } ;
struct TYPE_61__ {int hash; char byteorder; int elsize; int alignment; char flags; struct TYPE_61__* metadata; scalar_t__ c_metadata; int type_num; struct TYPE_61__* fields; struct TYPE_61__* names; TYPE_57__* subarray; } ;
typedef int Py_ssize_t ;
typedef TYPE_1__ PyObject ;
typedef TYPE_1__ PyArray_Descr ;
typedef int PyArray_DatetimeMetaData ;
typedef TYPE_3__ PyArray_DatetimeDTypeMetaData ;
typedef int PyArray_ArrayDescr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (TYPE_57__*) ;
 TYPE_57__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char**,int*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_11 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_12 () ;
 scalar_t__ FUNC_13 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int ,char*,...) ;
 TYPE_1__* FUNC_17 () ;
 int FUNC_18 (int ,TYPE_1__*) ;
 int FUNC_19 (int ,char*) ;
 int VAR_1 ;
 int FUNC_20 (TYPE_1__*) ;
 TYPE_1__* FUNC_21 (int) ;
 scalar_t__ FUNC_22 (TYPE_1__*) ;
 TYPE_1__* FUNC_23 (TYPE_1__*) ;
 TYPE_1__* FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (TYPE_1__*) ;
 scalar_t__ FUNC_26 (TYPE_1__*) ;
 TYPE_1__* FUNC_27 (TYPE_1__*,int) ;
 int FUNC_28 (TYPE_1__*) ;
 TYPE_1__* FUNC_29 (int) ;
 int FUNC_30 (TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_31 (TYPE_1__*) ;
 scalar_t__ FUNC_32 (int ) ;
 int FUNC_33 (TYPE_1__*) ;
 int FUNC_34 (TYPE_1__**,int ) ;
 TYPE_1__* FUNC_35 (char*) ;
 TYPE_1__* FUNC_36 (TYPE_1__*) ;
 scalar_t__ FUNC_37 (TYPE_1__*) ;
 TYPE_1__* FUNC_38 (TYPE_1__*,char*,char*) ;
 TYPE_1__* FUNC_39 (char*,TYPE_1__*) ;
 int FUNC_40 (TYPE_1__*) ;
 int FUNC_41 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_42 (TYPE_1__*) ;
 int FUNC_43 (TYPE_1__*) ;
 char FUNC_44 (TYPE_1__*) ;
 scalar_t__ FUNC_45 (TYPE_1__*) ;
 scalar_t__ FUNC_46 (TYPE_1__*,int *,int ) ;
 int FUNC_47 (char*,char*,int) ;

__attribute__((used)) static PyObject *
FUNC_48(PyArray_Descr *VAR_4, PyObject *VAR_5)
{
    int VAR_6 = -1, VAR_7 = -1;
    int VAR_8 = 4;
    char VAR_9;
    PyObject *VAR_10;
    PyObject *VAR_11, *VAR_12, *VAR_13 = ((void*)0), *VAR_14=((void*)0);
    int VAR_15 = 1;
    int VAR_16 = 0;
    char VAR_17;

    if (VAR_4->fields == VAR_2) {
        VAR_3;
    }
    if (FUNC_28(VAR_5) != 1
            || !(FUNC_26(FUNC_27(VAR_5, 0)))) {
        FUNC_14();
        return ((void*)0);
    }
    switch (FUNC_28(FUNC_27(VAR_5,0))) {
    case 9:
        if (!FUNC_0(VAR_5, "(iOOOOiiiO):__setstate__",
                    &VAR_8, &VAR_10,
                    &VAR_11, &VAR_13, &VAR_12, &VAR_6,
                    &VAR_7, &VAR_16, &VAR_14)) {
            FUNC_15();
            return ((void*)0);
        }
        break;
    case 8:
        if (!FUNC_0(VAR_5, "(iOOOOiii):__setstate__",
                    &VAR_8, &VAR_10,
                    &VAR_11, &VAR_13, &VAR_12, &VAR_6,
                    &VAR_7, &VAR_16)) {
            return ((void*)0);
        }
        break;
    case 7:
        if (!FUNC_0(VAR_5, "(iOOOOii):__setstate__",
                    &VAR_8, &VAR_10,
                    &VAR_11, &VAR_13, &VAR_12, &VAR_6,
                    &VAR_7)) {
            return ((void*)0);
        }
        break;
    case 6:
        if (!FUNC_0(VAR_5, "(iOOOii):__setstate__",
                    &VAR_8,
                    &VAR_10, &VAR_11, &VAR_12,
                    &VAR_6, &VAR_7)) {
            return ((void*)0);
        }
        break;
    case 5:
        VAR_8 = 0;
        if (!FUNC_0(VAR_5, "(OOOii):__setstate__",
                    &VAR_10, &VAR_11, &VAR_12, &VAR_6,
                    &VAR_7)) {
            return ((void*)0);
        }
        break;
    default:

        if (FUNC_28(FUNC_27(VAR_5,0)) > 5) {
            VAR_8 = FUNC_20(FUNC_27(VAR_5, 0));
        }
        else {
            VAR_8 = -1;
        }
    }





    if (VAR_8 < 0 || VAR_8 > 4) {
        FUNC_16(VAR_1,
                     "can't handle version %d of numpy.dtype pickle",
                     VAR_8);
        return ((void*)0);
    }

    VAR_4->hash = -1;

    if (VAR_8 == 1 || VAR_8 == 0) {
        if (VAR_12 != VAR_2) {
            PyObject *VAR_18, *VAR_19;
            VAR_18 = FUNC_21(-1);
            VAR_19 = FUNC_11(VAR_12, VAR_18);
            if (!VAR_19) {
                return ((void*)0);
            }
            FUNC_41(VAR_19);
            VAR_13 = VAR_19;
            FUNC_10(VAR_12, VAR_18);
            VAR_15 = 0;
        }
        else {
            VAR_13 = VAR_2;
        }
    }


    if (FUNC_37(VAR_10) || FUNC_6(VAR_10)) {
        PyObject *VAR_20 = ((void*)0);
        char *VAR_21;
        Py_ssize_t VAR_22;

        if (FUNC_37(VAR_10)) {
            VAR_20 = FUNC_36(VAR_10);
            if (VAR_20 == ((void*)0)) {
                return ((void*)0);
            }
            VAR_10 = VAR_20;
        }

        if (FUNC_5(VAR_10, &VAR_21, &VAR_22) < 0) {
            FUNC_42(VAR_20);
            return ((void*)0);
        }
        if (VAR_22 != 1) {
            FUNC_19(VAR_1,
                            "endian is not 1-char string in Numpy dtype unpickling");
            FUNC_42(VAR_20);
            return ((void*)0);
        }
        VAR_9 = VAR_21[0];
        FUNC_42(VAR_20);
    }
    else {
        FUNC_19(VAR_1,
                        "endian is not a string in Numpy dtype unpickling");
        return ((void*)0);
    }

    if ((VAR_12 == VAR_2 && VAR_13 != VAR_2) ||
        (VAR_13 == VAR_2 && VAR_12 != VAR_2)) {
        FUNC_16(VAR_1,
                "inconsistent fields and names in Numpy dtype unpickling");
        return ((void*)0);
    }

    if (VAR_13 != VAR_2 && !FUNC_26(VAR_13)) {
        FUNC_16(VAR_1,
                "non-tuple names in Numpy dtype unpickling");
        return ((void*)0);
    }

    if (VAR_12 != VAR_2 && !FUNC_9(VAR_12)) {
        FUNC_16(VAR_1,
                "non-dict fields in Numpy dtype unpickling");
        return ((void*)0);
    }

    if (VAR_9 != '|' && FUNC_2(VAR_9)) {
        VAR_9 = '=';
    }
    VAR_4->byteorder = VAR_9;
    if (VAR_4->subarray) {
        FUNC_42(VAR_4->subarray->base);
        FUNC_42(VAR_4->subarray->shape);
        FUNC_3(VAR_4->subarray);
    }
    VAR_4->subarray = ((void*)0);

    if (VAR_11 != VAR_2) {
        PyObject *VAR_23;





        if (!(FUNC_26(VAR_11) &&
              FUNC_31(VAR_11) == 2 &&
              FUNC_1(FUNC_27(VAR_11, 0)))) {
            FUNC_16(VAR_1,
                         "incorrect subarray in __setstate__");
            return ((void*)0);
        }
        VAR_23 = FUNC_27(VAR_11, 1);
        if (FUNC_22(VAR_23)) {
            PyObject *VAR_24;



            VAR_24 = FUNC_23(VAR_23);

            if (VAR_24 == ((void*)0)) {
                return ((void*)0);
            }
            VAR_23 = FUNC_39("(O)", VAR_24);
            FUNC_40(VAR_24);
            if (VAR_23 == ((void*)0)) {
                return ((void*)0);
            }
        }
        else if (FUNC_45(VAR_23)) {
            FUNC_41(VAR_23);
        }
        else {
            FUNC_16(VAR_1,
                         "incorrect subarray shape in __setstate__");
            return ((void*)0);
        }

        VAR_4->subarray = FUNC_4(sizeof(PyArray_ArrayDescr));
        if (!FUNC_7(VAR_4)) {
            return FUNC_17();
        }
        VAR_4->subarray->base = (PyArray_Descr *)FUNC_27(VAR_11, 0);
        FUNC_41(VAR_4->subarray->base);
        VAR_4->subarray->shape = VAR_23;
    }

    if (VAR_12 != VAR_2) {



        Py_ssize_t VAR_25;
        int VAR_26 = 1;
        PyObject *VAR_27;

        for (VAR_25 = 0; VAR_25 < FUNC_28(VAR_13); ++VAR_25) {
            VAR_27 = FUNC_27(VAR_13, VAR_25);
            if (!FUNC_33(VAR_27)) {
                VAR_26 = 0;
                break;
            }
        }

        if (VAR_26) {
            FUNC_42(VAR_4->fields);
            VAR_4->fields = VAR_12;
            FUNC_41(VAR_12);
            FUNC_42(VAR_4->names);
            VAR_4->names = VAR_13;
            if (VAR_15) {
                FUNC_41(VAR_13);
            }
        }
        else {
            FUNC_16(VAR_1,
                "non-string names in Numpy dtype unpickling");
            return ((void*)0);

        }
    }

    if (FUNC_32(VAR_4->type_num)) {
        VAR_4->elsize = VAR_6;
        VAR_4->alignment = VAR_7;
    }







    VAR_17 = VAR_16;
    if (VAR_17 != VAR_16) {
        FUNC_16(VAR_1,
                     "incorrect value for flags variable (overflow)");
        return ((void*)0);
    }
    else {
        VAR_4->flags = VAR_17;
    }

    if (VAR_8 < 3) {
        VAR_4->flags = FUNC_44(VAR_4);
    }





    if (VAR_14 == VAR_2) {
        VAR_14 = ((void*)0);
    }

    if (FUNC_8(VAR_4) && (VAR_14 != ((void*)0))) {
        PyObject *VAR_28, *VAR_29;
        PyArray_DatetimeMetaData VAR_30;

        if ((! FUNC_26(VAR_14)) || (FUNC_31(VAR_14) != 2)) {
            VAR_29 = FUNC_35("Invalid datetime dtype (metadata, c_metadata): ");
            FUNC_34(&VAR_29, FUNC_25(VAR_14));
            FUNC_18(VAR_1, VAR_29);
            FUNC_40(VAR_29);
            return ((void*)0);
        }

        if (FUNC_46(
                                    FUNC_27(VAR_14, 1),
                                    &VAR_30,
                                    VAR_0) < 0) {
            return ((void*)0);
        }

        VAR_28 = VAR_4->metadata;
        VAR_4->metadata = FUNC_27(VAR_14, 0);
        FUNC_47((char *) &((PyArray_DatetimeDTypeMetaData *)VAR_4->c_metadata)->meta,
               (char *) &VAR_30,
               sizeof(PyArray_DatetimeMetaData));
        FUNC_43(VAR_4->metadata);
        FUNC_42(VAR_28);
    }
    else {
        PyObject *VAR_31 = VAR_4->metadata;
        VAR_4->metadata = VAR_14;
        FUNC_43(VAR_4->metadata);
        FUNC_42(VAR_31);
    }

    VAR_3;
}

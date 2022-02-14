
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayFlagsObject ;


 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 int * FUNC_17 (int *) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (char*,char*,int) ;
 int FUNC_20 (char*,char*,int) ;

__attribute__((used)) static PyObject *
FUNC_21(PyArrayFlagsObject *VAR_1, PyObject *VAR_2)
{
    char *VAR_3 = ((void*)0);
    char VAR_4[16];
    int VAR_5;
    if (FUNC_5(VAR_2)) {
        PyObject *VAR_6;
        VAR_6 = FUNC_4(VAR_2);
        if (VAR_6 == ((void*)0)) {
            return ((void*)0);
        }
        VAR_3 = FUNC_0(VAR_6);
        VAR_5 = FUNC_2(VAR_6);
        if (VAR_5 > 16) {
            FUNC_6(VAR_6);
            goto fail;
        }
        FUNC_19(VAR_4, VAR_3, VAR_5);
        FUNC_6(VAR_6);
        VAR_3 = VAR_4;
    }
    else if (FUNC_1(VAR_2)) {
        VAR_3 = FUNC_0(VAR_2);
        VAR_5 = FUNC_2(VAR_2);
    }
    else {
        goto fail;
    }
    switch(VAR_5) {
    case 1:
        switch(VAR_3[0]) {
        case 'C':
            return FUNC_10(VAR_1);
        case 'F':
            return FUNC_14(VAR_1);
        case 'W':
            return FUNC_17(VAR_1);
        case 'B':
            return FUNC_8(VAR_1);
        case 'O':
            return FUNC_15(VAR_1);
        case 'A':
            return FUNC_7(VAR_1);
        case 'X':
            return FUNC_18(VAR_1);
        case 'U':
            return FUNC_16(VAR_1);
        default:
            goto fail;
        }
        break;
    case 2:
        if (FUNC_20(VAR_3, "CA", VAR_5) == 0) {
            return FUNC_9(VAR_1);
        }
        if (FUNC_20(VAR_3, "FA", VAR_5) == 0) {
            return FUNC_11(VAR_1);
        }
        break;
    case 3:
        if (FUNC_20(VAR_3, "FNC", VAR_5) == 0) {
            return FUNC_12(VAR_1);
        }
        break;
    case 4:
        if (FUNC_20(VAR_3, "FORC", VAR_5) == 0) {
            return FUNC_13(VAR_1);
        }
        break;
    case 6:
        if (FUNC_20(VAR_3, "CARRAY", VAR_5) == 0) {
            return FUNC_9(VAR_1);
        }
        if (FUNC_20(VAR_3, "FARRAY", VAR_5) == 0) {
            return FUNC_11(VAR_1);
        }
        break;
    case 7:
        if (FUNC_20(VAR_3,"FORTRAN",VAR_5) == 0) {
            return FUNC_14(VAR_1);
        }
        if (FUNC_20(VAR_3,"BEHAVED",VAR_5) == 0) {
            return FUNC_8(VAR_1);
        }
        if (FUNC_20(VAR_3,"OWNDATA",VAR_5) == 0) {
            return FUNC_15(VAR_1);
        }
        if (FUNC_20(VAR_3,"ALIGNED",VAR_5) == 0) {
            return FUNC_7(VAR_1);
        }
        break;
    case 9:
        if (FUNC_20(VAR_3,"WRITEABLE",VAR_5) == 0) {
            return FUNC_17(VAR_1);
        }
        break;
    case 10:
        if (FUNC_20(VAR_3,"CONTIGUOUS",VAR_5) == 0) {
            return FUNC_10(VAR_1);
        }
        break;
    case 12:
        if (FUNC_20(VAR_3, "UPDATEIFCOPY", VAR_5) == 0) {
            return FUNC_16(VAR_1);
        }
        if (FUNC_20(VAR_3, "C_CONTIGUOUS", VAR_5) == 0) {
            return FUNC_10(VAR_1);
        }
        if (FUNC_20(VAR_3, "F_CONTIGUOUS", VAR_5) == 0) {
            return FUNC_14(VAR_1);
        }
        break;
    case 15:
        if (FUNC_20(VAR_3, "WRITEBACKIFCOPY", VAR_5) == 0) {
            return FUNC_18(VAR_1);
        }
        break;
    }

 fail:
    FUNC_3(VAR_0, "Unknown flag");
    return ((void*)0);
}

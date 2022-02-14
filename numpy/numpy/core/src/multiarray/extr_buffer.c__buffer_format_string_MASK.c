
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int npy_longlong ;
typedef int buf ;
typedef int _tmp_string_t ;
struct TYPE_7__ {int type_num; scalar_t__ elsize; char byteorder; int type; int fields; int * names; TYPE_1__* subarray; } ;
struct TYPE_6__ {TYPE_2__* base; int * shape; } ;
typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_2__ PyArray_Descr ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (char*,int,char*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,int) ;
 int * FUNC_12 (char*,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,char) ;
 scalar_t__ FUNC_16 (int *,int *) ;
 scalar_t__ FUNC_17 (int *,char*) ;
 int FUNC_18 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_19 (int) ;
 scalar_t__ FUNC_20 (scalar_t__) ;

__attribute__((used)) static int
FUNC_21(PyArray_Descr *VAR_3, _tmp_string_t *VAR_4,
                      PyObject* VAR_5, Py_ssize_t *VAR_6,
                      char *VAR_7)
{
    int VAR_8;
    char VAR_9 = '@';
    Py_ssize_t VAR_10 = 0;

    if (VAR_7 == ((void*)0)) {
        VAR_7 = &VAR_9;
    }
    if (VAR_6 == ((void*)0)) {
        VAR_6 = &VAR_10;
    }

    if (VAR_3->subarray) {
        PyObject *VAR_11, *VAR_12;
        Py_ssize_t VAR_13 = 1;
        Py_ssize_t VAR_14;
        Py_ssize_t VAR_15;
        char VAR_16[128];
        int VAR_17;

        if (FUNC_8(VAR_3->subarray->shape)) {
            VAR_12 = VAR_3->subarray->shape;
            FUNC_14(VAR_12);
        }
        else {
            VAR_12 = FUNC_12("(O)", VAR_3->subarray->shape);
        }

        if (FUNC_15(VAR_4, '(') < 0) {
            VAR_17 = -1;
            goto subarray_fail;
        }
        for (VAR_8 = 0; VAR_8 < FUNC_10(VAR_12); ++VAR_8) {
            if (VAR_8 > 0) {
                if (FUNC_15(VAR_4, ',') < 0) {
                    VAR_17 = -1;
                    goto subarray_fail;
                }
            }
            VAR_11 = FUNC_9(VAR_12, VAR_8);
            VAR_14 = FUNC_6(VAR_11, ((void*)0));

            FUNC_7(VAR_16, sizeof(VAR_16), "%ld", (long)VAR_14);
            if (FUNC_17(VAR_4, VAR_16) < 0) {
                VAR_17 = -1;
                goto subarray_fail;
            }
            VAR_13 *= VAR_14;
        }
        if (FUNC_15(VAR_4, ')') < 0) {
            VAR_17 = -1;
            goto subarray_fail;
        }

        VAR_15 = *VAR_6;
        VAR_17 = FUNC_21(VAR_3->subarray->base, VAR_4, VAR_5, VAR_6,
                                    VAR_7);
        *VAR_6 = VAR_15 + (*VAR_6 - VAR_15) * VAR_13;

    subarray_fail:
        FUNC_13(VAR_12);
        return VAR_17;
    }
    else if (FUNC_1(VAR_3)) {
        Py_ssize_t VAR_18 = *VAR_6;

        if (FUNC_17(VAR_4, "T{") < 0) return -1;
        for (VAR_8 = 0; VAR_8 < FUNC_10(VAR_3->names); ++VAR_8) {
            PyObject *VAR_19, *VAR_20, *VAR_21;
            PyArray_Descr *VAR_22;
            Py_ssize_t VAR_23;
            int VAR_24;

            VAR_19 = FUNC_9(VAR_3->names, VAR_8);
            VAR_20 = FUNC_2(VAR_3->fields, VAR_19);

            VAR_22 = (PyArray_Descr*)FUNC_11(VAR_20, 0);
            VAR_21 = FUNC_11(VAR_20, 1);
            VAR_23 = FUNC_5(VAR_21);
            if (FUNC_20(VAR_23)) {
                return -1;
            }
            VAR_23 += VAR_18;


            if (*VAR_6 > VAR_23) {
                FUNC_4(
                    VAR_2,
                    "dtypes with overlapping or out-of-order fields are not "
                    "representable as buffers. Consider reordering the fields."
                );
                return -1;
            }
            while (*VAR_6 < VAR_23) {
                if (FUNC_15(VAR_4, 'x') < 0) return -1;
                ++*VAR_6;
            }


            VAR_24 = FUNC_21(VAR_22, VAR_4, VAR_5, VAR_6,
                                  VAR_7);
            if (VAR_24 < 0) {
                return -1;
            }


            if (FUNC_16(VAR_4, VAR_19) < 0) return -1;
        }
        if (FUNC_15(VAR_4, '}') < 0) return -1;
    }
    else {
        int VAR_25 = 1;
        int VAR_26;
        int VAR_27 = (VAR_3->type_num == 139 ||
                                   VAR_3->type_num == 145);
        if (sizeof(npy_longlong) != 8) {
            VAR_27 = VAR_27 || (
                VAR_3->type_num == 138 ||
                VAR_3->type_num == 131);
        }

        *VAR_6 += VAR_3->elsize;

        if (FUNC_0(VAR_5, VAR_0)) {

            VAR_26 = 1;
        }
        else {
            VAR_26 = FUNC_18(VAR_3,
                                              (PyArrayObject*)VAR_5, *VAR_6);
        }

        if (VAR_3->byteorder == '=' && VAR_26) {

            VAR_25 = 0;
            if (*VAR_7 != '@') {
                if (FUNC_15(VAR_4, '@') < 0) return -1;
                *VAR_7 = '@';
            }
        }
        else if (VAR_3->byteorder == '=' && VAR_27) {

            VAR_25 = 0;
            if (*VAR_7 != '^') {
                if (FUNC_15(VAR_4, '^') < 0) return -1;
                *VAR_7 = '^';
            }
        }
        else if (VAR_3->byteorder == '<' || VAR_3->byteorder == '>' ||
                 VAR_3->byteorder == '=') {
            VAR_25 = 1;
            if (*VAR_7 != VAR_3->byteorder) {
                if (FUNC_15(VAR_4, VAR_3->byteorder) < 0) return -1;
                *VAR_7 = VAR_3->byteorder;
            }

            if (VAR_27) {




                FUNC_3(VAR_2,
                             "cannot expose native-only dtype '%c' in "
                             "non-native byte order '%c' via buffer interface",
                             VAR_3->type, VAR_3->byteorder);
                return -1;
            }
        }

        switch (VAR_3->type_num) {
        case 149: if (FUNC_15(VAR_4, '?') < 0) return -1; break;
        case 148: if (FUNC_15(VAR_4, 'b') < 0) return -1; break;
        case 134: if (FUNC_15(VAR_4, 'B') < 0) return -1; break;
        case 136: if (FUNC_15(VAR_4, 'h') < 0) return -1; break;
        case 129: if (FUNC_15(VAR_4, 'H') < 0) return -1; break;
        case 141: if (FUNC_15(VAR_4, 'i') < 0) return -1; break;
        case 133: if (FUNC_15(VAR_4, 'I') < 0) return -1; break;
        case 140:
            if (VAR_25 && (VAR_1 == 8)) {
                if (FUNC_15(VAR_4, 'q') < 0) return -1;
            }
            else {
                if (FUNC_15(VAR_4, 'l') < 0) return -1;
            }
            break;
        case 132:
            if (VAR_25 && (VAR_1 == 8)) {
                if (FUNC_15(VAR_4, 'Q') < 0) return -1;
            }
            else {
                if (FUNC_15(VAR_4, 'L') < 0) return -1;
            }
            break;
        case 138: if (FUNC_15(VAR_4, 'q') < 0) return -1; break;
        case 131: if (FUNC_15(VAR_4, 'Q') < 0) return -1; break;
        case 142: if (FUNC_15(VAR_4, 'e') < 0) return -1; break;
        case 143: if (FUNC_15(VAR_4, 'f') < 0) return -1; break;
        case 144: if (FUNC_15(VAR_4, 'd') < 0) return -1; break;
        case 139: if (FUNC_15(VAR_4, 'g') < 0) return -1; break;
        case 146: if (FUNC_17(VAR_4, "Zf") < 0) return -1; break;
        case 147: if (FUNC_17(VAR_4, "Zd") < 0) return -1; break;
        case 145: if (FUNC_17(VAR_4, "Zg") < 0) return -1; break;


        case 137: if (FUNC_15(VAR_4, 'O') < 0) return -1; break;
        case 135: {
            char VAR_28[128];
            FUNC_7(VAR_28, sizeof(VAR_28), "%ds", VAR_3->elsize);
            if (FUNC_17(VAR_4, VAR_28) < 0) return -1;
            break;
        }
        case 130: {

            char VAR_29[128];
            FUNC_19(VAR_3->elsize % 4 == 0);
            FUNC_7(VAR_29, sizeof(VAR_29), "%dw", VAR_3->elsize / 4);
            if (FUNC_17(VAR_4, VAR_29) < 0) return -1;
            break;
        }
        case 128: {

            char VAR_30[128];
            FUNC_7(VAR_30, sizeof(VAR_30), "%dx", VAR_3->elsize);
            if (FUNC_17(VAR_4, VAR_30) < 0) return -1;
            break;
        }
        default:
            FUNC_3(VAR_2,
                         "cannot include dtype '%c' in a buffer",
                         VAR_3->type);
            return -1;
        }
    }

    return 0;
}

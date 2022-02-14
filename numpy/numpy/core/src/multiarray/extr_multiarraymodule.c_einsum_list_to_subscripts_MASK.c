
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_intp ;
typedef int npy_bool ;
typedef int PyObject ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 long FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*) ;
 int * FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_8(PyObject *VAR_2, char *VAR_3, int VAR_4)
{
    int VAR_5 = 0, VAR_6 = 0;
    npy_intp VAR_7, VAR_8;
    PyObject *VAR_9;

    VAR_2 = FUNC_4(VAR_2, "the subscripts for each operand must "
                               "be a list or a tuple");
    if (VAR_2 == ((void*)0)) {
        return -1;
    }
    VAR_8 = FUNC_6(VAR_2);


    for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
        VAR_9 = FUNC_5(VAR_2, VAR_7);

        if (VAR_9 == VAR_1) {
            if (VAR_5) {
                FUNC_0(VAR_0,
                        "each subscripts list may have only one ellipsis");
                FUNC_7(VAR_2);
                return -1;
            }
            if (VAR_6 + 3 >= VAR_4) {
                FUNC_0(VAR_0,
                        "subscripts list is too long");
                FUNC_7(VAR_2);
                return -1;
            }
            VAR_3[VAR_6++] = '.';
            VAR_3[VAR_6++] = '.';
            VAR_3[VAR_6++] = '.';
            VAR_5 = 1;
        }

        else if (FUNC_2(VAR_9) || FUNC_3(VAR_9)) {
            long VAR_10 = FUNC_1(VAR_9);
            npy_bool VAR_11 = 0;

            if (VAR_6 + 1 >= VAR_4) {
                FUNC_0(VAR_0,
                        "subscripts list is too long");
                FUNC_7(VAR_2);
                return -1;
            }

            if ( VAR_10 < 0 ) {
                VAR_11 = 1;
            }
            else if (VAR_10 < 26) {
                VAR_3[VAR_6++] = 'A' + (char)VAR_10;
            }
            else if (VAR_10 < 2*26) {
                VAR_3[VAR_6++] = 'a' + (char)VAR_10 - 26;
            }
            else {
                VAR_11 = 1;
            }

            if (VAR_11) {
                FUNC_0(VAR_0,
                        "subscript is not within the valid range [0, 52)");
                FUNC_7(VAR_2);
                return -1;
            }
        }

        else {
            FUNC_0(VAR_0,
                    "each subscript must be either an integer "
                    "or an ellipsis");
            FUNC_7(VAR_2);
            return -1;
        }
    }

    FUNC_7(VAR_2);

    return VAR_6;
}

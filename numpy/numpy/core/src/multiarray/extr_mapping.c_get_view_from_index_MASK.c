
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_3__ {int type; int value; int object; } ;
typedef TYPE_1__ npy_index_info ;
typedef int PyObject ;
typedef int PyArrayObject ;







 int VAR_0 ;
 int FUNC_0 (int ,int,int*,int*,int*,int*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int,int*,int*,char*,int ,int *,int *) ;
 int FUNC_6 (int *,int) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int*,int,int,int *) ;

__attribute__((used)) static int
FUNC_10(PyArrayObject *VAR_2, PyArrayObject **VAR_3,
                    npy_index_info *VAR_4, int VAR_5, int VAR_6) {
    npy_intp VAR_7[VAR_0];
    npy_intp VAR_8[VAR_0];
    int VAR_9, VAR_10;
    int VAR_11 = 0;
    int VAR_12 = 0;
    char *VAR_13 = FUNC_1(VAR_2);


    npy_intp VAR_14, VAR_15, VAR_16, VAR_17;

    for (VAR_9=0; VAR_9 < VAR_5; VAR_9++) {
        switch (VAR_4[VAR_9].type) {
            case 130:
                if ((FUNC_9(&VAR_4[VAR_9].value,
                                FUNC_3(VAR_2)[VAR_12], VAR_12,
                                ((void*)0))) < 0) {
                    return -1;
                }
                VAR_13 += FUNC_6(VAR_2, VAR_12) * VAR_4[VAR_9].value;

                VAR_11 += 0;
                VAR_12 += 1;
                break;
            case 131:
                for (VAR_10=0; VAR_10 < VAR_4[VAR_9].value; VAR_10++) {
                    VAR_7[VAR_11] = FUNC_6(VAR_2, VAR_12);
                    VAR_8[VAR_11] = FUNC_3(VAR_2)[VAR_12];
                    VAR_11 += 1;
                    VAR_12 += 1;
                }
                break;
            case 128:
                if (FUNC_0(VAR_4[VAR_9].object,
                                          FUNC_3(VAR_2)[VAR_12],
                                          &VAR_14, &VAR_15, &VAR_16, &VAR_17) < 0) {
                    return -1;
                }
                if (VAR_17 <= 0) {

                    VAR_17 = 0;
                    VAR_16 = 1;
                    VAR_14 = 0;
                }

                VAR_13 += FUNC_6(VAR_2, VAR_12) * VAR_14;
                VAR_7[VAR_11] = FUNC_6(VAR_2, VAR_12) * VAR_16;
                VAR_8[VAR_11] = VAR_17;
                VAR_11 += 1;
                VAR_12 += 1;
                break;
            case 129:
                VAR_7[VAR_11] = 0;
                VAR_8[VAR_11] = 1;
                VAR_11 += 1;
                break;

            case 132:
                break;
            default:
                VAR_11 += 0;
                VAR_12 += 1;
                break;
        }
    }


    FUNC_7(FUNC_2(VAR_2));
    *VAR_3 = (PyArrayObject *)FUNC_5(
            VAR_6 ? &VAR_1 : FUNC_8(VAR_2),
            FUNC_2(VAR_2),
            VAR_11, VAR_8, VAR_7, VAR_13,
            FUNC_4(VAR_2),
            VAR_6 ? ((void*)0) : (PyObject *)VAR_2,
            (PyObject *)VAR_2);
    if (*VAR_3 == ((void*)0)) {
        return -1;
    }

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint32 ;
typedef int npy_intp ;
typedef int npy_int8 ;
typedef int PyArrayObject ;
typedef int NpyIter_AxisData ;
typedef int NpyIter ;


 char** FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int) ;
 int* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int* FUNC_9 (int *) ;
 char** FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;

__attribute__((used)) static void
FUNC_13(NpyIter *VAR_0, int VAR_1,
                      PyArrayObject *VAR_2,
                      int VAR_3, char *VAR_4,
                      int *VAR_5)
{
    npy_uint32 VAR_6 = FUNC_6(VAR_0);
    int VAR_7, VAR_8 = FUNC_7(VAR_0);
    int VAR_9 = FUNC_8(VAR_0);

    NpyIter_AxisData *VAR_10, *VAR_11;
    npy_intp VAR_12;
    npy_int8 *VAR_13;
    npy_intp VAR_14 = 0;

    VAR_13 = FUNC_9(VAR_0);
    VAR_10 = FUNC_3(VAR_0);
    VAR_12 = FUNC_4(VAR_6, VAR_8, VAR_9);





    VAR_11 = VAR_10;

    if (VAR_5 != ((void*)0)) {
        for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7, FUNC_2(VAR_11, 1)) {
            npy_int8 VAR_15;
            int VAR_16;
            npy_intp VAR_17;


            VAR_15 = VAR_13[VAR_7];
            if (VAR_15 < 0) {
                VAR_16 = VAR_5[VAR_8+VAR_15];
            }
            else {
                VAR_16 = VAR_5[VAR_8-VAR_15-1];
            }

            if (0 <= VAR_16 && VAR_16 < VAR_3) {
                VAR_17 = FUNC_11(VAR_2, VAR_16);
                if (VAR_17 != 1) {
                    npy_intp VAR_18 = FUNC_12(VAR_2, VAR_16);
                    if (VAR_15 < 0) {

                        FUNC_1(VAR_11)[VAR_1] = -VAR_18;
                        VAR_14 += VAR_18*(VAR_17-1);
                    }
                    else {
                        FUNC_1(VAR_11)[VAR_1] = VAR_18;
                    }
                }
            }
        }
    }
    else {
        for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7, FUNC_2(VAR_11, 1)) {
            npy_int8 VAR_19;
            int VAR_20;
            npy_intp VAR_21;


            VAR_19 = VAR_13[VAR_7];
            if (VAR_19 < 0) {
                VAR_20 = VAR_3+VAR_19;
            }
            else {
                VAR_20 = VAR_3-VAR_19-1;
            }

            if (VAR_20 >= 0) {
                VAR_21 = FUNC_11(VAR_2, VAR_20);
                if (VAR_21 != 1) {
                    npy_intp VAR_22 = FUNC_12(VAR_2, VAR_20);
                    if (VAR_19 < 0) {

                        FUNC_1(VAR_11)[VAR_1] = -VAR_22;
                        VAR_14 += VAR_22*(VAR_21-1);
                    }
                    else {
                        FUNC_1(VAR_11)[VAR_1] = VAR_22;
                    }
                }
            }
        }
    }

    VAR_4 += VAR_14;


    FUNC_10(VAR_0)[VAR_1] = VAR_4;
    FUNC_5(VAR_0)[VAR_1] = VAR_14;
    VAR_11 = VAR_10;

    FUNC_0(VAR_11)[VAR_1] = VAR_4;
    FUNC_2(VAR_11, 1);
    for (VAR_7 = 1; VAR_7 < VAR_8; ++VAR_7, FUNC_2(VAR_11, 1)) {
        FUNC_0(VAR_11)[VAR_1] = VAR_4;
    }
}

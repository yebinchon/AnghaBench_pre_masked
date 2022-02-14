
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint32 ;
typedef int npy_intp ;
typedef int NpyIter_AxisData ;
typedef int NpyIter ;


 scalar_t__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int* FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int,int,int) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_11(NpyIter *VAR_3, npy_uint32 VAR_4)
{
    npy_uint32 VAR_5 = FUNC_8(VAR_3);
    int VAR_6, VAR_7 = FUNC_9(VAR_3);
    int VAR_8 = FUNC_10(VAR_3);

    npy_intp VAR_9;
    NpyIter_AxisData *VAR_10;
    npy_intp VAR_11;






    if (FUNC_7(VAR_3) == 1) {
        if (VAR_5 & VAR_2) {
            VAR_10 = FUNC_4(VAR_3);
            FUNC_0(VAR_10)[VAR_8] = 0;
        }
        return;
    }

    if (VAR_4 & VAR_0) {
        VAR_11 = FUNC_5(VAR_5, VAR_7, VAR_8);
        VAR_10 = FUNC_4(VAR_3);
        VAR_9 = 1;
        for(VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6, FUNC_3(VAR_10, 1)) {
            npy_intp VAR_12 = FUNC_1(VAR_10);

            if (VAR_12 == 1) {
                FUNC_2(VAR_10)[VAR_8] = 0;
            }
            else {
                FUNC_2(VAR_10)[VAR_8] = VAR_9;
            }
            FUNC_0(VAR_10)[VAR_8] = 0;
            VAR_9 *= VAR_12;
        }
    }
    else if (VAR_4 & VAR_1) {
        VAR_11 = FUNC_5(VAR_5, VAR_7, VAR_8);
        VAR_10 = FUNC_6(FUNC_4(VAR_3), VAR_7-1);
        VAR_9 = 1;
        for(VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6, FUNC_3(VAR_10, -1)) {
            npy_intp VAR_13 = FUNC_1(VAR_10);

            if (VAR_13 == 1) {
                FUNC_2(VAR_10)[VAR_8] = 0;
            }
            else {
                FUNC_2(VAR_10)[VAR_8] = VAR_9;
            }
            FUNC_0(VAR_10)[VAR_8] = 0;
            VAR_9 *= VAR_13;
        }
    }
}

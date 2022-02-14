
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint32 ;
typedef scalar_t__ npy_intp ;
typedef int NpyIter_AxisData ;
typedef int NpyIter ;


 scalar_t__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_9(NpyIter *VAR_1, int VAR_2)
{
    npy_uint32 VAR_3 = FUNC_4(VAR_1);
    int VAR_4, VAR_5 = FUNC_6(VAR_1);
    int VAR_6 = FUNC_7(VAR_1);
    int VAR_7 = FUNC_5(VAR_1);

    NpyIter_AxisData *VAR_8;
    npy_intp VAR_9;

    VAR_8 = FUNC_2(VAR_1);
    VAR_9 = FUNC_3(VAR_3, VAR_5, VAR_6);

    for(VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
        npy_intp VAR_10, VAR_11;

        VAR_11 = FUNC_0(VAR_8)[VAR_2];
        VAR_10 = FUNC_0(VAR_8)[VAR_7];





        if (VAR_10 != 0 && VAR_11 == 0) {
            FUNC_8(VAR_0,
                    "Iterator reduction operand is WRITEMASKED, "
                    "but also broadcasts to multiple mask values. "
                    "There can be only one mask value per WRITEMASKED "
                    "element.");
            return 0;
        }

        FUNC_1(VAR_8, 1);
    }

    return 1;
}

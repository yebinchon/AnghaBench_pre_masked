
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double REAL ;
typedef scalar_t__ GpStatus ;
typedef int GpPen ;
typedef scalar_t__ GpDashStyle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,double,int ,int **) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,double*,int) ;
 int FUNC_3 (int *,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *,double*,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (double,double) ;
 int FUNC_8 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_9(void)
{
    GpPen *VAR_7;
    GpDashStyle VAR_8;
    GpStatus VAR_9;
    REAL VAR_10[12];

    FUNC_0(0xdeadbeef, 10.0, VAR_6, &VAR_7);
    VAR_10[0] = 10.0;
    VAR_10[1] = 11.0;
    VAR_10[2] = 12.0;
    VAR_10[3] = 13.0;
    VAR_10[4] = 14.0;
    VAR_10[5] = -100.0;
    VAR_10[6] = -100.0;
    VAR_10[7] = VAR_10[8] = VAR_10[9] = VAR_10[10] = VAR_10[11] = 0.0;


    FUNC_3(VAR_7, &VAR_8);
    FUNC_6(VAR_2, VAR_8);
    VAR_9 = FUNC_4(VAR_7, VAR_10, 2);
    FUNC_6(VAR_4, VAR_9);
    FUNC_3(VAR_7, &VAR_8);
    FUNC_6(VAR_0, VAR_8);



    FUNC_5(VAR_7, VAR_2);
    VAR_9 = FUNC_2(VAR_7, &VAR_10[5], 2);
    FUNC_6(VAR_3, VAR_9);
    VAR_9 = FUNC_2(VAR_7, &VAR_10[5], 0);
    FUNC_6(VAR_4, VAR_9);


    FUNC_4(VAR_7, VAR_10, 2);
    FUNC_5(VAR_7, VAR_0);
    VAR_9 = FUNC_2(VAR_7, &VAR_10[5], 2);
    FUNC_6(VAR_4, VAR_9);
    FUNC_7(10.0, VAR_10[5]);
    FUNC_7(11.0, VAR_10[6]);


    VAR_9 = FUNC_4(VAR_7, VAR_10, 5);
    FUNC_6(VAR_4, VAR_9);
    VAR_10[5] = -100.0;
    VAR_10[6] = -100.0;
    VAR_9 = FUNC_2(VAR_7, &VAR_10[5], 1);
    FUNC_6(VAR_4, VAR_9);
    FUNC_7(10.0, VAR_10[5]);
    FUNC_7(-100.0, VAR_10[6]);
    VAR_10[5] = -100.0;
    VAR_9 = FUNC_2(VAR_7, &VAR_10[5], 6);
    FUNC_6(VAR_3, VAR_9);
    FUNC_7(-100.0, VAR_10[5]);
    FUNC_7(-100.0, VAR_10[6]);


    VAR_9 = FUNC_4(VAR_7, &VAR_10[7], 5);
    FUNC_6(VAR_3, VAR_9);
    VAR_10[9] = -1.0;
    VAR_9 = FUNC_4(VAR_7, &VAR_10[7], 5);
    FUNC_6(VAR_3, VAR_9);


    FUNC_5(VAR_7, VAR_1);
    if (0)
    {
    VAR_9 = FUNC_4(VAR_7, VAR_10, 0);
    FUNC_8(VAR_9 == VAR_5 || VAR_9 == VAR_3,
       "Expected OutOfMemory or InvalidParameter, got %.8x\n", VAR_9);
    }
    VAR_9 = FUNC_4(VAR_7, VAR_10, -1);
    FUNC_8(VAR_9 == VAR_5 || VAR_9 == VAR_3,
       "Expected OutOfMemory or InvalidParameter, got %.8x\n", VAR_9);
    FUNC_3(VAR_7, &VAR_8);
    FUNC_6(VAR_1, VAR_8);

    FUNC_1(VAR_7);
}

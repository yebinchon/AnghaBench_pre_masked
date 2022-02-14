
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REAL ;
typedef int GpStatus ;
typedef int GpMatrix ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (double,double,double,double,int,int,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,double,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
    GpStatus VAR_4;
    GpMatrix *VAR_5 = ((void*)0);
    GpMatrix *VAR_6 = ((void*)0);
    BOOL VAR_7 = VAR_0;
    REAL VAR_8[6];


    VAR_4 = FUNC_3(((void*)0));
    FUNC_6(VAR_1, VAR_4);


    FUNC_0(2.0, -1.0, 6.0, -3.0, 2.2, 3.0, &VAR_5);
    VAR_4 = FUNC_3(VAR_5);
    FUNC_6(VAR_1, VAR_4);
    FUNC_1(VAR_5);


    FUNC_0(3.0, -2.0, 5.0, 2.0, 6.0, 3.0, &VAR_5);
    VAR_4 = FUNC_3(VAR_5);
    FUNC_6(VAR_2, VAR_4);
    FUNC_0(2.0/16.0, 2.0/16.0, -5.0/16.0, 3.0/16.0, 3.0/16.0, -21.0/16.0, &VAR_6);
    FUNC_4(VAR_5, VAR_6, &VAR_7);
    FUNC_6(VAR_3, VAR_7);
    FUNC_1(VAR_5);

    FUNC_0(0.0006, 0, 0, 0.0006, 400, 400, &VAR_5);
    VAR_4 = FUNC_3(VAR_5);
    FUNC_6(VAR_2, VAR_4);
    VAR_4 = FUNC_2(VAR_5, VAR_8);
    FUNC_6(VAR_2, VAR_4);
    FUNC_7(FUNC_5(VAR_8[0], 1666.666504, 1), "elems[0] = %.10g\n", VAR_8[0]);
    FUNC_7(FUNC_5(VAR_8[1], 0, 0), "elems[1] = %.10g\n", VAR_8[1]);
    FUNC_7(FUNC_5(VAR_8[2], 0, 0), "elems[2] = %.10g\n", VAR_8[2]);
    FUNC_7(FUNC_5(VAR_8[3], 1666.666504, 1), "elems[3] = %.10g\n", VAR_8[3]);
    FUNC_7(FUNC_5(VAR_8[4], -666666.6875, 1), "elems[4] = %.10g\n", VAR_8[4]);
    FUNC_7(FUNC_5(VAR_8[5], -666666.6875, 1), "elems[5] = %.10g\n", VAR_8[5]);

    FUNC_1(VAR_6);
    FUNC_1(VAR_5);
}

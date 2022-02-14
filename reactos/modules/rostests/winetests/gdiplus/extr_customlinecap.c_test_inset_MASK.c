
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ REAL ;
typedef int GpStatus ;
typedef int GpPath ;
typedef int GpCustomLineCap ;


 int VAR_0 ;
 int FUNC_0 (int *,double,double,double,double) ;
 int FUNC_1 (int *,int *,int ,double,int **) ;
 int FUNC_2 (int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (double,scalar_t__) ;

__attribute__((used)) static void FUNC_8(void)
{
    GpCustomLineCap *VAR_4;
    GpPath *VAR_5;
    REAL VAR_6;
    GpStatus VAR_7;

    VAR_7 = FUNC_2(VAR_0, &VAR_5);
    FUNC_6(VAR_3, VAR_7);
    VAR_7 = FUNC_0(VAR_5, 5.0, 5.0, 10.0, 10.0);
    FUNC_6(VAR_3, VAR_7);

    VAR_7 = FUNC_1(((void*)0), VAR_5, VAR_2, 0.0, &VAR_4);
    FUNC_6(VAR_3, VAR_7);


    VAR_7 = FUNC_5(((void*)0), ((void*)0));
    FUNC_6(VAR_1, VAR_7);
    VAR_7 = FUNC_5(((void*)0), &VAR_6);
    FUNC_6(VAR_1, VAR_7);
    VAR_7 = FUNC_5(VAR_4, ((void*)0));
    FUNC_6(VAR_1, VAR_7);

    VAR_6 = (REAL)0xdeadbeef;
    VAR_7 = FUNC_5(VAR_4, &VAR_6);
    FUNC_6(VAR_3, VAR_7);
    FUNC_7(0.0, VAR_6);

    FUNC_3(VAR_4);
    FUNC_4(VAR_5);
}

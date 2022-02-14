
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpStatus ;
typedef int GpPath ;
typedef int GpCustomLineCap ;
typedef int GpAdjustableArrowCap ;
typedef int CustomLineCapType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,double,double,double,double) ;
 int FUNC_1 (double,double,int ,int **) ;
 int FUNC_2 (int *,int *,int ,double,int **) ;
 int FUNC_3 (int ,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int,char*,int) ;

__attribute__((used)) static void FUNC_8(void)
{
    GpAdjustableArrowCap *VAR_7;
    GpCustomLineCap *VAR_8;
    CustomLineCapType VAR_9;
    GpStatus VAR_10;
    GpPath *VAR_11;

    VAR_10 = FUNC_6(((void*)0), ((void*)0));
    FUNC_7(VAR_10 == VAR_3, "Unexpected return code, %d\n", VAR_10);

    VAR_9 = 10;
    VAR_10 = FUNC_6(((void*)0), &VAR_9);
    FUNC_7(VAR_10 == VAR_3, "Unexpected return code, %d\n", VAR_10);
    FUNC_7(VAR_9 == 10, "Unexpected cap type, %d\n", VAR_9);


    VAR_10 = FUNC_3(VAR_2, &VAR_11);
    FUNC_7(VAR_10 == VAR_5, "Failed to create path, %d\n", VAR_10);
    VAR_10 = FUNC_0(VAR_11, 5.0, 5.0, 10.0, 10.0);
    FUNC_7(VAR_10 == VAR_5, "AddPathRectangle failed, %d\n", VAR_10);

    VAR_10 = FUNC_2(((void*)0), VAR_11, VAR_4, 0.0, &VAR_8);
    FUNC_7(VAR_10 == VAR_5, "Failed to create cap, %d\n", VAR_10);
    VAR_10 = FUNC_6(VAR_8, &VAR_9);
    FUNC_7(VAR_10 == VAR_5, "Failed to get cap type, %d\n", VAR_10);
    FUNC_7(VAR_9 == VAR_1, "Unexpected cap type %d\n", VAR_10);
    FUNC_4(VAR_8);
    FUNC_5(VAR_11);


    VAR_10 = FUNC_1(17.0, 15.0, VAR_6, &VAR_7);
    FUNC_7(VAR_10 == VAR_5, "Failed to create adjustable cap, %d\n", VAR_10);

    VAR_10 = FUNC_6((GpCustomLineCap*)VAR_7, &VAR_9);
    FUNC_7(VAR_10 == VAR_5, "Failed to get cap type, %d\n", VAR_10);
    FUNC_7(VAR_9 == VAR_0, "Unexpected cap type %d\n", VAR_10);

    FUNC_4((GpCustomLineCap*)VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HDC ;
typedef int GpStatus ;
typedef int GpSolidFill ;
typedef int GpPath ;
typedef int GpGraphics ;
typedef int GpBrush ;
typedef int ARGB ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int,int) ;
 int FUNC_1 (int *,int ,int ,int,int) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int ,int **) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;
 int VAR_1 ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int ) ;
 int VAR_2 ;
 int FUNC_13 (int ,char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    GpStatus VAR_3;
    GpGraphics *VAR_4;
    GpSolidFill *VAR_5;
    GpPath *VAR_6;
    HDC VAR_7 = FUNC_10(VAR_2);

    FUNC_13(VAR_7 != ((void*)0), "Expected HDC to be initialized\n");
    VAR_3 = FUNC_2(VAR_7, &VAR_4);
    FUNC_12(VAR_1, VAR_3);
    FUNC_13(VAR_4 != ((void*)0), "Expected graphics to be initialized\n");
    VAR_3 = FUNC_4((ARGB)0xffffffff, &VAR_5);
    FUNC_12(VAR_1, VAR_3);
    FUNC_13(VAR_5 != ((void*)0), "Expected brush to be initialized\n");
    VAR_3 = FUNC_3(VAR_0, &VAR_6);
    FUNC_12(VAR_1, VAR_3);
    FUNC_13(VAR_6 != ((void*)0), "Expected path to be initialized\n");


    FUNC_9(VAR_6);
    VAR_3 = FUNC_8(VAR_4, (GpBrush *)VAR_5, VAR_6);
    FUNC_12(VAR_1, VAR_3);


    FUNC_9(VAR_6);
    VAR_3 = FUNC_0(VAR_6, 0, 0, 2, 2);
    FUNC_12(VAR_1, VAR_3);
    VAR_3 = FUNC_0(VAR_6, 2, 2, 4, 0);
    FUNC_12(VAR_1, VAR_3);
    VAR_3 = FUNC_8(VAR_4, (GpBrush *)VAR_5, VAR_6);
    FUNC_12(VAR_1, VAR_3);


    FUNC_9(VAR_6);
    VAR_3 = FUNC_1(VAR_6, 0, 0, 4, 4);
    FUNC_12(VAR_1, VAR_3);
    VAR_3 = FUNC_8(VAR_4, (GpBrush *)VAR_5, VAR_6);
    FUNC_12(VAR_1, VAR_3);

    FUNC_7(VAR_6);
    FUNC_5((GpBrush *)VAR_5);
    FUNC_6(VAR_4);
    FUNC_11(VAR_2, VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double X; double Y; double Width; double Height; } ;
typedef int HDC ;
typedef int GpStatus ;
typedef int GpRegion ;
typedef TYPE_1__ GpRectF ;
typedef int GpPath ;
typedef int GpMatrix ;
typedef int GpGraphics ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,double,double,double,double) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int ,int **) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int ,int **) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,double,int ) ;
 int FUNC_14 (int *,double,double,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,char*) ;

__attribute__((used)) static void FUNC_22(void)
{
    GpRegion *VAR_6, *VAR_7;
    GpMatrix *VAR_8;
    GpGraphics *VAR_9;
    GpPath *VAR_10;
    GpRectF VAR_11;
    GpStatus VAR_12;
    HDC VAR_13 = FUNC_17(0);
    BOOL VAR_14;
    DWORD VAR_15;

    VAR_12 = FUNC_3(VAR_13, &VAR_9);
    FUNC_19(VAR_5, VAR_12);

    VAR_12 = FUNC_5(VAR_2, &VAR_10);
    FUNC_19(VAR_5, VAR_12);

    VAR_12 = FUNC_6(&VAR_6);
    FUNC_19(VAR_5, VAR_12);
    VAR_12 = FUNC_6(&VAR_7);
    FUNC_19(VAR_5, VAR_12);

    VAR_12 = FUNC_4(&VAR_8);
    FUNC_19(VAR_5, VAR_12);
    VAR_12 = FUNC_14(VAR_8, 2.0, 3.0, VAR_4);
    FUNC_19(VAR_5, VAR_12);


    VAR_12 = FUNC_16(((void*)0), VAR_8);
    FUNC_19(VAR_3, VAR_12);

    VAR_12 = FUNC_16(VAR_6, ((void*)0));
    FUNC_19(VAR_3, VAR_12);


    VAR_12 = FUNC_16(VAR_6, VAR_8);
    FUNC_19(VAR_5, VAR_12);

    VAR_14 = VAR_1;
    VAR_12 = FUNC_11(VAR_6, VAR_7, VAR_9, &VAR_14);
    FUNC_19(VAR_5, VAR_12);
    FUNC_21(VAR_14, "Expected to be equal.\n");
    VAR_15 = FUNC_20(VAR_6);
    FUNC_19(0x10000003 , VAR_15);


    VAR_12 = FUNC_15(VAR_6);
    FUNC_19(VAR_5, VAR_12);
    VAR_12 = FUNC_16(VAR_6, VAR_8);
    FUNC_19(VAR_5, VAR_12);

    VAR_12 = FUNC_15(VAR_7);
    FUNC_19(VAR_5, VAR_12);

    VAR_14 = VAR_1;
    VAR_12 = FUNC_11(VAR_6, VAR_7, VAR_9, &VAR_14);
    FUNC_19(VAR_5, VAR_12);
    FUNC_21(VAR_14, "Expected to be equal.\n");
    VAR_15 = FUNC_20(VAR_6);
    FUNC_19(0x10000002 , VAR_15);


    VAR_11.X = 10.0;
    VAR_11.Y = 0.0;
    VAR_11.Width = VAR_11.Height = 100.0;
    VAR_12 = FUNC_2(VAR_6, &VAR_11, VAR_0);
    FUNC_19(VAR_5, VAR_12);
    VAR_11.X = 20.0;
    VAR_11.Y = 0.0;
    VAR_11.Width = 200.0;
    VAR_11.Height = 300.0;
    VAR_12 = FUNC_2(VAR_7, &VAR_11, VAR_0);
    FUNC_19(VAR_5, VAR_12);
    VAR_12 = FUNC_16(VAR_6, VAR_8);
    FUNC_19(VAR_5, VAR_12);
    VAR_14 = VAR_1;
    VAR_12 = FUNC_11(VAR_6, VAR_7, VAR_9, &VAR_14);
    FUNC_19(VAR_5, VAR_12);
    FUNC_21(VAR_14, "Expected to be equal.\n");
    VAR_15 = FUNC_20(VAR_6);
    FUNC_19(0x10000000 , VAR_15);


    VAR_12 = FUNC_0(VAR_10, 0.0, 10.0, 100.0, 150.0);
    FUNC_19(VAR_5, VAR_12);
    VAR_12 = FUNC_1(VAR_6, VAR_10, VAR_0);
    FUNC_19(VAR_5, VAR_12);
    VAR_12 = FUNC_12(VAR_10);
    FUNC_19(VAR_5, VAR_12);
    VAR_12 = FUNC_0(VAR_10, 0.0, 30.0, 200.0, 450.0);
    FUNC_19(VAR_5, VAR_12);
    VAR_12 = FUNC_1(VAR_7, VAR_10, VAR_0);
    FUNC_19(VAR_5, VAR_12);
    VAR_12 = FUNC_16(VAR_6, VAR_8);
    FUNC_19(VAR_5, VAR_12);
    VAR_14 = VAR_1;
    VAR_12 = FUNC_11(VAR_6, VAR_7, VAR_9, &VAR_14);
    FUNC_19(VAR_5, VAR_12);
    FUNC_21(VAR_14, "Expected to be equal.\n");
    VAR_15 = FUNC_20(VAR_6);
    FUNC_19(0x10000001 , VAR_15);


    VAR_11.X = 10.0;
    VAR_11.Y = 0.0;
    VAR_11.Width = VAR_11.Height = 100.0;
    VAR_12 = FUNC_2(VAR_6, &VAR_11, VAR_0);
    FUNC_19(VAR_5, VAR_12);
    VAR_12 = FUNC_13(VAR_8, 45.0, VAR_4);
    FUNC_19(VAR_5, VAR_12);
    VAR_12 = FUNC_16(VAR_6, VAR_8);
    FUNC_19(VAR_5, VAR_12);
    VAR_15 = FUNC_20(VAR_6);
    FUNC_19(0x10000001 , VAR_15);

    VAR_12 = FUNC_10(VAR_6);
    FUNC_19(VAR_5, VAR_12);
    VAR_12 = FUNC_10(VAR_7);
    FUNC_19(VAR_5, VAR_12);
    VAR_12 = FUNC_7(VAR_9);
    FUNC_19(VAR_5, VAR_12);
    VAR_12 = FUNC_9(VAR_10);
    FUNC_19(VAR_5, VAR_12);
    VAR_12 = FUNC_8(VAR_8);
    FUNC_19(VAR_5, VAR_12);
    FUNC_18(0, VAR_13);
}

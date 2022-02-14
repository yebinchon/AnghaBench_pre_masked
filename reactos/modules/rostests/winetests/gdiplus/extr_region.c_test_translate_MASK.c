
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double X; double Y; double Width; double Height; } ;
typedef int HDC ;
typedef scalar_t__ GpStatus ;
typedef int GpRegion ;
typedef TYPE_1__ GpRectF ;
typedef int GpPath ;
typedef int GpGraphics ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,double,double,double,double) ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int ,int **) ;
 scalar_t__ FUNC_4 (int ,int **) ;
 scalar_t__ FUNC_5 (int **) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,double,double) ;
 int FUNC_13 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int,char*,...) ;

__attribute__((used)) static void FUNC_16(void)
{
    GpRegion *VAR_5, *VAR_6;
    GpGraphics *VAR_7;
    GpPath *VAR_8;
    GpRectF VAR_9;
    GpStatus VAR_10;
    HDC VAR_11 = FUNC_13(0);
    BOOL VAR_12;

    VAR_10 = FUNC_3(VAR_11, &VAR_7);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);

    VAR_10 = FUNC_4(VAR_2, &VAR_8);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);

    VAR_10 = FUNC_5(&VAR_5);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    VAR_10 = FUNC_5(&VAR_6);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);


    VAR_10 = FUNC_12(((void*)0), 0.0, 0.0);
    FUNC_15(VAR_10 == VAR_3, "status %08x\n", VAR_10);


    VAR_10 = FUNC_12(VAR_5, 10.0, 10.0);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);

    VAR_10 = FUNC_11(VAR_5);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    VAR_10 = FUNC_12(VAR_5, 10.0, 10.0);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);

    VAR_9.X = 10.0; VAR_9.Y = 0.0;
    VAR_9.Width = VAR_9.Height = 100.0;
    VAR_10 = FUNC_2(VAR_5, &VAR_9, VAR_0);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    VAR_9.X = 15.0; VAR_9.Y = -2.0;
    VAR_9.Width = VAR_9.Height = 100.0;
    VAR_10 = FUNC_2(VAR_6, &VAR_9, VAR_0);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    VAR_10 = FUNC_12(VAR_5, 5.0, -2.0);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    VAR_12 = VAR_1;
    VAR_10 = FUNC_9(VAR_5, VAR_6, VAR_7, &VAR_12);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    FUNC_15(VAR_12, "Expected to be equal.\n");

    VAR_10 = FUNC_0(VAR_8, 0.0, 10.0, 100.0, 150.0);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    VAR_10 = FUNC_1(VAR_5, VAR_8, VAR_0);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    VAR_10 = FUNC_10(VAR_8);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    VAR_10 = FUNC_0(VAR_8, 10.0, 21.0, 100.0, 150.0);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    VAR_10 = FUNC_1(VAR_6, VAR_8, VAR_0);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    VAR_10 = FUNC_12(VAR_5, 10.0, 11.0);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    VAR_12 = VAR_1;
    VAR_10 = FUNC_9(VAR_5, VAR_6, VAR_7, &VAR_12);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    FUNC_15(VAR_12, "Expected to be equal.\n");

    VAR_10 = FUNC_8(VAR_5);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    VAR_10 = FUNC_8(VAR_6);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    VAR_10 = FUNC_6(VAR_7);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    VAR_10 = FUNC_7(VAR_8);
    FUNC_15(VAR_10 == VAR_4, "status %08x\n", VAR_10);
    FUNC_14(0, VAR_11);
}

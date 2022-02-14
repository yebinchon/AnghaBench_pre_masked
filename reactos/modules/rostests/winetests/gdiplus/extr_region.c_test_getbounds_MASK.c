
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double X; double Y; double Height; double Width; } ;
typedef double REAL ;
typedef int HDC ;
typedef double GpStatus ;
typedef int GpRegion ;
typedef TYPE_1__ GpRectF ;
typedef int GpGraphics ;


 int VAR_0 ;
 double FUNC_0 (int *,TYPE_1__*,int ) ;
 double FUNC_1 (int ,int **) ;
 double FUNC_2 (int **) ;
 double FUNC_3 (int *) ;
 double FUNC_4 (int *) ;
 double FUNC_5 (int *,int *,TYPE_1__*) ;
 double FUNC_6 (int *,double,double,int ) ;
 double FUNC_7 (int *) ;
 int FUNC_8 (int *,double) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ) ;
 double VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 int FUNC_11 (int ,int ) ;
 int VAR_4 ;
 int FUNC_12 (int,char*,double,...) ;

__attribute__((used)) static void FUNC_13(void)
{
    GpRegion *VAR_5;
    GpGraphics *VAR_6;
    GpStatus VAR_7;
    GpRectF VAR_8;
    HDC VAR_9 = FUNC_10(0);

    VAR_7 = FUNC_1(VAR_9, &VAR_6);
    FUNC_12(VAR_7 == VAR_3, "status %08x\n", VAR_7);
    VAR_7 = FUNC_2(&VAR_5);
    FUNC_12(VAR_7 == VAR_3, "status %08x\n", VAR_7);


    VAR_7 = FUNC_5(((void*)0), ((void*)0), ((void*)0));
    FUNC_12(VAR_7 == VAR_1, "status %08x\n", VAR_7);
    VAR_7 = FUNC_5(VAR_5, ((void*)0), ((void*)0));
    FUNC_12(VAR_7 == VAR_1, "status %08x\n", VAR_7);
    VAR_7 = FUNC_5(VAR_5, VAR_6, ((void*)0));
    FUNC_12(VAR_7 == VAR_1, "status %08x\n", VAR_7);

    VAR_8.X = VAR_8.Y = 0.0;
    VAR_8.Height = VAR_8.Width = 100.0;
    VAR_7 = FUNC_5(VAR_5, VAR_6, &VAR_8);
    FUNC_12(VAR_7 == VAR_3, "status %08x\n", VAR_7);
    FUNC_12(VAR_8.X == -(REAL)(1 << 22), "Expected X = %.2f, got %.2f\n", -(REAL)(1 << 22), VAR_8.X);
    FUNC_12(VAR_8.Y == -(REAL)(1 << 22), "Expected Y = %.2f, got %.2f\n", -(REAL)(1 << 22), VAR_8.Y);
    FUNC_12(VAR_8.Width == (REAL)(1 << 23), "Expected width = %.2f, got %.2f\n", (REAL)(1 << 23), VAR_8.Width);
    FUNC_12(VAR_8.Height == (REAL)(1 << 23), "Expected height = %.2f, got %.2f\n",(REAL)(1 << 23), VAR_8.Height);

    VAR_8.X = VAR_8.Y = 0.0;
    VAR_8.Height = VAR_8.Width = 100.0;
    VAR_7 = FUNC_7(VAR_5);
    FUNC_12(VAR_7 == VAR_3, "status %08x\n", VAR_7);
    VAR_7 = FUNC_5(VAR_5, VAR_6, &VAR_8);
    FUNC_12(VAR_7 == VAR_3, "status %08x\n", VAR_7);
    FUNC_12(VAR_8.X == 0.0, "Expected X = 0.0, got %.2f\n", VAR_8.X);
    FUNC_12(VAR_8.Y == 0.0, "Expected Y = 0.0, got %.2f\n", VAR_8.Y);
    FUNC_12(VAR_8.Width == 0.0, "Expected width = 0.0, got %.2f\n", VAR_8.Width);
    FUNC_12(VAR_8.Height == 0.0, "Expected height = 0.0, got %.2f\n", VAR_8.Height);

    VAR_8.X = 10.0; VAR_8.Y = 0.0;
    VAR_8.Width = VAR_8.Height = 100.0;
    VAR_7 = FUNC_0(VAR_5, &VAR_8, VAR_0);
    FUNC_12(VAR_7 == VAR_3, "status %08x\n", VAR_7);
    VAR_8.X = VAR_8.Y = 0.0;
    VAR_8.Height = VAR_8.Width = 0.0;
    VAR_7 = FUNC_5(VAR_5, VAR_6, &VAR_8);
    FUNC_12(VAR_7 == VAR_3, "status %08x\n", VAR_7);
    FUNC_12(VAR_8.X == 10.0, "Expected X = 0.0, got %.2f\n", VAR_8.X);
    FUNC_12(VAR_8.Y == 0.0, "Expected Y = 0.0, got %.2f\n", VAR_8.Y);
    FUNC_12(VAR_8.Width == 100.0, "Expected width = 0.0, got %.2f\n", VAR_8.Width);
    FUNC_12(VAR_8.Height == 100.0, "Expected height = 0.0, got %.2f\n", VAR_8.Height);


    VAR_7 = FUNC_6(VAR_6, 2.0, 2.0, VAR_2);
    FUNC_12(VAR_7 == VAR_3, "status %08x\n", VAR_7);
    FUNC_9(VAR_6, VAR_4);
    FUNC_8(VAR_6, 2.0);
    VAR_7 = FUNC_5(VAR_5, VAR_6, &VAR_8);
    FUNC_12(VAR_7 == VAR_3, "status %08x\n", VAR_7);
    FUNC_12(VAR_8.X == 10.0, "Expected X = 0.0, got %.2f\n", VAR_8.X);
    FUNC_12(VAR_8.Y == 0.0, "Expected Y = 0.0, got %.2f\n", VAR_8.Y);
    FUNC_12(VAR_8.Width == 100.0, "Expected width = 0.0, got %.2f\n", VAR_8.Width);

    VAR_8.X = 10.0; VAR_8.Y = 0.0;
    VAR_8.Width = VAR_8.Height = 100.0;
    VAR_7 = FUNC_0(VAR_5, &VAR_8, VAR_0);
    FUNC_12(VAR_7 == VAR_3, "status %08x\n", VAR_7);
    VAR_8.X = VAR_8.Y = 0.0;
    VAR_8.Height = VAR_8.Width = 0.0;
    VAR_7 = FUNC_5(VAR_5, VAR_6, &VAR_8);
    FUNC_12(VAR_7 == VAR_3, "status %08x\n", VAR_7);
    FUNC_12(VAR_8.X == 10.0, "Expected X = 0.0, got %.2f\n", VAR_8.X);
    FUNC_12(VAR_8.Y == 0.0, "Expected Y = 0.0, got %.2f\n", VAR_8.Y);
    FUNC_12(VAR_8.Width == 100.0, "Expected width = 0.0, got %.2f\n", VAR_8.Width);
    FUNC_12(VAR_8.Height == 100.0, "Expected height = 0.0, got %.2f\n", VAR_8.Height);

    VAR_7 = FUNC_4(VAR_5);
    FUNC_12(VAR_7 == VAR_3, "status %08x\n", VAR_7);
    VAR_7 = FUNC_3(VAR_6);
    FUNC_12(VAR_7 == VAR_3, "status %08x\n", VAR_7);
    FUNC_11(0, VAR_9);
}

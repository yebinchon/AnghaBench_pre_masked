
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
typedef int GpGraphics ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 scalar_t__ FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int ,int ) ;
 int VAR_4 ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    GpRegion *VAR_5, *VAR_6;
    GpGraphics *VAR_7;
    GpRectF VAR_8;
    GpStatus VAR_9;
    HDC VAR_10 = FUNC_8(0);
    BOOL VAR_11;

    VAR_9 = FUNC_1(VAR_10, &VAR_7);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);

    VAR_9 = FUNC_2(&VAR_5);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    VAR_9 = FUNC_2(&VAR_6);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);


    VAR_9 = FUNC_5(((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_10(VAR_9 == VAR_2, "status %08x\n", VAR_9);
    VAR_9 = FUNC_5(VAR_5, VAR_6, ((void*)0), ((void*)0));
    FUNC_10(VAR_9 == VAR_2, "status %08x\n", VAR_9);
    VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, ((void*)0));
    FUNC_10(VAR_9 == VAR_2, "status %08x\n", VAR_9);
    VAR_9 = FUNC_5(VAR_5, VAR_6, ((void*)0), &VAR_11);
    FUNC_10(VAR_9 == VAR_2, "status %08x\n", VAR_9);


    VAR_11 = VAR_1;
    VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, &VAR_11);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    FUNC_10(VAR_11, "Expected to be equal.\n");

    VAR_9 = FUNC_6(VAR_5);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    VAR_9 = FUNC_6(VAR_6);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    VAR_11 = VAR_1;
    VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, &VAR_11);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    FUNC_10(VAR_11, "Expected to be equal.\n");

    VAR_9 = FUNC_7(VAR_5);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    VAR_11 = VAR_4;
    VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, &VAR_11);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    FUNC_10(!VAR_11, "Expected to be unequal.\n");

    VAR_8.X = VAR_8.Y = 0.0;
    VAR_8.Width = VAR_8.Height = 100.0;
    VAR_9 = FUNC_0(VAR_5, &VAR_8, VAR_0);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    VAR_11 = VAR_4;
    VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, &VAR_11);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    FUNC_10(!VAR_11, "Expected to be unequal.\n");
    VAR_9 = FUNC_7(VAR_6);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    VAR_11 = VAR_4;
    VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, &VAR_11);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    FUNC_10(!VAR_11, "Expected to be unequal.\n");

    VAR_8.X = VAR_8.Y = 0.0;
    VAR_8.Width = VAR_8.Height = 100.001;
    VAR_9 = FUNC_0(VAR_6, &VAR_8, VAR_0);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    VAR_11 = VAR_1;
    VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, &VAR_11);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    FUNC_10(VAR_11, "Expected to be equal.\n");

    VAR_8.X = VAR_8.Y = 0.0;
    VAR_8.Width = VAR_8.Height = 100.0;
    VAR_9 = FUNC_0(VAR_6, &VAR_8, VAR_0);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    VAR_11 = VAR_1;
    VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, &VAR_11);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    FUNC_10(VAR_11, "Expected to be equal.\n");


    VAR_9 = FUNC_4(VAR_5);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    VAR_9 = FUNC_4(VAR_6);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    VAR_9 = FUNC_3(VAR_7);
    FUNC_10(VAR_9 == VAR_3, "status %08x\n", VAR_9);
    FUNC_9(0, VAR_10);
}

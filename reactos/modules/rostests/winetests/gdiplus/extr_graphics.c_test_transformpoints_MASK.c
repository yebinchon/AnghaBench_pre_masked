
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int X; int Y; } ;
struct TYPE_5__ {double X; double Y; } ;
typedef int HDC ;
typedef int GpStatus ;
typedef TYPE_1__ GpPointF ;
typedef TYPE_2__ GpPoint ;
typedef int GpGraphics ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,double) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int,int,TYPE_1__*,int) ;
 int FUNC_5 (int *,int,int,TYPE_2__*,int) ;
 int FUNC_6 (int *,double,double,int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ,int ) ;
 int VAR_6 ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (double,double) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_11(void)
{
    GpStatus VAR_8;
    GpGraphics *VAR_9 = ((void*)0);
    HDC VAR_10 = FUNC_7( VAR_7 );
    GpPointF VAR_11[2];
    GpPoint VAR_12[2];

    VAR_8 = FUNC_0(VAR_10, &VAR_9);
    FUNC_9(VAR_5, VAR_8);


    VAR_8 = FUNC_4(((void*)0), VAR_1, VAR_2, ((void*)0), 0);
    FUNC_9(VAR_3, VAR_8);
    VAR_8 = FUNC_4(VAR_9, VAR_1, VAR_2, ((void*)0), 0);
    FUNC_9(VAR_3, VAR_8);
    VAR_8 = FUNC_4(VAR_9, VAR_1, VAR_2, VAR_11, 0);
    FUNC_9(VAR_3, VAR_8);
    VAR_8 = FUNC_4(VAR_9, VAR_1, VAR_2, VAR_11, -1);
    FUNC_9(VAR_3, VAR_8);

    VAR_8 = FUNC_4(VAR_9, VAR_0+1, VAR_2, VAR_11, 2);
    FUNC_9(VAR_3, VAR_8);
    VAR_8 = FUNC_4(VAR_9, -1, VAR_2, VAR_11, 2);
    FUNC_9(VAR_3, VAR_8);
    VAR_8 = FUNC_4(VAR_9, VAR_0, VAR_0+1, VAR_11, 2);
    FUNC_9(VAR_3, VAR_8);
    VAR_8 = FUNC_4(VAR_9, VAR_0, -1, VAR_11, 2);
    FUNC_9(VAR_3, VAR_8);

    VAR_11[0].X = 1.0;
    VAR_11[0].Y = 0.0;
    VAR_11[1].X = 0.0;
    VAR_11[1].Y = 1.0;
    VAR_8 = FUNC_4(VAR_9, VAR_0, VAR_2, VAR_11, 2);
    FUNC_9(VAR_5, VAR_8);
    FUNC_10(1.0, VAR_11[0].X);
    FUNC_10(0.0, VAR_11[0].Y);
    FUNC_10(0.0, VAR_11[1].X);
    FUNC_10(1.0, VAR_11[1].Y);

    VAR_8 = FUNC_6(VAR_9, 5.0, 5.0, VAR_4);
    FUNC_9(VAR_5, VAR_8);
    VAR_8 = FUNC_3(VAR_9, VAR_6);
    FUNC_9(VAR_5, VAR_8);
    VAR_8 = FUNC_2(VAR_9, 3.0);
    FUNC_9(VAR_5, VAR_8);

    VAR_11[0].X = 1.0;
    VAR_11[0].Y = 0.0;
    VAR_11[1].X = 0.0;
    VAR_11[1].Y = 1.0;
    VAR_8 = FUNC_4(VAR_9, VAR_0, VAR_2, VAR_11, 2);
    FUNC_9(VAR_5, VAR_8);
    FUNC_10(18.0, VAR_11[0].X);
    FUNC_10(15.0, VAR_11[0].Y);
    FUNC_10(15.0, VAR_11[1].X);
    FUNC_10(18.0, VAR_11[1].Y);

    VAR_11[0].X = 1.0;
    VAR_11[0].Y = 0.0;
    VAR_11[1].X = 0.0;
    VAR_11[1].Y = 1.0;
    VAR_8 = FUNC_4(VAR_9, VAR_1, VAR_2, VAR_11, 2);
    FUNC_9(VAR_5, VAR_8);
    FUNC_10(6.0, VAR_11[0].X);
    FUNC_10(5.0, VAR_11[0].Y);
    FUNC_10(5.0, VAR_11[1].X);
    FUNC_10(6.0, VAR_11[1].Y);

    VAR_11[0].X = 1.0;
    VAR_11[0].Y = 0.0;
    VAR_11[1].X = 0.0;
    VAR_11[1].Y = 1.0;
    VAR_8 = FUNC_4(VAR_9, VAR_0, VAR_1, VAR_11, 2);
    FUNC_9(VAR_5, VAR_8);
    FUNC_10(3.0, VAR_11[0].X);
    FUNC_10(0.0, VAR_11[0].Y);
    FUNC_10(0.0, VAR_11[1].X);
    FUNC_10(3.0, VAR_11[1].Y);

    VAR_11[0].X = 18.0;
    VAR_11[0].Y = 15.0;
    VAR_11[1].X = 15.0;
    VAR_11[1].Y = 18.0;
    VAR_8 = FUNC_4(VAR_9, VAR_2, VAR_0, VAR_11, 2);
    FUNC_9(VAR_5, VAR_8);
    FUNC_10(1.0, VAR_11[0].X);
    FUNC_10(0.0, VAR_11[0].Y);
    FUNC_10(0.0, VAR_11[1].X);
    FUNC_10(1.0, VAR_11[1].Y);

    VAR_11[0].X = 6.0;
    VAR_11[0].Y = 5.0;
    VAR_11[1].X = 5.0;
    VAR_11[1].Y = 6.0;
    VAR_8 = FUNC_4(VAR_9, VAR_2, VAR_1, VAR_11, 2);
    FUNC_9(VAR_5, VAR_8);
    FUNC_10(1.0, VAR_11[0].X);
    FUNC_10(0.0, VAR_11[0].Y);
    FUNC_10(0.0, VAR_11[1].X);
    FUNC_10(1.0, VAR_11[1].Y);

    VAR_11[0].X = 3.0;
    VAR_11[0].Y = 0.0;
    VAR_11[1].X = 0.0;
    VAR_11[1].Y = 3.0;
    VAR_8 = FUNC_4(VAR_9, VAR_1, VAR_0, VAR_11, 2);
    FUNC_9(VAR_5, VAR_8);
    FUNC_10(1.0, VAR_11[0].X);
    FUNC_10(0.0, VAR_11[0].Y);
    FUNC_10(0.0, VAR_11[1].X);
    FUNC_10(1.0, VAR_11[1].Y);

    VAR_12[0].X = 1;
    VAR_12[0].Y = 0;
    VAR_12[1].X = 0;
    VAR_12[1].Y = 1;
    VAR_8 = FUNC_5(VAR_9, VAR_0, VAR_2, VAR_12, 2);
    FUNC_9(VAR_5, VAR_8);
    FUNC_9(18, VAR_12[0].X);
    FUNC_9(15, VAR_12[0].Y);
    FUNC_9(15, VAR_12[1].X);
    FUNC_9(18, VAR_12[1].Y);

    FUNC_1(VAR_9);
    FUNC_8(VAR_7, VAR_10);
}

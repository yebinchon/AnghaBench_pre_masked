
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Height; int Width; int Y; int X; } ;
typedef TYPE_1__ RectF ;
typedef int HRGN ;
typedef int HDC ;
typedef int GpStatus ;
typedef int GpGraphics ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int,int,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int,int,int *) ;
 int VAR_3 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (double,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_12(void)
{
    HDC VAR_5;
    GpStatus VAR_6;
    GpGraphics *VAR_7;
    HRGN VAR_8;
    RectF VAR_9;
    BOOL VAR_10;

    VAR_5 = FUNC_7(VAR_4);

    FUNC_9(VAR_5, 10, 10, ((void*)0));

    VAR_6 = FUNC_2(VAR_5, &VAR_7);
    FUNC_10(VAR_2, VAR_6);

    VAR_8 = FUNC_0(0, 0, 100, 100);

    VAR_6 = FUNC_6(VAR_7, VAR_8, VAR_0);
    FUNC_10(VAR_2, VAR_6);

    VAR_6 = FUNC_4(VAR_7, &VAR_9);
    FUNC_10(VAR_2, VAR_6);
    FUNC_11(-10.0, VAR_9.X);
    FUNC_11(-10.0, VAR_9.Y);
    FUNC_11(100.0, VAR_9.Width);
    FUNC_11(100.0, VAR_9.Height);

    VAR_6 = FUNC_5(VAR_7, 95, 95, &VAR_10);
    FUNC_10(VAR_2, VAR_6);
    FUNC_10(VAR_1, VAR_10);

    VAR_6 = FUNC_5(VAR_7, -5, -5, &VAR_10);
    FUNC_10(VAR_2, VAR_6);
    FUNC_10(VAR_3, VAR_10);

    FUNC_1(VAR_8);

    FUNC_3(VAR_7);

    FUNC_9(VAR_5, 0, 0, ((void*)0));

    FUNC_8(VAR_4, VAR_5);
}

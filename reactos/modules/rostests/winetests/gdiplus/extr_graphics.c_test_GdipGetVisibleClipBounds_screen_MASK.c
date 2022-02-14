
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int X; int Y; int Width; int Height; } ;
struct TYPE_5__ {int X; int Y; int Width; int Height; } ;
typedef int * HDC ;
typedef int GpStatus ;
typedef TYPE_1__ GpRectF ;
typedef TYPE_2__ GpRect ;
typedef int GpGraphics ;


 int VAR_0 ;
 int FUNC_0 (int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,int,int,int,int,int ) ;
 int * FUNC_5 (int ) ;
 void* FUNC_6 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ,int *) ;
 int VAR_3 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int,char*,...) ;

__attribute__((used)) static void FUNC_10(void)
{
    GpStatus VAR_4;
    GpGraphics *VAR_5 = ((void*)0);
    HDC VAR_6 = FUNC_5(0);
    GpRectF VAR_7, VAR_8, VAR_9;
    GpRect VAR_10;

    FUNC_9(VAR_6 != ((void*)0), "Expected HDC to be initialized\n");

    VAR_4 = FUNC_0(VAR_6, &VAR_5);
    FUNC_8(VAR_2, VAR_4);
    FUNC_9(VAR_5 != ((void*)0), "Expected graphics to be initialized\n");


    VAR_8.X = 0;
    VAR_8.Y = 0;
    VAR_8.Width = FUNC_6(VAR_6, VAR_1);
    VAR_8.Height = FUNC_6(VAR_6, VAR_3);

    VAR_4 = FUNC_2(VAR_5, &VAR_7);
    FUNC_8(VAR_2, VAR_4);
    FUNC_9(VAR_7.X == VAR_8.X &&
        VAR_7.Y == VAR_8.Y &&
        VAR_7.Width == VAR_8.Width &&
        VAR_7.Height == VAR_8.Height,
        "Expected clip bounds (%0.f, %0.f, %0.f, %0.f) to be the size of "
        "the screen (%0.f, %0.f, %0.f, %0.f)\n",
        VAR_7.X, VAR_7.Y, VAR_7.Width, VAR_7.Height,
        VAR_8.X, VAR_8.Y, VAR_8.Width, VAR_8.Height);


    VAR_8.X = VAR_9.X = 10;
    VAR_8.Y = VAR_9.Y = 12;
    VAR_8.Width = VAR_9.Width = 14;
    VAR_8.Height = VAR_9.Height = 16;

    VAR_4 = FUNC_4(VAR_5, VAR_9.X, VAR_9.Y, VAR_9.Width, VAR_9.Height, VAR_0);
    FUNC_8(VAR_2, VAR_4);

    VAR_4 = FUNC_2(VAR_5, &VAR_7);
    FUNC_8(VAR_2, VAR_4);
    FUNC_9(VAR_7.X == VAR_8.X &&
        VAR_7.Y == VAR_8.Y &&
        VAR_7.Width == VAR_8.Width &&
        VAR_7.Height == VAR_8.Height,
        "Expected clip bounds (%0.f, %0.f, %0.f, %0.f) to be the size of "
        "the clipping rect (%0.f, %0.f, %0.f, %0.f)\n",
        VAR_7.X, VAR_7.Y, VAR_7.Width, VAR_7.Height,
        VAR_8.X, VAR_8.Y, VAR_8.Width, VAR_8.Height);


    VAR_9.X = -10;
    VAR_9.Y = -12;
    VAR_9.Width = 20;
    VAR_9.Height = 24;

    VAR_4 = FUNC_4(VAR_5, VAR_9.X, VAR_9.Y, VAR_9.Width, VAR_9.Height, VAR_0);
    FUNC_8(VAR_2, VAR_4);

    VAR_8.X = 0;
    VAR_8.Y = 0;
    VAR_8.Width = 10;
    VAR_8.Height = 12;

    VAR_4 = FUNC_2(VAR_5, &VAR_7);
    FUNC_8(VAR_2, VAR_4);
    FUNC_9(VAR_7.X == VAR_8.X &&
        VAR_7.Y == VAR_8.Y &&
        VAR_7.Width == VAR_8.Width &&
        VAR_7.Height == VAR_8.Height,
        "Expected clip bounds (%0.f, %0.f, %0.f, %0.f) to be the size of "
        "the visible clipping rect (%0.f, %0.f, %0.f, %0.f)\n",
        VAR_7.X, VAR_7.Y, VAR_7.Width, VAR_7.Height,
        VAR_8.X, VAR_8.Y, VAR_8.Width, VAR_8.Height);

    VAR_4 = FUNC_3(VAR_5, &VAR_10);
    FUNC_8(VAR_2, VAR_4);
    FUNC_9(VAR_10.X == VAR_8.X &&
        VAR_10.Y == VAR_8.Y &&
        VAR_10.Width == VAR_8.Width &&
        VAR_10.Height == VAR_8.Height,
        "Expected clip bounds (%d, %d, %d, %d) to be the size of "
        "the visible clipping rect (%0.f, %0.f, %0.f, %0.f)\n",
        VAR_10.X, VAR_10.Y, VAR_10.Width, VAR_10.Height,
        VAR_8.X, VAR_8.Y, VAR_8.Width, VAR_8.Height);

    FUNC_1(VAR_5);
    FUNC_7(0, VAR_6);
}

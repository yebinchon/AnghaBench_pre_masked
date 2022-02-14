
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_11__ {double member_0; double member_1; } ;
struct TYPE_10__ {double member_0; double member_1; double member_2; double member_3; int X; int Y; int Width; int Height; } ;
typedef int HDC ;
typedef int GraphicsState ;
typedef int GpStatus ;
typedef int GpSolidFill ;
typedef int GpRegion ;
typedef TYPE_1__ GpRectF ;
typedef TYPE_2__ GpPointF ;
typedef int GpMetafile ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBrush ;
typedef int GpBitmap ;
typedef int ARGB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int,int,int*) ;
 int FUNC_3 (int,int,int ,int ,int *,int **) ;
 int FUNC_4 (TYPE_1__*,int **) ;
 int FUNC_5 (int,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int,int,int,int) ;
 int FUNC_11 (int *,int **) ;
 int FUNC_12 (int *,TYPE_1__*) ;
 int FUNC_13 (int ,int ,TYPE_1__ const*,int ,char const*,int **) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int,int,int,int,int ) ;
 int FUNC_17 (int *,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_18 (int *,int ,char*,TYPE_2__ const*,TYPE_1__ const*,int ) ;
 int VAR_8 ;
 int FUNC_19 (int,int) ;
 int FUNC_20 (int,char*,int) ;
 int FUNC_21 (int *,int *,int ,char*,TYPE_2__ const*,TYPE_1__ const*,int ) ;
 int FUNC_22 (int **,char*) ;

__attribute__((used)) static void FUNC_23(void)
{
    GpStatus VAR_9;
    GpMetafile *VAR_10;
    GpGraphics *VAR_11;
    GpBitmap *VAR_12;
    GpRegion *VAR_13;
    GpBrush *VAR_14;
    GpRectF VAR_15;
    ARGB VAR_16;
    HDC VAR_17;
    static const GpRectF VAR_18 = {0.0, 0.0, 100.0, 100.0};
    static const GpPointF VAR_19[3] = {{0.0,0.0},{100.0,0.0},{0.0,100.0}};
    static const WCHAR VAR_20[] = {'w','i','n','e','t','e','s','t',0};
    GraphicsState VAR_21;

    VAR_17 = FUNC_0(0);

    VAR_9 = FUNC_13(VAR_17, VAR_3, &VAR_18, VAR_4, VAR_20, &VAR_10);
    FUNC_19(VAR_5, VAR_9);

    FUNC_1(VAR_17);

    if (VAR_9 != VAR_5)
        return;

    VAR_9 = FUNC_11((GpImage*)VAR_10, &VAR_11);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_15(VAR_11, &VAR_21);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_12(VAR_11, &VAR_15);
    FUNC_19(VAR_5, VAR_9);
    FUNC_20(VAR_15.X == -0x400000, "rect.X = %f\n", VAR_15.X);
    FUNC_20(VAR_15.Y == -0x400000, "rect.Y = %f\n", VAR_15.Y);
    FUNC_20(VAR_15.Width == 0x800000, "rect.Width = %f\n", VAR_15.Width);
    FUNC_20(VAR_15.Height == 0x800000, "rect.Height = %f\n", VAR_15.Height);

    VAR_9 = FUNC_16(VAR_11, 30, 30, 10, 10, VAR_1);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_12(VAR_11, &VAR_15);
    FUNC_19(VAR_5, VAR_9);
    FUNC_20(VAR_15.X == 30, "rect.X = %f\n", VAR_15.X);
    FUNC_20(VAR_15.Y == 30, "rect.Y = %f\n", VAR_15.Y);
    FUNC_20(VAR_15.Width == 10, "rect.Width = %f\n", VAR_15.Width);
    FUNC_20(VAR_15.Height == 10, "rect.Height = %f\n", VAR_15.Height);

    VAR_9 = FUNC_5((ARGB)0xff000000, (GpSolidFill**)&VAR_14);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_10(VAR_11, VAR_14, 0, 0, 100, 100);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_6(VAR_14);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_14(VAR_11, VAR_21);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_16(VAR_11, 30, 30, 10, 10, VAR_2);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_5((ARGB)0xff0000ff, (GpSolidFill**)&VAR_14);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_10(VAR_11, VAR_14, 30, 30, 20, 10);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_6(VAR_14);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_4(&VAR_15, &VAR_13);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_17(VAR_11, VAR_13, VAR_0);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_8(VAR_13);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_7(VAR_11);
    FUNC_19(VAR_5, VAR_9);

    FUNC_18(VAR_10, VAR_8, "clipping metafile", VAR_19, &VAR_18, VAR_7);

    FUNC_22(&VAR_10, "clipping.emf");

    VAR_9 = FUNC_3(100, 100, 0, VAR_6, ((void*)0), &VAR_12);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_11((GpImage*)VAR_12, &VAR_11);
    FUNC_19(VAR_5, VAR_9);

    FUNC_21(VAR_10, VAR_11, VAR_8, "clipping playback", VAR_19, &VAR_18, VAR_7);

    VAR_9 = FUNC_2(VAR_12, 80, 80, &VAR_16);
    FUNC_19(VAR_5, VAR_9);
    FUNC_19(0, VAR_16);

    VAR_9 = FUNC_2(VAR_12, 35, 35, &VAR_16);
    FUNC_19(VAR_5, VAR_9);
    FUNC_19(0xff000000, VAR_16);

    VAR_9 = FUNC_2(VAR_12, 45, 35, &VAR_16);
    FUNC_19(VAR_5, VAR_9);
    FUNC_19(0xff0000ff, VAR_16);

    VAR_9 = FUNC_7(VAR_11);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_9((GpImage*)VAR_12);
    FUNC_19(VAR_5, VAR_9);

    VAR_9 = FUNC_9((GpImage*)VAR_10);
    FUNC_19(VAR_5, VAR_9);
}

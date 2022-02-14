
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_10__ {double member_0; double member_1; } ;
struct TYPE_9__ {double member_0; double member_1; double member_2; double member_3; } ;
typedef int HENHMETAFILE ;
typedef int HDC ;
typedef int GpStatus ;
typedef int GpSolidFill ;
typedef TYPE_1__ GpRectF ;
typedef TYPE_2__ GpPointF ;
typedef int GpMetafile ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBrush ;
typedef int GpBitmap ;
typedef int ARGB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int,int,int*) ;
 int FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 (int,int,int ,int ,int *,int **) ;
 int FUNC_5 (int,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,TYPE_2__ const*,int,double,double,double,double,int ,int *,int *,int *) ;
 int FUNC_10 (int *,int *,int,int,int,int) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int **) ;
 int FUNC_13 (int ,int ,TYPE_1__ const*,int ,char const*,int **) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_14 (int *,int ,char*,TYPE_2__ const*,TYPE_1__ const*,int ) ;
 int FUNC_15 (int,int) ;
 int VAR_6 ;
 int FUNC_16 (int *,int *,int ,char*,TYPE_2__ const*,TYPE_1__ const*,int ) ;
 int FUNC_17 (int **,char*) ;

__attribute__((used)) static void FUNC_18(void)
{
    GpStatus VAR_7;
    GpMetafile *VAR_8;
    GpGraphics *VAR_9;
    HDC VAR_10;
    HENHMETAFILE VAR_11;
    static const GpRectF VAR_12 = {0.0, 0.0, 100.0, 100.0};
    static const GpPointF VAR_13[3] = {{0.0,0.0},{100.0,0.0},{0.0,100.0}};
    static const GpPointF VAR_14[3] = {{0.0,0.0},{50.0,0.0},{0.0,50.0}};
    static const WCHAR VAR_15[] = {'w','i','n','e','t','e','s','t',0};
    GpBitmap *VAR_16;
    ARGB VAR_17;
    GpBrush *VAR_18;

    VAR_10 = FUNC_0(0);

    VAR_7 = FUNC_13(VAR_10, VAR_0, &VAR_12, VAR_2, VAR_15, &VAR_8);
    FUNC_15(VAR_3, VAR_7);

    FUNC_1(VAR_10);

    if (VAR_7 != VAR_3)
        return;

    VAR_7 = FUNC_11(VAR_8, &VAR_11);
    FUNC_15(VAR_1, VAR_7);

    VAR_7 = FUNC_12((GpImage*)VAR_8, &VAR_9);
    FUNC_15(VAR_3, VAR_7);

    VAR_7 = FUNC_5((ARGB)0xff0000ff, (GpSolidFill**)&VAR_18);
    FUNC_15(VAR_3, VAR_7);

    VAR_7 = FUNC_10(VAR_9, VAR_18, 25, 25, 75, 75);
    FUNC_15(VAR_3, VAR_7);

    VAR_7 = FUNC_6(VAR_18);
    FUNC_15(VAR_3, VAR_7);

    VAR_7 = FUNC_7(VAR_9);
    FUNC_15(VAR_3, VAR_7);

    FUNC_14(VAR_8, VAR_6, "fillrect metafile", VAR_13, &VAR_12, VAR_5);

    FUNC_17(&VAR_8, "fillrect.emf");

    VAR_7 = FUNC_4(100, 100, 0, VAR_4, ((void*)0), &VAR_16);
    FUNC_15(VAR_3, VAR_7);

    VAR_7 = FUNC_12((GpImage*)VAR_16, &VAR_9);
    FUNC_15(VAR_3, VAR_7);

    FUNC_16(VAR_8, VAR_9, VAR_6, "fillrect playback", VAR_13, &VAR_12, VAR_5);

    VAR_7 = FUNC_2(VAR_16, 15, 15, &VAR_17);
    FUNC_15(VAR_3, VAR_7);
    FUNC_15(0, VAR_17);

    VAR_7 = FUNC_2(VAR_16, 50, 50, &VAR_17);
    FUNC_15(VAR_3, VAR_7);
    FUNC_15(0xff0000ff, VAR_17);

    VAR_7 = FUNC_3(VAR_16, 50, 50, 0);
    FUNC_15(VAR_3, VAR_7);

    FUNC_16(VAR_8, VAR_9, VAR_6, "fillrect playback", VAR_14, &VAR_12, VAR_5);

    VAR_7 = FUNC_2(VAR_16, 15, 15, &VAR_17);
    FUNC_15(VAR_3, VAR_7);
    FUNC_15(0xff0000ff, VAR_17);

    VAR_7 = FUNC_2(VAR_16, 50, 50, &VAR_17);
    FUNC_15(VAR_3, VAR_7);
    FUNC_15(0, VAR_17);

    VAR_7 = FUNC_3(VAR_16, 15, 15, 0);
    FUNC_15(VAR_3, VAR_7);

    VAR_7 = FUNC_9(VAR_9, (GpImage*)VAR_8, VAR_13, 3,
        0.0, 0.0, 100.0, 100.0, VAR_5, ((void*)0), ((void*)0), ((void*)0));
    FUNC_15(VAR_3, VAR_7);

    VAR_7 = FUNC_2(VAR_16, 15, 15, &VAR_17);
    FUNC_15(VAR_3, VAR_7);
    FUNC_15(0, VAR_17);

    VAR_7 = FUNC_2(VAR_16, 50, 50, &VAR_17);
    FUNC_15(VAR_3, VAR_7);
    FUNC_15(0xff0000ff, VAR_17);

    VAR_7 = FUNC_7(VAR_9);
    FUNC_15(VAR_3, VAR_7);

    VAR_7 = FUNC_8((GpImage*)VAR_16);
    FUNC_15(VAR_3, VAR_7);

    VAR_7 = FUNC_8((GpImage*)VAR_8);
    FUNC_15(VAR_3, VAR_7);
}

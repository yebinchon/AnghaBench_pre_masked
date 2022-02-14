
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int todo_wine ;
typedef int stat ;
typedef char WCHAR ;
typedef int UINT ;
struct TYPE_9__ {double member_0; double member_1; } ;
struct TYPE_8__ {double member_0; double member_1; double member_2; double member_3; } ;
typedef int REAL ;
typedef int InvalidParameter ;
typedef int HDC ;
typedef int GpUnit ;
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
 int FUNC_3 (int,int,int ,int ,int *,int **) ;
 int FUNC_4 (int,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int,int,int,int) ;
 int FUNC_9 (int *,int *,int,int,int,int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int **) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int*) ;
 int FUNC_19 (int ,int ,TYPE_1__ const*,int ,char const*,int **) ;
 int FUNC_20 (int *,double) ;
 int FUNC_21 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_22 (int *,int ,char*,TYPE_2__ const*,TYPE_1__ const*,int) ;
 int FUNC_23 (int,int) ;
 int FUNC_24 (double,int ) ;
 int VAR_7 ;
 int FUNC_25 (int *,int *,int ,char*,TYPE_2__ const*,TYPE_1__ const*,int) ;
 int FUNC_26 (int **,char*) ;

__attribute__((used)) static void FUNC_27(void)
{
    GpStatus VAR_8;
    GpMetafile *VAR_9;
    GpGraphics *VAR_10;
    HDC VAR_11;
    static const GpRectF VAR_12 = {0.0, 0.0, 5.0, 5.0};
    static const GpPointF VAR_13[3] = {{0.0,0.0},{100.0,0.0},{0.0,100.0}};
    static const WCHAR VAR_14[] = {'w','i','n','e','t','e','s','t',0};
    GpBitmap *VAR_15;
    ARGB VAR_16;
    GpBrush *VAR_17;
    GpUnit VAR_18;
    REAL VAR_19, VAR_20, VAR_21;
    UINT VAR_22, VAR_23;

    VAR_11 = FUNC_0(0);

    VAR_8 = FUNC_19(VAR_11, VAR_0, &VAR_12, VAR_1, VAR_14, &VAR_9);
    FUNC_23(VAR_2, VAR_8);

    FUNC_1(VAR_11);

    if (VAR_8 != VAR_2)
        return;

    VAR_8 = FUNC_14((GpImage*)VAR_9, &VAR_20);
    todo_wine FUNC_23(InvalidParameter, VAR_24);

    VAR_8 = FUNC_15((GpImage*)VAR_9, &VAR_21);
    todo_wine FUNC_23(InvalidParameter, VAR_25);

    VAR_8 = FUNC_16((GpImage*)VAR_9, &VAR_22);
    todo_wine FUNC_23(InvalidParameter, VAR_26);

    VAR_8 = FUNC_13((GpImage*)VAR_9, &VAR_23);
    todo_wine FUNC_23(InvalidParameter, VAR_27);

    VAR_8 = FUNC_12((GpImage*)VAR_9, &VAR_10);
    FUNC_23(VAR_2, VAR_8);


    VAR_8 = FUNC_18(VAR_10, &VAR_18);
    FUNC_23(VAR_2, VAR_8);
    FUNC_23(VAR_4, VAR_18);

    VAR_8 = FUNC_17(VAR_10, &VAR_19);
    FUNC_23(VAR_2, VAR_8);
    FUNC_24(1.0, VAR_19);

    VAR_8 = FUNC_10(VAR_10, &VAR_20);
    FUNC_23(VAR_2, VAR_8);
    FUNC_24(96.0, VAR_20);

    VAR_8 = FUNC_11(VAR_10, &VAR_21);
    FUNC_23(VAR_2, VAR_8);
    FUNC_24(96.0, VAR_21);

    VAR_8 = FUNC_4((ARGB)0xff0000ff, (GpSolidFill**)&VAR_17);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_9(VAR_10, VAR_17, 1, 2, 1, 1);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_5(VAR_17);
    FUNC_23(VAR_2, VAR_8);


    VAR_8 = FUNC_21(VAR_10, VAR_6);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_18(VAR_10, &VAR_18);
    FUNC_23(VAR_2, VAR_8);
    FUNC_23(VAR_6, VAR_18);

    VAR_8 = FUNC_4((ARGB)0xff00ff00, (GpSolidFill**)&VAR_17);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_9(VAR_10, VAR_17, 0, 1, 1, 1);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_5(VAR_17);
    FUNC_23(VAR_2, VAR_8);


    VAR_8 = FUNC_20(VAR_10, 3.0);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_17(VAR_10, &VAR_19);
    FUNC_23(VAR_2, VAR_8);
    FUNC_24(3.0, VAR_19);

    VAR_8 = FUNC_4((ARGB)0xff00ffff, (GpSolidFill**)&VAR_17);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_9(VAR_10, VAR_17, 0, 1, 2, 2);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_5(VAR_17);
    FUNC_23(VAR_2, VAR_8);


    VAR_8 = FUNC_21(VAR_10, VAR_5);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_18(VAR_10, &VAR_18);
    FUNC_23(VAR_2, VAR_8);
    FUNC_23(VAR_5, VAR_18);

    VAR_8 = FUNC_4((ARGB)0xffff0000, (GpSolidFill**)&VAR_17);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_8(VAR_10, VAR_17, 1.0/96.0, 0, 1, 1);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_5(VAR_17);
    FUNC_23(VAR_2, VAR_8);


    VAR_8 = FUNC_21(VAR_10, VAR_4);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_18(VAR_10, &VAR_18);
    FUNC_23(VAR_2, VAR_8);
    FUNC_23(VAR_4, VAR_18);

    VAR_8 = FUNC_4((ARGB)0xffff00ff, (GpSolidFill**)&VAR_17);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_8(VAR_10, VAR_17, 3, 3, 2, 2);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_5(VAR_17);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_6(VAR_10);
    FUNC_23(VAR_2, VAR_8);

    FUNC_22(VAR_9, VAR_7, "pagetransform metafile", VAR_13, &VAR_12, VAR_6);

    FUNC_26(&VAR_9, "pagetransform.emf");

    VAR_8 = FUNC_3(100, 100, 0, VAR_3, ((void*)0), &VAR_15);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_12((GpImage*)VAR_15, &VAR_10);
    FUNC_23(VAR_2, VAR_8);

    FUNC_25(VAR_9, VAR_10, VAR_7, "pagetransform playback", VAR_13, &VAR_12, VAR_6);

    VAR_8 = FUNC_2(VAR_15, 50, 50, &VAR_16);
    FUNC_23(VAR_2, VAR_8);
    FUNC_23(0, VAR_16);

    VAR_8 = FUNC_2(VAR_15, 30, 50, &VAR_16);
    FUNC_23(VAR_2, VAR_8);
    FUNC_23(0xff0000ff, VAR_16);

    VAR_8 = FUNC_2(VAR_15, 10, 30, &VAR_16);
    FUNC_23(VAR_2, VAR_8);
    FUNC_23(0xff00ff00, VAR_16);

    VAR_8 = FUNC_2(VAR_15, 20, 80, &VAR_16);
    FUNC_23(VAR_2, VAR_8);
    FUNC_23(0xff00ffff, VAR_16);

    VAR_8 = FUNC_2(VAR_15, 80, 20, &VAR_16);
    FUNC_23(VAR_2, VAR_8);
    FUNC_23(0xffff0000, VAR_16);

    VAR_8 = FUNC_2(VAR_15, 80, 80, &VAR_16);
    FUNC_23(VAR_2, VAR_8);
    FUNC_23(0xffff00ff, VAR_16);

    VAR_8 = FUNC_6(VAR_10);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_7((GpImage*)VAR_15);
    FUNC_23(VAR_2, VAR_8);

    VAR_8 = FUNC_7((GpImage*)VAR_9);
    FUNC_23(VAR_2, VAR_8);
}

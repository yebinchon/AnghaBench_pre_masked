
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
typedef int HBRUSH ;
typedef int GpStatus ;
typedef TYPE_1__ GpRectF ;
typedef TYPE_2__ GpPointF ;
typedef int GpMetafile ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBitmap ;
typedef scalar_t__ BOOL ;
typedef int ARGB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int *,int,int,int*) ;
 int FUNC_6 (int *,int,int,int ) ;
 int FUNC_7 (int,int,int ,int ,int *,int **) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,TYPE_2__ const*,int,double,double,double,double,int ,int *,int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int **) ;
 int FUNC_14 (int ,int ,TYPE_1__ const*,int ,char const*,int **) ;
 int FUNC_15 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_16 (int ,int,int,int,int) ;
 int FUNC_17 (int ,int ) ;
 int VAR_5 ;
 int FUNC_18 (int ,int ,char*) ;
 int FUNC_19 (int *,int ,char*,TYPE_2__ const*,TYPE_1__ const*,int ) ;
 int FUNC_20 (int,int) ;
 int VAR_6 ;
 int FUNC_21 (int,char*,int ) ;
 int FUNC_22 (int *,int *,int ,char*,TYPE_2__ const*,TYPE_1__ const*,int ) ;
 int FUNC_23 (int **,char*) ;

__attribute__((used)) static void FUNC_24(void)
{
    GpStatus VAR_7;
    GpMetafile *VAR_8;
    GpGraphics *VAR_9;
    HDC VAR_10, VAR_11;
    HENHMETAFILE VAR_12;
    BOOL VAR_13;
    static const GpRectF VAR_14 = {0.0, 0.0, 100.0, 100.0};
    static const GpPointF VAR_15[3] = {{0.0,0.0},{100.0,0.0},{0.0,100.0}};
    static const GpPointF VAR_16[3] = {{0.0,0.0},{50.0,0.0},{0.0,50.0}};
    static const WCHAR VAR_17[] = {'w','i','n','e','t','e','s','t',0};
    HBRUSH VAR_18, VAR_19;
    GpBitmap *VAR_20;
    ARGB VAR_21;

    VAR_10 = FUNC_0(0);

    VAR_7 = FUNC_14(VAR_10, VAR_0, &VAR_14, VAR_2, VAR_17, &VAR_8);
    FUNC_20(VAR_3, VAR_7);

    FUNC_2(VAR_10);

    if (VAR_7 != VAR_3)
        return;

    VAR_7 = FUNC_12(VAR_8, &VAR_12);
    FUNC_20(VAR_1, VAR_7);

    VAR_7 = FUNC_13((GpImage*)VAR_8, &VAR_9);
    FUNC_20(VAR_3, VAR_7);

    VAR_7 = FUNC_11(VAR_9, &VAR_11);
    FUNC_20(VAR_3, VAR_7);

    if (VAR_7 != VAR_3)
    {
        FUNC_8(VAR_9);
        FUNC_9((GpImage*)VAR_8);
        return;
    }

    VAR_18 = FUNC_1(0xff0000);

    VAR_19 = FUNC_17(VAR_11, VAR_18);

    FUNC_16(VAR_11, 25, 25, 75, 75);

    FUNC_17(VAR_11, VAR_19);

    FUNC_4(VAR_18);

    VAR_7 = FUNC_15(VAR_9, VAR_11);
    FUNC_20(VAR_3, VAR_7);

    VAR_7 = FUNC_8(VAR_9);
    FUNC_20(VAR_3, VAR_7);

    FUNC_19(VAR_8, VAR_6, "getdc metafile", VAR_15, &VAR_14, VAR_5);

    FUNC_23(&VAR_8, "getdc.emf");

    VAR_7 = FUNC_7(100, 100, 0, VAR_4, ((void*)0), &VAR_20);
    FUNC_20(VAR_3, VAR_7);

    VAR_7 = FUNC_13((GpImage*)VAR_20, &VAR_9);
    FUNC_20(VAR_3, VAR_7);

    FUNC_22(VAR_8, VAR_9, VAR_6, "getdc playback", VAR_15, &VAR_14, VAR_5);

    VAR_7 = FUNC_5(VAR_20, 15, 15, &VAR_21);
    FUNC_20(VAR_3, VAR_7);
    FUNC_20(0, VAR_21);

    VAR_7 = FUNC_5(VAR_20, 50, 50, &VAR_21);
    FUNC_20(VAR_3, VAR_7);
    FUNC_20(0xff0000ff, VAR_21);

    VAR_7 = FUNC_6(VAR_20, 50, 50, 0);
    FUNC_20(VAR_3, VAR_7);

    FUNC_22(VAR_8, VAR_9, VAR_6, "getdc playback", VAR_16, &VAR_14, VAR_5);

    VAR_7 = FUNC_5(VAR_20, 15, 15, &VAR_21);
    FUNC_20(VAR_3, VAR_7);
    FUNC_20(0xff0000ff, VAR_21);

    VAR_7 = FUNC_5(VAR_20, 50, 50, &VAR_21);
    FUNC_20(VAR_3, VAR_7);
    FUNC_20(0, VAR_21);

    VAR_7 = FUNC_6(VAR_20, 15, 15, 0);
    FUNC_20(VAR_3, VAR_7);

    VAR_7 = FUNC_10(VAR_9, (GpImage*)VAR_8, VAR_15, 3,
        0.0, 0.0, 100.0, 100.0, VAR_5, ((void*)0), ((void*)0), ((void*)0));
    FUNC_20(VAR_3, VAR_7);

    VAR_7 = FUNC_5(VAR_20, 15, 15, &VAR_21);
    FUNC_20(VAR_3, VAR_7);
    FUNC_20(0, VAR_21);

    VAR_7 = FUNC_5(VAR_20, 50, 50, &VAR_21);
    FUNC_20(VAR_3, VAR_7);
    FUNC_20(0xff0000ff, VAR_21);

    VAR_7 = FUNC_8(VAR_9);
    FUNC_20(VAR_3, VAR_7);

    VAR_7 = FUNC_9((GpImage*)VAR_20);
    FUNC_20(VAR_3, VAR_7);

    VAR_7 = FUNC_12(VAR_8, &VAR_12);
    FUNC_20(VAR_3, VAR_7);

    VAR_7 = FUNC_9((GpImage*)VAR_8);
    FUNC_20(VAR_3, VAR_7);

    FUNC_18(VAR_12, VAR_6, "getdc emf");

    VAR_13 = FUNC_3(VAR_12);
    FUNC_21(VAR_13 != 0, "Failed to delete enhmetafile %p\n", VAR_12);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int header ;
typedef char WCHAR ;
struct TYPE_13__ {double member_0; double member_1; } ;
struct TYPE_12__ {double member_0; double member_1; double member_2; double member_3; } ;
struct TYPE_11__ {int Type; int Version; } ;
typedef TYPE_1__ MetafileHeader ;
typedef int HENHMETAFILE ;
typedef int HDC ;
typedef int HBRUSH ;
typedef int GpStatus ;
typedef TYPE_2__ GpRectF ;
typedef TYPE_3__ GpPointF ;
typedef int GpMetafile ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBitmap ;
typedef int BYTE ;
typedef int ARGB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int,int const*) ;
 int FUNC_5 (int *,int,int,int*) ;
 int FUNC_6 (int,int,int ,int ,int *,int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int **) ;
 int FUNC_12 (int *,TYPE_1__*) ;
 int FUNC_13 (int ,int ,TYPE_2__ const*,int ,char const*,int **) ;
 int FUNC_14 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (int ,int ) ;
 int VAR_6 ;
 int FUNC_16 (int *,int ,char*,TYPE_3__ const*,TYPE_2__ const*,int ) ;
 int FUNC_17 (int,int) ;
 int VAR_7 ;
 int FUNC_18 (TYPE_1__*,int,int) ;
 int FUNC_19 (int,char*,int) ;
 int FUNC_20 (int *,int *,int ,char*,TYPE_3__ const*,TYPE_2__ const*,int ) ;
 int FUNC_21 (int **,char*) ;

__attribute__((used)) static void FUNC_22(void)
{
    GpStatus VAR_8;
    GpMetafile *VAR_9;
    GpGraphics *VAR_10;
    HDC VAR_11, VAR_12;
    HENHMETAFILE VAR_13;
    MetafileHeader VAR_14;
    static const GpRectF VAR_15 = {0.0, 0.0, 100.0, 100.0};
    static const GpPointF VAR_16[3] = {{0.0,0.0},{40.0,0.0},{0.0,40.0}};
    static const WCHAR VAR_17[] = {'w','i','n','e','t','e','s','t',0};
    HBRUSH VAR_18, VAR_19;
    GpBitmap *VAR_20;
    ARGB VAR_21;

    VAR_11 = FUNC_0(0);

    VAR_8 = FUNC_13(VAR_11, VAR_0, &VAR_15, VAR_2, VAR_17, &VAR_9);
    FUNC_17(VAR_4, VAR_8);

    FUNC_2(VAR_11);

    if (VAR_8 != VAR_4)
            return;

    VAR_8 = FUNC_10(VAR_9, &VAR_13);
    FUNC_17(VAR_1, VAR_8);

    FUNC_18(&VAR_14, 0xaa, sizeof(VAR_14));
    VAR_8 = FUNC_12(VAR_9, &VAR_14);
    FUNC_17(VAR_4, VAR_8);
    FUNC_17(VAR_3, VAR_14.Type);
    FUNC_19(VAR_14.Version == 0xdbc01001 || VAR_14.Version == 0xdbc01002, "Unexpected version %x\n", VAR_14.Version);

    VAR_8 = FUNC_11((GpImage*)VAR_9, &VAR_10);
    FUNC_17(VAR_4, VAR_8);

    VAR_8 = FUNC_9(VAR_10, &VAR_12);
    FUNC_17(VAR_4, VAR_8);

    if (VAR_8 != VAR_4)
    {
        FUNC_7(VAR_10);
        FUNC_8((GpImage*)VAR_9);
        return;
    }

    VAR_18 = FUNC_1(0xff);

    VAR_19 = FUNC_15(VAR_12, VAR_18);

    FUNC_4(VAR_12, 8, (const BYTE*)"winetest");

    FUNC_15(VAR_12, VAR_19);

    FUNC_3(VAR_18);

    VAR_8 = FUNC_14(VAR_10, VAR_12);
    FUNC_17(VAR_4, VAR_8);

    VAR_8 = FUNC_7(VAR_10);
    FUNC_17(VAR_4, VAR_8);

    FUNC_16(VAR_9, VAR_7, "gditransform metafile", VAR_16, &VAR_15, VAR_6);

    FUNC_21(&VAR_9, "gditransform.emf");

    VAR_8 = FUNC_6(100, 100, 0, VAR_5, ((void*)0), &VAR_20);
    FUNC_17(VAR_4, VAR_8);

    VAR_8 = FUNC_11((GpImage*)VAR_20, &VAR_10);
    FUNC_17(VAR_4, VAR_8);

    FUNC_20(VAR_9, VAR_10, VAR_7, "gditransform playback", VAR_16, &VAR_15, VAR_6);

    VAR_8 = FUNC_5(VAR_20, 10, 10, &VAR_21);
    FUNC_17(VAR_4, VAR_8);
    FUNC_17(0xffff0000, VAR_21);

    VAR_8 = FUNC_5(VAR_20, 30, 30, &VAR_21);
    FUNC_17(VAR_4, VAR_8);
    FUNC_17(0x00000000, VAR_21);

    VAR_8 = FUNC_7(VAR_10);
    FUNC_17(VAR_4, VAR_8);

    VAR_8 = FUNC_8((GpImage*)VAR_20);
    FUNC_17(VAR_4, VAR_8);

    VAR_8 = FUNC_8((GpImage*)VAR_9);
    FUNC_17(VAR_4, VAR_8);
}

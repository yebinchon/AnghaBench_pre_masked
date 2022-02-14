
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int info ;
typedef int buff ;
typedef char WCHAR ;
struct TYPE_29__ {double member_0; double member_1; } ;
struct TYPE_28__ {double member_0; double member_1; double member_2; double member_3; } ;
struct TYPE_27__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biCompression; } ;
struct TYPE_26__ {double member_0; double member_1; double member_2; double member_3; double member_4; } ;
struct TYPE_25__ {double member_0; double member_1; double member_2; double member_3; double member_4; } ;
struct TYPE_24__ {double member_0; double member_1; double member_2; double member_3; double member_4; } ;
struct TYPE_23__ {double member_0; double member_1; double member_2; double member_3; double member_4; } ;
struct TYPE_22__ {double member_0; double member_1; double member_2; double member_3; double member_4; } ;
struct TYPE_21__ {TYPE_6__ member_4; TYPE_5__ member_3; TYPE_4__ member_2; TYPE_3__ member_1; TYPE_2__ member_0; } ;
struct TYPE_20__ {TYPE_7__ bmiHeader; } ;
struct TYPE_19__ {TYPE_1__ member_0; } ;
typedef int HENHMETAFILE ;
typedef int HDC ;
typedef int GpStatus ;
typedef TYPE_8__ GpRectF ;
typedef TYPE_9__ GpPointF ;
typedef int GpMetafile ;
typedef int GpImageAttributes ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBitmap ;
typedef TYPE_10__ ColorMatrix ;
typedef TYPE_11__ BYTE ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_11__ BITMAPINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_11__*,TYPE_11__*,int **) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int ,int ,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,TYPE_9__ const*,int,double,double,double,double,int ,int *,int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int **) ;
 int FUNC_12 (int ,int ,TYPE_8__ const*,int ,char const*,int **) ;
 int FUNC_13 (int *,int ,int ,TYPE_10__ const*,int *,int ) ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_16 (int ,int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (TYPE_11__*,int,int) ;
 int FUNC_19 (int **,char*) ;
 int FUNC_20 (char*) ;

__attribute__((used)) static void FUNC_21(void)
{
    static const WCHAR VAR_10[] = {'w','i','n','e','t','e','s','t',0};
    static const GpPointF VAR_11[3] = {{10.0,10.0},{85.0,15.0},{10.0,80.0}};
    static const GpRectF VAR_12 = {0.0, 0.0, 100.0, 100.0};
    const ColorMatrix VAR_13 = {{
        {2.0,0.0,0.0,0.0,0.0},
        {0.0,1.0,0.0,0.0,0.0},
        {0.0,0.0,1.0,0.0,0.0},
        {0.0,0.0,0.0,1.0,0.0},
        {0.0,0.0,0.0,0.0,1.0}}};

    GpImageAttributes *VAR_14;
    GpMetafile *VAR_15;
    GpGraphics *VAR_16;
    HENHMETAFILE VAR_17;
    GpStatus VAR_18;
    BITMAPINFO VAR_19;
    BYTE VAR_20[400];
    GpImage *VAR_21;
    HDC VAR_22;

    VAR_22 = FUNC_0(0);
    VAR_18 = FUNC_12(VAR_22, VAR_3, &VAR_12, VAR_4, VAR_10, &VAR_15);
    FUNC_17(VAR_5, VAR_18);

    VAR_18 = FUNC_11((GpImage*)VAR_15, &VAR_16);
    FUNC_17(VAR_5, VAR_18);

    FUNC_18(&VAR_19, 0, sizeof(VAR_19));
    VAR_19.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_19.bmiHeader.biWidth = 10;
    VAR_19.bmiHeader.biHeight = 10;
    VAR_19.bmiHeader.biPlanes = 1;
    VAR_19.bmiHeader.biBitCount = 32;
    VAR_19.bmiHeader.biCompression = VAR_0;
    FUNC_18(VAR_20, 0x80, sizeof(VAR_20));
    VAR_18 = FUNC_3(&VAR_19, VAR_20, (GpBitmap**)&VAR_21);
    FUNC_17(VAR_5, VAR_18);

    VAR_18 = FUNC_4(&VAR_14);
    FUNC_17(VAR_5, VAR_18);

    VAR_18 = FUNC_13(VAR_14, VAR_1,
            VAR_6, &VAR_13, ((void*)0), VAR_2);
    FUNC_17(VAR_5, VAR_18);

    VAR_18 = FUNC_9(VAR_16, VAR_21, VAR_11, 3,
            0.0, 0.0, 10.0, 10.0, VAR_7, VAR_14, ((void*)0), ((void*)0));
    FUNC_8(VAR_14);
    FUNC_17(VAR_5, VAR_18);

    FUNC_7(VAR_21);

    VAR_18 = FUNC_6(VAR_16);
    FUNC_17(VAR_5, VAR_18);
    FUNC_19(&VAR_15, "draw_image_bitmap.emf");

    VAR_18 = FUNC_10(VAR_15, &VAR_17);
    FUNC_17(VAR_5, VAR_18);

    FUNC_16(VAR_17, VAR_8, "draw image bitmap");


    VAR_18 = FUNC_12(VAR_22, VAR_3, &VAR_12, VAR_4, VAR_10, &VAR_15);
    FUNC_17(VAR_5, VAR_18);

    VAR_18 = FUNC_11((GpImage*)VAR_15, &VAR_16);
    FUNC_17(VAR_5, VAR_18);

    VAR_18 = FUNC_5(VAR_17, VAR_6, (GpMetafile**)&VAR_21);
    FUNC_17(VAR_5, VAR_18);

    VAR_18 = FUNC_9(VAR_16, VAR_21, VAR_11, 3,
            0.0, 0.0, 100.0, 100.0, VAR_7, ((void*)0), ((void*)0), ((void*)0));
    FUNC_17(VAR_5, VAR_18);

    FUNC_7(VAR_21);

    VAR_18 = FUNC_6(VAR_16);
    FUNC_17(VAR_5, VAR_18);
    FUNC_19(&VAR_15, "draw_image_metafile.emf");

    VAR_18 = FUNC_10(VAR_15, &VAR_17);
    FUNC_17(VAR_5, VAR_18);

    if (FUNC_15(FUNC_14("gdiplus.dll"), "GdipConvertToEmfPlus"))
    {
        FUNC_16(VAR_17, VAR_9, "draw image metafile");
    }
    else
    {
        FUNC_20("draw image metafile records tests skipped\n");
    }
    FUNC_2(VAR_17);

    FUNC_1(VAR_22);
    VAR_18 = FUNC_7((GpImage*)VAR_15);
    FUNC_17(VAR_5, VAR_18);
}

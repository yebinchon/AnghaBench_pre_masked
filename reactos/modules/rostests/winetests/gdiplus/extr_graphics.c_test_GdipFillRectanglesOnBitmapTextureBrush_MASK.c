
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_2__ {int member_0; int member_1; int member_2; int member_3; int right; int left; int bottom; int top; } ;
typedef TYPE_1__ RECT ;
typedef int GpTexture ;
typedef int GpStatus ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBrush ;
typedef int GpBitmap ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ ARGB ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int,int,scalar_t__*) ;
 int FUNC_2 (int,int,int,int ,int *,int **) ;
 int FUNC_3 (int *,int ,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ,int ,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int **) ;
 int FUNC_10 (int *,int ,int ,int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (int,char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    ARGB VAR_4[6] = {0,0,0,0,0,0};
    UINT VAR_5 = 0;
    UINT VAR_6 = 0;
    RECT VAR_7 = {100, 100, 180, 180};
    UINT VAR_8 = VAR_7.right - VAR_7.left;
    UINT VAR_9 = VAR_7.bottom - VAR_7.top;
    UINT VAR_10 = VAR_8/2;
    UINT VAR_11 = VAR_9/2;

    GpStatus VAR_12 = 0;
    union
    {
        GpBitmap *bitmap;
        GpImage *image;
    } VAR_13;
    union
    {
        GpBitmap *bitmap;
        GpImage *image;
    } VAR_14;

    GpTexture *VAR_15 = ((void*)0);
    GpGraphics *VAR_16 = ((void*)0);
    BYTE *VAR_17 = FUNC_0(VAR_10*VAR_11*4);
    DWORD *VAR_18 = (DWORD *)VAR_17;
    FUNC_13(VAR_18 != ((void*)0), "Expected src_img_data is valid\n");

    VAR_12 = FUNC_2(VAR_8, VAR_9, VAR_8*4,
            VAR_3, ((void*)0), &VAR_14.bitmap);
    FUNC_11(VAR_2, VAR_12);


    for(VAR_6 = 0; VAR_6 < VAR_11; ++VAR_6)
    {
        for(VAR_5 = 0; VAR_5 < VAR_10; ++VAR_5)
        {
            VAR_18[VAR_5] = VAR_0;
        }

        VAR_18 += VAR_10;
    }

    VAR_12 = FUNC_2(VAR_10, VAR_11, VAR_10*4,
            VAR_3, VAR_17, &VAR_13.bitmap);
    FUNC_11(VAR_2, VAR_12);

    VAR_12 = FUNC_3(VAR_13.image, 0, &VAR_15);
    FUNC_11(VAR_2, VAR_12);

    VAR_12 = FUNC_9(VAR_14.image, &VAR_16);
    FUNC_11(VAR_2, VAR_12);

    VAR_12 = FUNC_10(VAR_16, 0, 0, VAR_8, VAR_9, VAR_1);
    FUNC_11(VAR_2, VAR_12);

    VAR_12 = FUNC_7(VAR_16, (GpBrush*)VAR_15, 0, 0, VAR_8/2, VAR_9/2);
    FUNC_11(VAR_2, VAR_12);

    FUNC_4((GpBrush*)VAR_15);
    FUNC_5(VAR_16);

    VAR_12 = FUNC_1(VAR_14.bitmap, 0, 0, &VAR_4[0]);
    FUNC_11(VAR_2, VAR_12);
    VAR_12 = FUNC_1(VAR_14.bitmap, 0, 1, &VAR_4[1]);
    FUNC_11(VAR_2, VAR_12);
    VAR_12 = FUNC_1(VAR_14.bitmap, 1, 0, &VAR_4[2]);
    FUNC_11(VAR_2, VAR_12);
    VAR_12 = FUNC_1(VAR_14.bitmap, VAR_8/2, 0, &VAR_4[3]);
    FUNC_11(VAR_2, VAR_12);
    VAR_12 = FUNC_1(VAR_14.bitmap, VAR_8/2, VAR_9/2, &VAR_4[4]);
    FUNC_11(VAR_2, VAR_12);
    VAR_12 = FUNC_1(VAR_14.bitmap, 0, VAR_9/2, &VAR_4[5]);
    FUNC_11(VAR_2, VAR_12);

    FUNC_13(FUNC_12(VAR_4[0]) && FUNC_12(VAR_4[1]) && FUNC_12(VAR_4[2]) &&
       VAR_4[3] == 0 && VAR_4[4] == 0 && VAR_4[5] == 0,
       "Expected GdipFillRectangleI take effect!\n" );

    FUNC_6(VAR_13.image);
    FUNC_6(VAR_14.image);
    FUNC_8(VAR_17);
}

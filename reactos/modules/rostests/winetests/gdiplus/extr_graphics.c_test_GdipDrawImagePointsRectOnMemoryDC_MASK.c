
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int member_1; int member_0; } ;
struct TYPE_4__ {int member_0; int member_1; int member_2; int member_3; int right; int left; int bottom; int top; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef int HGDIOBJ ;
typedef int HDC ;
typedef int HBITMAP ;
typedef int GpStatus ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBitmap ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ ARGB ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int,int,int,int ,int *,int **) ;
 int FUNC_6 (int ,int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int,int,int,int,int ,int ,int,int,int ,int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ,int ,int,int) ;
 int FUNC_12 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int,int,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (int,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (int,char*) ;

__attribute__((used)) static void FUNC_20(void)
{
    ARGB VAR_5[6] = {0,0,0,0,0,0};
    POINT VAR_6 = {0,0};
    RECT VAR_7 = {100, 100, 180, 180};
    UINT VAR_8 = VAR_7.right - VAR_7.left;
    UINT VAR_9 = VAR_7.bottom - VAR_7.top;
    GpStatus VAR_10 = 0;
    union
    {
        GpBitmap *bitmap;
        GpImage *image;
    } VAR_11;
    GpGraphics *VAR_12 = ((void*)0);
    HDC VAR_13 = FUNC_12( VAR_4);
    HDC VAR_14 = FUNC_1(VAR_13);
    HBITMAP VAR_15 = FUNC_0(VAR_13, VAR_8, VAR_9);
    HGDIOBJ VAR_16 = FUNC_14(VAR_14, VAR_15);

    UINT VAR_17 = 0;
    UINT VAR_18 = 0;
    UINT VAR_19 = VAR_8/2;
    UINT VAR_20 = VAR_9/2;
    BYTE *VAR_21 = FUNC_4(VAR_19*VAR_20*4);
    DWORD *VAR_22 = (DWORD *)VAR_21;
    FUNC_19(VAR_22 != ((void*)0), "Expected src_img_data is valid\n");


    FUNC_15(VAR_14, VAR_7.left, VAR_7.top, &VAR_6);


    for(VAR_18 = 0; VAR_18 < VAR_20; ++VAR_18)
    {
        for(VAR_17 = 0; VAR_17 < VAR_19; ++VAR_17)
        {
            VAR_22[VAR_17] = VAR_0;
        }

        VAR_22 += VAR_19;
    }

    VAR_10 = FUNC_5(VAR_19, VAR_20, VAR_19*4,
            VAR_2, VAR_21, &VAR_11.bitmap);
    FUNC_16(VAR_1, VAR_10);

    VAR_10 = FUNC_6(VAR_14, &VAR_12);
    FUNC_16(VAR_1, VAR_10);

    VAR_10 = FUNC_9(VAR_12, VAR_11.image,
            VAR_7.left+VAR_8/2, VAR_7.top+VAR_9/2, VAR_8/2, VAR_9/2,
            0, 0, VAR_19, VAR_20, VAR_3, ((void*)0), ((void*)0), ((void*)0));
    FUNC_16(VAR_1, VAR_10);

    FUNC_8(VAR_11.image);
    FUNC_7(VAR_12);
    FUNC_10(VAR_21);

    VAR_22 = FUNC_11(VAR_14, VAR_15, VAR_8, VAR_9);
    if (VAR_22)
    {
       VAR_5[0] = FUNC_17(VAR_8/2, VAR_9/2);
       VAR_5[1] = FUNC_17(VAR_8/2+1, VAR_9/2);
       VAR_5[2] = FUNC_17(VAR_8/2, VAR_9/2+1);
       VAR_5[3] = FUNC_17(VAR_8/2-1, VAR_9/2-1);
       VAR_5[4] = FUNC_17(VAR_8/2-1, VAR_9-1);
       VAR_5[5] = FUNC_17(VAR_8-1, VAR_9/2-1);
    }
    FUNC_19(FUNC_18(VAR_5[0]) && FUNC_18(VAR_5[1]) && FUNC_18(VAR_5[2]) &&
       VAR_5[3] == 0 && VAR_5[4] == 0 && VAR_5[5] == 0,
       "Expected GdipDrawImageRectRectI take effect!\n" );
    FUNC_10(VAR_22);

    FUNC_14(VAR_14, VAR_16);
    FUNC_3(VAR_15);
    FUNC_2(VAR_14);
    FUNC_13(VAR_4, VAR_13);
}

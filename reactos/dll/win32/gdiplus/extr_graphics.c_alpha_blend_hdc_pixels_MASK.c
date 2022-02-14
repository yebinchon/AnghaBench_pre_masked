
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; scalar_t__ biClrImportant; scalar_t__ biClrUsed; scalar_t__ biYPelsPerMeter; scalar_t__ biXPelsPerMeter; scalar_t__ biSizeImage; int biCompression; } ;
struct TYPE_5__ {int hdc; } ;
typedef int PixelFormat ;
typedef int INT ;
typedef int HDC ;
typedef int HBITMAP ;
typedef int GpStatus ;
typedef TYPE_1__ GpGraphics ;
typedef int BYTE ;
typedef TYPE_2__ BITMAPINFOHEADER ;
typedef int BITMAPINFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,void**,int *,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int ) ;
 int VAR_7 ;
 int FUNC_6 (int,int,int *,int,int const*,int) ;
 int FUNC_7 (TYPE_1__*,int,int,int,int,int ,int ,int ,int,int) ;
 int FUNC_8 (int *,int const*,int) ;

__attribute__((used)) static GpStatus FUNC_9(GpGraphics *VAR_8, INT VAR_9, INT VAR_10,
    const BYTE *VAR_11, INT VAR_12, INT VAR_13, INT VAR_14, PixelFormat VAR_15)
{
    HDC VAR_16;
    HBITMAP VAR_17;
    BITMAPINFOHEADER VAR_18;
    BYTE *VAR_19;

    VAR_16 = FUNC_0(0);

    VAR_18.biSize = sizeof(BITMAPINFOHEADER);
    VAR_18.biWidth = VAR_12;
    VAR_18.biHeight = -VAR_13;
    VAR_18.biPlanes = 1;
    VAR_18.biBitCount = 32;
    VAR_18.biCompression = VAR_0;
    VAR_18.biSizeImage = 0;
    VAR_18.biXPelsPerMeter = 0;
    VAR_18.biYPelsPerMeter = 0;
    VAR_18.biClrUsed = 0;
    VAR_18.biClrImportant = 0;

    VAR_17 = FUNC_1(VAR_16, (BITMAPINFO*)&VAR_18, VAR_1,
        (void**)&VAR_19, ((void*)0), 0);

    if ((FUNC_4(VAR_8->hdc, VAR_7) == VAR_2 &&
         FUNC_4(VAR_8->hdc, VAR_6) == VAR_5) ||
            VAR_15 & VAR_4)
        FUNC_8(VAR_19, VAR_11, VAR_12 * VAR_13 * 4);
    else
        FUNC_6(VAR_12, VAR_13, VAR_19,
                                        4 * VAR_12, VAR_11, VAR_14);

    FUNC_5(VAR_16, VAR_17);
    FUNC_7(VAR_8, VAR_9, VAR_10, VAR_12, VAR_13,
                    VAR_16, 0, 0, VAR_12, VAR_13);
    FUNC_2(VAR_16);
    FUNC_3(VAR_17);

    return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int Width; int Height; int Stride; scalar_t__ Reserved; TYPE_2__* Scan0; int PixelFormat; } ;
struct TYPE_9__ {int biSize; int biWidth; int biPlanes; int biBitCount; int biSizeImage; int biCompression; int biHeight; } ;
struct TYPE_10__ {int width; int height; struct TYPE_10__* info; struct TYPE_10__* bits; TYPE_1__ bmiHeader; } ;
typedef TYPE_2__* PDIBITMAP ;
typedef int LPTSTR ;
typedef int INT ;
typedef int GpImage ;
typedef int GpBitmap ;
typedef int DIBITMAP ;
typedef TYPE_3__ BitmapData ;
typedef int BITMAPINFOHEADER ;
typedef int BITMAPINFO ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int,int ,TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int*) ;
 scalar_t__ FUNC_5 (int *,int*) ;
 int FUNC_6 () ;
 void* FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (TYPE_2__*,int) ;

PDIBITMAP
FUNC_10(LPTSTR VAR_5)
{
    PDIBITMAP VAR_6;
    GpBitmap *VAR_7;
    BitmapData VAR_8;

    if (FUNC_2(VAR_5, &VAR_7) != VAR_3)
    {
        return ((void*)0);
    }

    VAR_6 = FUNC_7(FUNC_6(), 0, sizeof(DIBITMAP));
    if (VAR_6 == ((void*)0))
    {
        FUNC_3((GpImage*)VAR_7);
        return ((void*)0);
    }

    VAR_6->info = FUNC_7(FUNC_6(), 0, sizeof(BITMAPINFO));
    if (VAR_6->info == ((void*)0))
    {
        FUNC_8(FUNC_6(), 0, VAR_6);
        FUNC_3((GpImage*)VAR_7);
        return ((void*)0);
    }

    if (FUNC_5((GpImage*)VAR_7, &VAR_6->width) != VAR_3 ||
        FUNC_4((GpImage*)VAR_7, &VAR_6->height) != VAR_3)
    {
        FUNC_8(FUNC_6(), 0, VAR_6->info);
        FUNC_8(FUNC_6(), 0, VAR_6);
        FUNC_3((GpImage*)VAR_7);
        return ((void*)0);
    }

    VAR_6->bits = FUNC_7(FUNC_6(), 0, VAR_6->width * VAR_6->height * 4);
    if (!VAR_6->bits)
    {
        FUNC_8(FUNC_6(), 0, VAR_6->info);
        FUNC_8(FUNC_6(), 0, VAR_6);
        FUNC_3((GpImage*)VAR_7);
        return ((void*)0);
    }

    FUNC_9(VAR_6->info, sizeof(BITMAPINFO));
    VAR_6->info->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_6->info->bmiHeader.biWidth = VAR_6->width;
    VAR_6->info->bmiHeader.biHeight = -(INT)VAR_6->height;
    VAR_6->info->bmiHeader.biPlanes = 1;
    VAR_6->info->bmiHeader.biBitCount = 32;
    VAR_6->info->bmiHeader.biCompression = VAR_0;
    VAR_6->info->bmiHeader.biSizeImage = VAR_6->width * VAR_6->height * 4;

    VAR_8.Width = VAR_6->width;
    VAR_8.Height = VAR_6->height;
    VAR_8.Stride = VAR_6->width * 4;
    VAR_8.PixelFormat = VAR_4;
    VAR_8.Scan0 = VAR_6->bits;
    VAR_8.Reserved = 0;

    if (FUNC_0(VAR_7, ((void*)0), VAR_1 | VAR_2, VAR_4, &VAR_8) != VAR_3)
    {
        FUNC_8(FUNC_6(), 0, VAR_6->bits);
        FUNC_8(FUNC_6(), 0, VAR_6->info);
        FUNC_8(FUNC_6(), 0, VAR_6);
        FUNC_3((GpImage*)VAR_7);
        return ((void*)0);
    }

    FUNC_1(VAR_7, &VAR_8);
    FUNC_3((GpImage*)VAR_7);

    return VAR_6;
}

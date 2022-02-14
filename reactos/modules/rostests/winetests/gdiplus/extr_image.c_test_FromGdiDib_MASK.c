
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rbmi ;
struct TYPE_4__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biCompression; } ;
struct TYPE_5__ {TYPE_1__ bmiHeader; } ;
typedef int RGBQUAD ;
typedef scalar_t__ PixelFormat ;
typedef scalar_t__ GpStatus ;
typedef int GpImage ;
typedef int GpBitmap ;
typedef int BYTE ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,int **) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    GpBitmap *VAR_9;
    GpStatus VAR_10;
    BYTE VAR_11[400];
    BYTE VAR_12[sizeof(BITMAPINFOHEADER)+256*sizeof(RGBQUAD)];
    BITMAPINFO *VAR_13 = (BITMAPINFO*)VAR_12;
    PixelFormat VAR_14;

    VAR_9 = ((void*)0);

    FUNC_4(VAR_12, 0, sizeof(VAR_12));

    VAR_13->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_13->bmiHeader.biWidth = 10;
    VAR_13->bmiHeader.biHeight = 10;
    VAR_13->bmiHeader.biPlanes = 1;
    VAR_13->bmiHeader.biBitCount = 32;
    VAR_13->bmiHeader.biCompression = VAR_0;

    VAR_10 = FUNC_0(((void*)0), VAR_11, &VAR_9);
    FUNC_3(VAR_1, VAR_10);

    VAR_10 = FUNC_0(VAR_13, ((void*)0), &VAR_9);
    FUNC_3(VAR_1, VAR_10);

    VAR_10 = FUNC_0(VAR_13, VAR_11, ((void*)0));
    FUNC_3(VAR_1, VAR_10);

    VAR_10 = FUNC_0(VAR_13, VAR_11, &VAR_9);
    FUNC_3(VAR_2, VAR_10);
    FUNC_5(((void*)0) != VAR_9, "Expected bitmap to be initialized\n");
    if (VAR_10 == VAR_2)
    {
        VAR_10 = FUNC_2((GpImage*)VAR_9, &VAR_14);
        FUNC_3(VAR_2, VAR_10);
        FUNC_3(VAR_6, VAR_14);

        FUNC_1((GpImage*)VAR_9);
    }

    VAR_13->bmiHeader.biBitCount = 24;
    VAR_10 = FUNC_0(VAR_13, VAR_11, &VAR_9);
    FUNC_3(VAR_2, VAR_10);
    FUNC_5(((void*)0) != VAR_9, "Expected bitmap to be initialized\n");
    if (VAR_10 == VAR_2)
    {
        VAR_10 = FUNC_2((GpImage*)VAR_9, &VAR_14);
        FUNC_3(VAR_2, VAR_10);
        FUNC_3(VAR_5, VAR_14);

        FUNC_1((GpImage*)VAR_9);
    }

    VAR_13->bmiHeader.biBitCount = 16;
    VAR_10 = FUNC_0(VAR_13, VAR_11, &VAR_9);
    FUNC_3(VAR_2, VAR_10);
    FUNC_5(((void*)0) != VAR_9, "Expected bitmap to be initialized\n");
    if (VAR_10 == VAR_2)
    {
        VAR_10 = FUNC_2((GpImage*)VAR_9, &VAR_14);
        FUNC_3(VAR_2, VAR_10);
        FUNC_3(VAR_3, VAR_14);

        FUNC_1((GpImage*)VAR_9);
    }

    VAR_13->bmiHeader.biBitCount = 8;
    VAR_10 = FUNC_0(VAR_13, VAR_11, &VAR_9);
    FUNC_3(VAR_2, VAR_10);
    FUNC_5(((void*)0) != VAR_9, "Expected bitmap to be initialized\n");
    if (VAR_10 == VAR_2)
    {
        VAR_10 = FUNC_2((GpImage*)VAR_9, &VAR_14);
        FUNC_3(VAR_2, VAR_10);
        FUNC_3(VAR_8, VAR_14);

        FUNC_1((GpImage*)VAR_9);
    }

    VAR_13->bmiHeader.biBitCount = 4;
    VAR_10 = FUNC_0(VAR_13, VAR_11, &VAR_9);
    FUNC_3(VAR_2, VAR_10);
    FUNC_5(((void*)0) != VAR_9, "Expected bitmap to be initialized\n");
    if (VAR_10 == VAR_2)
    {
        VAR_10 = FUNC_2((GpImage*)VAR_9, &VAR_14);
        FUNC_3(VAR_2, VAR_10);
        FUNC_3(VAR_7, VAR_14);

        FUNC_1((GpImage*)VAR_9);
    }

    VAR_13->bmiHeader.biBitCount = 1;
    VAR_10 = FUNC_0(VAR_13, VAR_11, &VAR_9);
    FUNC_3(VAR_2, VAR_10);
    FUNC_5(((void*)0) != VAR_9, "Expected bitmap to be initialized\n");
    if (VAR_10 == VAR_2)
    {
        VAR_10 = FUNC_2((GpImage*)VAR_9, &VAR_14);
        FUNC_3(VAR_2, VAR_10);
        FUNC_3(VAR_4, VAR_14);

        FUNC_1((GpImage*)VAR_9);
    }

    VAR_13->bmiHeader.biBitCount = 0;
    VAR_10 = FUNC_0(VAR_13, VAR_11, &VAR_9);
    FUNC_3(VAR_1, VAR_10);
}

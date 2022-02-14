
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int rbmi ;
typedef int ptf ;
struct TYPE_9__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biCompression; } ;
struct TYPE_11__ {TYPE_1__ bmiHeader; } ;
struct TYPE_10__ {int X; int Y; } ;
typedef int HDC ;
typedef int GpStatus ;
typedef TYPE_2__ GpPointF ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBitmap ;
typedef TYPE_2__ BYTE ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_4__ BITMAPINFO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_2__*,int **) ;
 int FUNC_1 (int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,TYPE_2__*,int,int ,int ,int,int,int ,int *,int *,int *) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (int,char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    GpStatus VAR_6;
    GpGraphics *VAR_7 = ((void*)0);
    GpPointF VAR_8[4];
    GpBitmap *VAR_9 = ((void*)0);
    BYTE VAR_10[sizeof(BITMAPINFOHEADER)];
    BYTE VAR_11[400];
    BITMAPINFO *VAR_12 = (BITMAPINFO*)VAR_10;
    HDC VAR_13 = FUNC_5( VAR_5 );
    if (!VAR_13)
        return;

    FUNC_8(VAR_10, 0, sizeof(VAR_10));
    VAR_12->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_12->bmiHeader.biWidth = 10;
    VAR_12->bmiHeader.biHeight = 10;
    VAR_12->bmiHeader.biPlanes = 1;
    VAR_12->bmiHeader.biBitCount = 32;
    VAR_12->bmiHeader.biCompression = VAR_0;
    VAR_6 = FUNC_0(VAR_12, VAR_11, &VAR_9);
    FUNC_7(VAR_3, VAR_6);
    FUNC_9(((void*)0) != VAR_9, "Expected bitmap to be initialized\n");
    VAR_6 = FUNC_1(VAR_13, &VAR_7);
    FUNC_7(VAR_3, VAR_6);
    VAR_8[0].X = 0;
    VAR_8[0].Y = 0;
    VAR_8[1].X = 10;
    VAR_8[1].Y = 0;
    VAR_8[2].X = 0;
    VAR_8[2].Y = 10;
    VAR_8[3].X = 10;
    VAR_8[3].Y = 10;
    VAR_6 = FUNC_4(VAR_7, (GpImage*)VAR_9, VAR_8, 4, 0, 0, 10, 10, VAR_4, ((void*)0), ((void*)0), ((void*)0));
    FUNC_7(VAR_2, VAR_6);
    VAR_6 = FUNC_4(VAR_7, (GpImage*)VAR_9, VAR_8, 2, 0, 0, 10, 10, VAR_4, ((void*)0), ((void*)0), ((void*)0));
    FUNC_7(VAR_1, VAR_6);
    VAR_6 = FUNC_4(VAR_7, (GpImage*)VAR_9, VAR_8, 3, 0, 0, 10, 10, VAR_4, ((void*)0), ((void*)0), ((void*)0));
    FUNC_7(VAR_3, VAR_6);
    VAR_6 = FUNC_4(VAR_7, ((void*)0), VAR_8, 3, 0, 0, 10, 10, VAR_4, ((void*)0), ((void*)0), ((void*)0));
    FUNC_7(VAR_1, VAR_6);
    VAR_6 = FUNC_4(VAR_7, (GpImage*)VAR_9, ((void*)0), 3, 0, 0, 10, 10, VAR_4, ((void*)0), ((void*)0), ((void*)0));
    FUNC_7(VAR_1, VAR_6);
    VAR_6 = FUNC_4(VAR_7, (GpImage*)VAR_9, VAR_8, 3, 0, 0, 0, 0, VAR_4, ((void*)0), ((void*)0), ((void*)0));
    FUNC_7(VAR_3, VAR_6);
    FUNC_8(VAR_8, 0, sizeof(VAR_8));
    VAR_6 = FUNC_4(VAR_7, (GpImage*)VAR_9, VAR_8, 3, 0, 0, 10, 10, VAR_4, ((void*)0), ((void*)0), ((void*)0));
    FUNC_7(VAR_3, VAR_6);

    FUNC_3((GpImage*)VAR_9);
    FUNC_2(VAR_7);
    FUNC_6(VAR_5, VAR_13);
}

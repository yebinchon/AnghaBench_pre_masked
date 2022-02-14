
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int biSize; int biBitCount; int biClrUsed; int biHeight; int biSizeImage; } ;
struct TYPE_7__ {TYPE_1__ bmiHeader; } ;
typedef int * PVOID ;
typedef int * PUINT ;
typedef TYPE_2__* PBITMAPINFO ;
typedef int * HDC ;
typedef int HBRUSH ;
typedef int * HBITMAP ;
typedef int BOOL ;
typedef int BITMAPINFOHEADER ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,int ,int *,TYPE_2__*,int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int * FUNC_5 (int ,int *) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_2__*,int) ;

BOOL
FUNC_7(
    HBRUSH VAR_2,
    PBITMAPINFO VAR_3,
    PVOID *VAR_4,
    PUINT VAR_5)
{
    HBITMAP VAR_6;
    HDC VAR_7;


    VAR_6 = FUNC_5(VAR_2, VAR_5);
    if (VAR_6 == ((void*)0))
        return VAR_0;

    VAR_7 = FUNC_0(((void*)0));
    if (VAR_7 == ((void*)0))
        return VAR_0;


    FUNC_6(VAR_3, sizeof(*VAR_3));
    VAR_3->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);


    if (!FUNC_1(VAR_7, VAR_6, 0, 0, ((void*)0), VAR_3, *VAR_5))
        return VAR_0;


    *VAR_4 = FUNC_3(FUNC_2(), 0, VAR_3->bmiHeader.biSizeImage);
    if (*VAR_4 == ((void*)0))
        return VAR_0;


    if (!FUNC_1(VAR_7, VAR_6, 0, VAR_3->bmiHeader.biHeight, *VAR_4, VAR_3, *VAR_5))
    {
        FUNC_4(FUNC_2(), 0, *VAR_4);
        *VAR_4 = ((void*)0);
        return VAR_0;
    }


    if (VAR_3->bmiHeader.biBitCount <= 8)
    {
        VAR_3->bmiHeader.biClrUsed = 1 << VAR_3->bmiHeader.biBitCount;
    }

    return VAR_1;
}

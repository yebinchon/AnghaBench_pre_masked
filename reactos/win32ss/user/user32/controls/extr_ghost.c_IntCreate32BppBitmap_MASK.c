
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bi ;
struct TYPE_5__ {int biSize; int biPlanes; int biBitCount; void* biHeight; void* biWidth; } ;
struct TYPE_6__ {TYPE_1__ bmiHeader; } ;
typedef int LPVOID ;
typedef void* INT ;
typedef scalar_t__ HDC ;
typedef int * HBITMAP ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__,TYPE_2__*,int ,int *,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static HBITMAP
FUNC_4(INT VAR_1, INT VAR_2)
{
    HBITMAP VAR_3 = ((void*)0);
    BITMAPINFO VAR_4;
    HDC VAR_5;
    LPVOID VAR_6;

    FUNC_3(&VAR_4, sizeof(VAR_4));
    VAR_4.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_4.bmiHeader.biWidth = VAR_1;
    VAR_4.bmiHeader.biHeight = VAR_2;
    VAR_4.bmiHeader.biPlanes = 1;
    VAR_4.bmiHeader.biBitCount = 32;

    VAR_5 = FUNC_0(((void*)0));
    if (VAR_5)
    {
        VAR_3 = FUNC_1(VAR_5, &VAR_4, VAR_0, &VAR_6, ((void*)0), 0);
        FUNC_2(VAR_5);
    }
    return VAR_3;
}

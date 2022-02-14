
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int biSize; int biPlanes; int biBitCount; int biSizeImage; int biCompression; void* biHeight; void* biWidth; } ;
struct TYPE_6__ {TYPE_1__ bmiHeader; } ;
typedef void* LONG ;
typedef int DWORD ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_1(BITMAPINFO *VAR_1, LONG VAR_2, LONG VAR_3, DWORD VAR_4)
{
    FUNC_0(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_1->bmiHeader.biWidth = VAR_2;
    VAR_1->bmiHeader.biHeight = VAR_3;
    VAR_1->bmiHeader.biPlanes = 1;
    VAR_1->bmiHeader.biBitCount = 32;
    VAR_1->bmiHeader.biCompression = VAR_0;
    VAR_1->bmiHeader.biSizeImage = VAR_4;
}

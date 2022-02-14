
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_2__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; scalar_t__ biClrImportant; scalar_t__ biClrUsed; scalar_t__ biYPelsPerMeter; scalar_t__ biXPelsPerMeter; scalar_t__ biSizeImage; int biCompression; } ;
typedef int HDC ;
typedef int HBITMAP ;
typedef int DWORD ;
typedef TYPE_1__ BITMAPINFOHEADER ;
typedef int BITMAPINFO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int,int *,int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*,int *,int,int,int ) ;

__attribute__((used)) static DWORD* FUNC_4(HDC VAR_2, HBITMAP VAR_3, int VAR_4, int VAR_5)
{
    BITMAPINFOHEADER VAR_6;
    UINT VAR_7 = 0;
    DWORD *VAR_8 = (DWORD *)FUNC_0(VAR_4*VAR_5*4);

    VAR_6.biSize = sizeof(BITMAPINFOHEADER);
    VAR_6.biWidth = VAR_4;
    VAR_6.biHeight = -VAR_5;
    VAR_6.biPlanes = 1;
    VAR_6.biBitCount = 32;
    VAR_6.biCompression = VAR_0;
    VAR_6.biSizeImage = 0;
    VAR_6.biXPelsPerMeter = 0;
    VAR_6.biYPelsPerMeter = 0;
    VAR_6.biClrUsed = 0;
    VAR_6.biClrImportant = 0;

    VAR_7 = FUNC_1(VAR_2, VAR_3, 0, VAR_5, VAR_8, (BITMAPINFO *)&VAR_6, VAR_1);
    FUNC_3(VAR_7 == VAR_5, "Expected GetDIBits:%p,%d->%d,%d\n", VAR_8, VAR_5, VAR_7, FUNC_2());

    return VAR_8;
}

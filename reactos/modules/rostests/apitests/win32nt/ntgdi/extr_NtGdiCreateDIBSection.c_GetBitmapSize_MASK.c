
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int biWidth; int biBitCount; int biPlanes; int biHeight; } ;
typedef TYPE_1__ BITMAPINFOHEADER ;



ULONG
FUNC_0(BITMAPINFOHEADER *VAR_0)
{
    ULONG VAR_1, VAR_2;

    VAR_1 = VAR_0->biWidth * VAR_0->biBitCount * VAR_0->biPlanes;
    VAR_2 = ((VAR_1 + 31) & ~ 31) >> 3;

    return VAR_0->biHeight * VAR_2;
}

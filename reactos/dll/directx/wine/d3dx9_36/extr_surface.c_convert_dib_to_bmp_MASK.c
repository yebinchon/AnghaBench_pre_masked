
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
typedef int UINT ;
struct TYPE_6__ {int bcBitCount; } ;
struct TYPE_5__ {int bfType; int bfSize; int bfOffBits; scalar_t__ bfReserved2; scalar_t__ bfReserved1; } ;
struct TYPE_4__ {int biClrUsed; int biBitCount; int biSize; scalar_t__ biCompression; } ;
typedef int RGBTRIPLE ;
typedef int RGBQUAD ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;
typedef int BITMAPV5HEADER ;
typedef int BITMAPV4HEADER ;
typedef TYPE_1__ BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPFILEHEADER ;
typedef TYPE_3__ BITMAPCOREHEADER ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,void*,int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_4(void **VAR_3, UINT *VAR_4)
{
    ULONG VAR_5;
    ULONG VAR_6 = 0;
    ULONG VAR_7;
    BITMAPFILEHEADER *VAR_8;
    BYTE *VAR_9;
    UINT VAR_10;

    if ((*VAR_4 < 4) || (*VAR_4 < (VAR_5 = *(ULONG*)*VAR_3)))
        return VAR_1;

    if ((VAR_5 == sizeof(BITMAPINFOHEADER)) ||
        (VAR_5 == sizeof(BITMAPV4HEADER)) ||
        (VAR_5 == sizeof(BITMAPV5HEADER)) ||
        (VAR_5 == 64 ))
    {

        BITMAPINFOHEADER *VAR_11 = (BITMAPINFOHEADER*)*VAR_3;
        VAR_6 = VAR_11->biClrUsed;

        if (!VAR_6 && VAR_11->biBitCount <= 8)
            VAR_6 = 1 << VAR_11->biBitCount;

        VAR_7 = sizeof(BITMAPFILEHEADER) + VAR_5 + sizeof(RGBQUAD) * VAR_6;


        if ((VAR_11->biSize == sizeof(BITMAPINFOHEADER)) && (VAR_11->biCompression == VAR_0))
            VAR_7 += 3 * sizeof(DWORD);
    }
    else if (VAR_5 == sizeof(BITMAPCOREHEADER))
    {
        BITMAPCOREHEADER *VAR_12 = (BITMAPCOREHEADER*)*VAR_3;

        if (VAR_12->bcBitCount <= 8)
            VAR_6 = 1 << VAR_12->bcBitCount;

        VAR_7 = sizeof(BITMAPFILEHEADER) + VAR_5 + sizeof(RGBTRIPLE) * VAR_6;
    }
    else
    {
        return VAR_1;
    }

    FUNC_3("Converting DIB file to BMP\n");

    VAR_10 = *VAR_4 + sizeof(BITMAPFILEHEADER);
    VAR_9 = FUNC_2(FUNC_1(), 0, VAR_10);
    FUNC_0(VAR_9 + sizeof(BITMAPFILEHEADER), *VAR_3, *VAR_4);


    VAR_8 = (BITMAPFILEHEADER*)VAR_9;
    VAR_8->bfType = 0x4d42;
    VAR_8->bfSize = VAR_10;
    VAR_8->bfReserved1 = 0;
    VAR_8->bfReserved2 = 0;
    VAR_8->bfOffBits = VAR_7;


    *VAR_3 = VAR_9;
    *VAR_4 = VAR_10;

    return VAR_2;
}

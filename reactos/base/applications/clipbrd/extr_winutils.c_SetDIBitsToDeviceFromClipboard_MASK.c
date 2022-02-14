
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WORD ;
typedef int UINT ;
struct TYPE_11__ {int bcBitCount; int bcHeight; int bcWidth; } ;
struct TYPE_10__ {int biSize; int biClrUsed; int biBitCount; scalar_t__ biCompression; int biHeight; int biWidth; } ;
struct TYPE_9__ {int hdc; } ;
struct TYPE_8__ {int CurrentY; int CurrentX; } ;
typedef TYPE_1__ SCROLLSTATE ;
typedef int RGBTRIPLE ;
typedef int RGBQUAD ;
typedef TYPE_2__ PAINTSTRUCT ;
typedef scalar_t__ LPBYTE ;
typedef TYPE_3__* LPBITMAPINFOHEADER ;
typedef int LPBITMAPINFO ;
typedef TYPE_4__* LPBITMAPCOREHEADER ;
typedef int LONG ;
typedef int HGLOBAL ;
typedef int DWORD ;
typedef int BITMAPV5HEADER ;
typedef int BITMAPV4HEADER ;
typedef int BITMAPINFOHEADER ;
typedef int BITMAPCOREHEADER ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ,int ,scalar_t__,int ,int ) ;

void FUNC_4(UINT VAR_2, PAINTSTRUCT VAR_3, SCROLLSTATE VAR_4, UINT VAR_5)
{
    HGLOBAL VAR_6;
    LPBITMAPINFOHEADER VAR_7;
    LPBYTE VAR_8;
    LONG VAR_9, VAR_10;
    DWORD VAR_11 = 0;

    VAR_6 = FUNC_0(VAR_2);
    if (!VAR_6)
        return;

    VAR_7 = FUNC_1(VAR_6);
    if (!VAR_7)
        return;

    if (VAR_7->biSize == sizeof(BITMAPCOREHEADER))
    {
        LPBITMAPCOREHEADER VAR_12 = (LPBITMAPCOREHEADER)VAR_7;

        VAR_11 = 0;

        if (VAR_12->bcBitCount <= 8)
        {
            VAR_11 = (1 << VAR_12->bcBitCount);

            if (VAR_5 == VAR_1)
                VAR_11 *= sizeof(RGBTRIPLE);
            else
                VAR_11 *= sizeof(WORD);
        }

        VAR_9 = VAR_12->bcWidth;
        VAR_10 = VAR_12->bcHeight;
    }
    else if ((VAR_7->biSize == sizeof(BITMAPINFOHEADER)) ||
             (VAR_7->biSize == sizeof(BITMAPV4HEADER)) ||
             (VAR_7->biSize == sizeof(BITMAPV5HEADER)))
    {
        VAR_11 = VAR_7->biClrUsed;

        if ((VAR_11 == 0) && (VAR_7->biBitCount <= 8))
            VAR_11 = (1 << VAR_7->biBitCount);

        if (VAR_5 == VAR_1)
            VAR_11 *= sizeof(RGBQUAD);
        else
            VAR_11 *= sizeof(WORD);

        if (
            VAR_7->biCompression == VAR_0)
        {
            VAR_11 += 3 * sizeof(DWORD);
        }
        VAR_9 = VAR_7->biWidth;

        VAR_10 = VAR_7->biHeight;
    }
    else
    {

        FUNC_2(VAR_6);
        return;
    }

    VAR_8 = (LPBYTE)VAR_7 + VAR_7->biSize + VAR_11;






    FUNC_3(VAR_3.hdc,
                      -VAR_4.CurrentX,
                      -VAR_4.CurrentY,
                      VAR_9,
                      VAR_10,
                      0,
                      0,
                      0,
                      VAR_10,
                      VAR_8,
                      (LPBITMAPINFO)VAR_7,
                      VAR_5);

    FUNC_2(VAR_6);
}

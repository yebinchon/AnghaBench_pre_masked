
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_7__ {int bcBitCount; } ;
struct TYPE_5__ {int biSize; unsigned int biClrUsed; int biBitCount; scalar_t__ biCompression; } ;
struct TYPE_6__ {TYPE_1__ bmiHeader; } ;
typedef int RGBTRIPLE ;
typedef int RGBQUAD ;
typedef int DWORD ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;
typedef TYPE_3__ BITMAPCOREHEADER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1( const BITMAPINFO * VAR_2, WORD VAR_3 )
{
    unsigned int VAR_4, VAR_5, VAR_6 = 0;

    if (VAR_2->bmiHeader.biSize == sizeof(BITMAPCOREHEADER))
    {
        const BITMAPCOREHEADER *VAR_7 = (const BITMAPCOREHEADER *)VAR_2;
        VAR_4 = (VAR_7->bcBitCount <= 8) ? 1 << VAR_7->bcBitCount : 0;
        return sizeof(BITMAPCOREHEADER) + VAR_4 *
            ((VAR_3 == VAR_1) ? sizeof(RGBTRIPLE) : sizeof(WORD));
    }
    else
    {
        VAR_4 = VAR_2->bmiHeader.biClrUsed;
        if (VAR_4 > 256)
            VAR_4 = 256;
        if (!VAR_4 && (VAR_2->bmiHeader.biBitCount <= 8))
            VAR_4 = 1 << VAR_2->bmiHeader.biBitCount;
        if (VAR_2->bmiHeader.biCompression == VAR_0) VAR_6 = 3;
        VAR_5 = FUNC_0( VAR_2->bmiHeader.biSize, sizeof(BITMAPINFOHEADER) + VAR_6 * sizeof(DWORD) );
        return VAR_5 + VAR_4 * ((VAR_3 == VAR_1) ? sizeof(RGBQUAD) : sizeof(WORD));
    }
}

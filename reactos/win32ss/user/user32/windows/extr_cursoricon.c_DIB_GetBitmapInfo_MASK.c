
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_5__ {int bcBitCount; int bcHeight; int bcWidth; } ;
struct TYPE_4__ {int biSize; scalar_t__ biCompression; int biBitCount; int biHeight; int biWidth; } ;
typedef int LONG ;
typedef scalar_t__ DWORD ;
typedef int BITMAPV5HEADER ;
typedef int BITMAPV4HEADER ;
typedef TYPE_1__ BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPCOREHEADER ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1( const BITMAPINFOHEADER *VAR_0, LONG *VAR_1,
                              LONG *VAR_2, WORD *VAR_3, DWORD *VAR_4 )
{
    if (VAR_0->biSize == sizeof(BITMAPCOREHEADER))
    {
        const BITMAPCOREHEADER *VAR_5 = (const BITMAPCOREHEADER *)VAR_0;
        *VAR_1 = VAR_5->bcWidth;
        *VAR_2 = VAR_5->bcHeight;
        *VAR_3 = VAR_5->bcBitCount;
        *VAR_4 = 0;
        return 0;
    }
    else if (VAR_0->biSize == sizeof(BITMAPINFOHEADER) ||
             VAR_0->biSize == sizeof(BITMAPV4HEADER) ||
             VAR_0->biSize == sizeof(BITMAPV5HEADER))
    {
        *VAR_1 = VAR_0->biWidth;
        *VAR_2 = VAR_0->biHeight;
        *VAR_3 = VAR_0->biBitCount;
        *VAR_4 = VAR_0->biCompression;
        return 1;
    }
    FUNC_0("(%d): unknown/wrong size for header\n", VAR_0->biSize );
    return -1;
}

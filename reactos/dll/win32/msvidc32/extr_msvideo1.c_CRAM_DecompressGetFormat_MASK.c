
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int biSize; int biBitCount; int biClrUsed; int biWidth; int biHeight; int biSizeImage; int biCompression; } ;
struct TYPE_14__ {TYPE_1__ bmiHeader; } ;
struct TYPE_13__ {scalar_t__ dwMagic; } ;
typedef int RGBQUAD ;
typedef TYPE_2__ Msvideo1Context ;
typedef int LRESULT ;
typedef TYPE_3__* LPBITMAPINFO ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,TYPE_2__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int) ;

__attribute__((used)) static LRESULT
FUNC_3( Msvideo1Context *VAR_5, LPBITMAPINFO VAR_6, LPBITMAPINFO VAR_7 )
{
    DWORD VAR_8;

    FUNC_0("ICM_DECOMPRESS_GETFORMAT %p %p %p\n", VAR_5, VAR_6, VAR_7);

    if( (VAR_5==((void*)0)) || (VAR_5->dwMagic!=VAR_1) )
        return VAR_3;

    VAR_8 = VAR_6->bmiHeader.biSize;
    if (VAR_6->bmiHeader.biBitCount <= 8)
        VAR_8 += VAR_6->bmiHeader.biClrUsed * sizeof(RGBQUAD);

    if (VAR_6->bmiHeader.biBitCount != 8 && VAR_6->bmiHeader.biBitCount != 16)
        return VAR_2;

    if( VAR_7 )
    {
        FUNC_2( VAR_7, VAR_6, VAR_8 );
        VAR_7->bmiHeader.biWidth = VAR_6->bmiHeader.biWidth & ~1;
        VAR_7->bmiHeader.biHeight = VAR_6->bmiHeader.biHeight & ~1;
        VAR_7->bmiHeader.biCompression = VAR_0;
        VAR_7->bmiHeader.biSizeImage = VAR_6->bmiHeader.biHeight *
                                     FUNC_1(VAR_7->bmiHeader.biWidth, VAR_7->bmiHeader.biBitCount);
        return VAR_4;
    }

    return VAR_8;
}

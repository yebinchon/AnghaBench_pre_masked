
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ dwMagic; } ;
struct TYPE_12__ {int biSize; int biBitCount; int biClrUsed; int biSizeImage; int biHeight; int biWidth; int biCompression; } ;
struct TYPE_13__ {TYPE_1__ bmiHeader; } ;
typedef int RGBQUAD ;
typedef int LRESULT ;
typedef TYPE_2__* LPBITMAPINFO ;
typedef TYPE_3__ ICCVID_Info ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,TYPE_3__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static LRESULT FUNC_3( ICCVID_Info *VAR_4, LPBITMAPINFO VAR_5, LPBITMAPINFO VAR_6 )
{
    DWORD VAR_7;

    FUNC_0("ICM_DECOMPRESS_GETFORMAT %p %p %p\n", VAR_4, VAR_5, VAR_6);

    if( (VAR_4==((void*)0)) || (VAR_4->dwMagic!=VAR_1) )
        return VAR_2;

    VAR_7 = VAR_5->bmiHeader.biSize;
    if (VAR_5->bmiHeader.biBitCount <= 8)
        VAR_7 += VAR_5->bmiHeader.biClrUsed * sizeof(RGBQUAD);

    if( VAR_6 )
    {
        FUNC_2( VAR_6, VAR_5, VAR_7 );
        VAR_6->bmiHeader.biBitCount = 24;
        VAR_6->bmiHeader.biCompression = VAR_0;
        VAR_6->bmiHeader.biSizeImage = FUNC_1(VAR_5->bmiHeader.biWidth, 24) * VAR_5->bmiHeader.biHeight;
        return VAR_3;
    }
    return VAR_7;
}

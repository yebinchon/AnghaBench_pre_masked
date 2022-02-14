
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ dwMagic; int bits_per_pixel; int * cvinfo; } ;
struct TYPE_11__ {int lpDst; TYPE_2__* lpbiSrc; int lpSrc; TYPE_1__* lpbiDst; } ;
struct TYPE_10__ {int biSizeImage; int biHeight; int biWidth; } ;
struct TYPE_9__ {int biHeight; } ;
typedef int LRESULT ;
typedef int LONG ;
typedef TYPE_3__ ICDECOMPRESSEX ;
typedef TYPE_4__ ICCVID_Info ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static LRESULT FUNC_3( ICCVID_Info *VAR_3, ICDECOMPRESSEX *VAR_4, DWORD VAR_5 )
{
    LONG VAR_6, VAR_7;
    BOOL VAR_8;

    FUNC_1("ICM_DECOMPRESSEX %p %p %d\n", VAR_3, VAR_4, VAR_5);

    if( (VAR_3==((void*)0)) || (VAR_3->dwMagic!=VAR_0) )
        return VAR_1;
    if (VAR_3->cvinfo==((void*)0))
    {
        FUNC_0("ICM_DECOMPRESSEX sent after ICM_DECOMPRESS_END\n");
        return VAR_1;
    }



    VAR_6 = VAR_4->lpbiSrc->biWidth;
    VAR_7 = VAR_4->lpbiSrc->biHeight;
    VAR_8 = -VAR_4->lpbiDst->biHeight == VAR_7;

    FUNC_2(VAR_3->cvinfo, VAR_4->lpSrc, VAR_4->lpbiSrc->biSizeImage,
                   VAR_4->lpDst, VAR_6, VAR_7, VAR_3->bits_per_pixel, VAR_8);

    return VAR_2;
}

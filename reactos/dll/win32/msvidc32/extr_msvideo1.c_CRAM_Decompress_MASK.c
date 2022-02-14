
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int biBitCount; int biWidth; int biHeight; } ;
struct TYPE_11__ {TYPE_4__* lpbiOutput; void* lpOutput; int lpInput; TYPE_1__* lpbiInput; } ;
struct TYPE_10__ {scalar_t__ dwMagic; int depth; } ;
struct TYPE_9__ {int biWidth; int biHeight; int biSizeImage; } ;
typedef TYPE_2__ Msvideo1Context ;
typedef int LRESULT ;
typedef int LONG ;
typedef TYPE_3__ ICDECOMPRESS ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_4 (void*,int,void*,TYPE_4__*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int,int ,int,void*,int) ;
 int FUNC_7 (int,int,int ,int,void*,int) ;

__attribute__((used)) static LRESULT FUNC_8( Msvideo1Context *VAR_4, ICDECOMPRESS *VAR_5, DWORD VAR_6 )
{
    LONG VAR_7, VAR_8, VAR_9, VAR_10;
    void *VAR_11;

    FUNC_3("ICM_DECOMPRESS %p %p %d\n", VAR_4, VAR_5, VAR_6);

    if( (VAR_4==((void*)0)) || (VAR_4->dwMagic!=VAR_0) )
        return VAR_1;



    VAR_7 = VAR_5->lpbiInput->biWidth;
    VAR_8 = VAR_5->lpbiInput->biHeight;
    VAR_10 = VAR_5->lpbiInput->biSizeImage;

    VAR_11 = VAR_5->lpOutput;

    if (VAR_5->lpbiOutput->biBitCount != VAR_4->depth)
    {
        VAR_11 = FUNC_1(FUNC_0(), 0, VAR_5->lpbiOutput->biWidth * VAR_5->lpbiOutput->biHeight * VAR_4->depth / 8);
        if (!VAR_11) return VAR_2;
    }

    if (VAR_4->depth == 8)
    {
        VAR_9 = FUNC_5(VAR_7, 8);
        FUNC_7( VAR_7, VAR_8, VAR_5->lpInput, VAR_10,
                              VAR_11, VAR_9 );
    }
    else
    {
        VAR_9 = FUNC_5(VAR_7, 16) / 2;
        FUNC_6( VAR_7, VAR_8, VAR_5->lpInput, VAR_10,
                               VAR_11, VAR_9 );
    }

    if (VAR_5->lpbiOutput->biBitCount != VAR_4->depth)
    {
        FUNC_4(VAR_11, VAR_4->depth, VAR_5->lpOutput, VAR_5->lpbiOutput);
        FUNC_2(FUNC_0(), 0, VAR_11);
    }

    return VAR_3;
}

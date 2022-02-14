
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int biBitCount; } ;
struct TYPE_9__ {TYPE_1__ bmiHeader; } ;
struct TYPE_8__ {scalar_t__ dwMagic; int depth; } ;
typedef TYPE_2__ Msvideo1Context ;
typedef int LRESULT ;
typedef TYPE_3__* LPBITMAPINFO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static LRESULT FUNC_2( Msvideo1Context *VAR_3, LPBITMAPINFO VAR_4, LPBITMAPINFO VAR_5 )
{
    FUNC_1("ICM_DECOMPRESS_BEGIN %p %p %p\n", VAR_3, VAR_4, VAR_5);

    if( (VAR_3==((void*)0)) || (VAR_3->dwMagic!=VAR_0) )
        return VAR_1;

    FUNC_1("bitmap is %d bpp\n", VAR_4->bmiHeader.biBitCount);
    if( VAR_4->bmiHeader.biBitCount == 8 )
        VAR_3->depth = 8;
    else if( VAR_4->bmiHeader.biBitCount == 16 )
        VAR_3->depth = 16;
    else
    {
        VAR_3->depth = 0;
        FUNC_0("Unsupported output format %i\n", VAR_4->bmiHeader.biBitCount);
    }

    return VAR_2;
}

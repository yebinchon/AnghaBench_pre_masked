
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int biBitCount; int biWidth; int biHeight; int biPlanes; int biCompression; } ;
struct TYPE_9__ {TYPE_1__ bmiHeader; } ;
struct TYPE_8__ {int dwMagic; } ;
typedef TYPE_2__ Msvideo1Context ;
typedef int LRESULT ;
typedef TYPE_3__* LPBITMAPINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;

__attribute__((used)) static LRESULT
FUNC_1( Msvideo1Context *VAR_6, LPBITMAPINFO VAR_7, LPBITMAPINFO VAR_8 )
{
    FUNC_0("ICM_DECOMPRESS_QUERY %p %p %p\n", VAR_6, VAR_7, VAR_8);

    if( (VAR_6==((void*)0)) || (VAR_6->dwMagic!=VAR_0) )
        return VAR_2;

    FUNC_0("in->planes  = %d\n", VAR_7->bmiHeader.biPlanes );
    FUNC_0("in->bpp     = %d\n", VAR_7->bmiHeader.biBitCount );
    FUNC_0("in->height  = %d\n", VAR_7->bmiHeader.biHeight );
    FUNC_0("in->width   = %d\n", VAR_7->bmiHeader.biWidth );
    FUNC_0("in->compr   = 0x%x\n", VAR_7->bmiHeader.biCompression );

    if( ( VAR_7->bmiHeader.biCompression != VAR_0 ) &&
        ( VAR_7->bmiHeader.biCompression != VAR_4 ) &&
        ( VAR_7->bmiHeader.biCompression != VAR_5 ) )
    {
        FUNC_0("can't do 0x%x compression\n", VAR_7->bmiHeader.biCompression);
        return VAR_1;
    }

    if( ( VAR_7->bmiHeader.biBitCount != 16 ) &&
        ( VAR_7->bmiHeader.biBitCount != 8 ) )
    {
        FUNC_0("can't do %d bpp\n", VAR_7->bmiHeader.biBitCount );
        return VAR_1;
    }


    if( VAR_8 )
    {
        FUNC_0("out->planes = %d\n", VAR_8->bmiHeader.biPlanes );
        FUNC_0("out->bpp    = %d\n", VAR_8->bmiHeader.biBitCount );
        FUNC_0("out->height = %d\n", VAR_8->bmiHeader.biHeight );
        FUNC_0("out->width  = %d\n", VAR_8->bmiHeader.biWidth );

        if ((VAR_7->bmiHeader.biBitCount != VAR_8->bmiHeader.biBitCount) &&
            (VAR_7->bmiHeader.biBitCount != 16 || VAR_8->bmiHeader.biBitCount != 24))
        {
            FUNC_0("incompatible depth requested\n");
            return VAR_1;
        }

        if(( VAR_7->bmiHeader.biPlanes != VAR_8->bmiHeader.biPlanes ) ||
          ( VAR_7->bmiHeader.biHeight != VAR_8->bmiHeader.biHeight ) ||
          ( VAR_7->bmiHeader.biWidth != VAR_8->bmiHeader.biWidth ))
        {
            FUNC_0("incompatible output requested\n");
            return VAR_1;
        }
    }

    FUNC_0("OK!\n");
    return VAR_3;
}

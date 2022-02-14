
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ dwMagic; int bits_per_pixel; scalar_t__ cvinfo; } ;
struct TYPE_7__ {int biBitCount; scalar_t__ biCompression; } ;
struct TYPE_8__ {int bmiColors; TYPE_1__ bmiHeader; } ;
typedef int LRESULT ;
typedef TYPE_2__* LPBITMAPINFO ;
typedef TYPE_3__ ICCVID_Info ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static LRESULT FUNC_4( ICCVID_Info *VAR_5, LPBITMAPINFO VAR_6, LPBITMAPINFO VAR_7 )
{
    FUNC_1("ICM_DECOMPRESS_BEGIN %p %p %p\n", VAR_5, VAR_6, VAR_7);

    if( (VAR_5==((void*)0)) || (VAR_5->dwMagic!=VAR_1) )
        return VAR_2;

    VAR_5->bits_per_pixel = VAR_7->bmiHeader.biBitCount;

    if (VAR_5->bits_per_pixel == 16)
    {
        if ( VAR_7->bmiHeader.biCompression == VAR_0 )
        {
            if ( FUNC_0(VAR_7->bmiColors, 0x7C00, 0x03E0, 0x001F) )
                VAR_5->bits_per_pixel = 15;
            else if ( FUNC_0(VAR_7->bmiColors, 0xF800, 0x07E0, 0x001F) )
                VAR_5->bits_per_pixel = 16;
            else
            {
                FUNC_1("unsupported output bit field(s) for 16-bit colors\n");
                return VAR_4;
            }
        }
        else
            VAR_5->bits_per_pixel = 15;
    }

    FUNC_1("bit_per_pixel = %d\n", VAR_5->bits_per_pixel);

    if( VAR_5->cvinfo )
        FUNC_3( VAR_5->cvinfo );
    VAR_5->cvinfo = FUNC_2();

    return VAR_3;
}

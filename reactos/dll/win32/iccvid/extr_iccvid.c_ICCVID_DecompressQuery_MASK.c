
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ dwMagic; } ;
struct TYPE_8__ {scalar_t__ biCompression; scalar_t__ biPlanes; scalar_t__ biWidth; int biBitCount; int biHeight; } ;
struct TYPE_9__ {TYPE_1__ bmiHeader; int bmiColors; } ;
typedef int LRESULT ;
typedef TYPE_2__* LPBITMAPINFO ;
typedef TYPE_3__ ICCVID_Info ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static LRESULT FUNC_3( ICCVID_Info *VAR_5, LPBITMAPINFO VAR_6, LPBITMAPINFO VAR_7 )
{
    FUNC_2("ICM_DECOMPRESS_QUERY %p %p %p\n", VAR_5, VAR_6, VAR_7);

    if( (VAR_5==((void*)0)) || (VAR_5->dwMagic!=VAR_1) )
        return VAR_3;

    FUNC_2("in: ");
    FUNC_1(VAR_6);

    if( VAR_6->bmiHeader.biCompression != VAR_1 )
        return VAR_2;

    if( VAR_7 )
    {
        FUNC_2("out: ");
        FUNC_1(VAR_7);

        if( VAR_6->bmiHeader.biPlanes != VAR_7->bmiHeader.biPlanes )
            return VAR_2;
        if( VAR_6->bmiHeader.biHeight != VAR_7->bmiHeader.biHeight )
        {
            if( VAR_6->bmiHeader.biHeight != -VAR_7->bmiHeader.biHeight )
                return VAR_2;
            FUNC_2("Detected inverted height for video output\n");
        }
        if( VAR_6->bmiHeader.biWidth != VAR_7->bmiHeader.biWidth )
            return VAR_2;

        switch( VAR_7->bmiHeader.biBitCount )
        {
        case 16:
            if ( VAR_7->bmiHeader.biCompression == VAR_0 )
            {
                if ( !FUNC_0(VAR_7->bmiColors, 0x7C00, 0x03E0, 0x001F) &&
                     !FUNC_0(VAR_7->bmiColors, 0xF800, 0x07E0, 0x001F) )
                {
                    FUNC_2("unsupported output bit field(s) for 16-bit colors\n");
                    return VAR_2;
                }
            }
            break;
        case 24:
        case 32:
            break;
        default:
            FUNC_2("unsupported output bitcount = %d\n", VAR_7->bmiHeader.biBitCount );
            return VAR_2;
        }
    }

    return VAR_4;
}

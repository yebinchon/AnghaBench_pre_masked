
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int biCompression; int biWidth; int biHeight; int biBitCount; int biPlanes; } ;
struct TYPE_5__ {TYPE_1__ bmiHeader; } ;
typedef TYPE_2__ BITMAPINFO ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char const*,int) ;

__attribute__((used)) static void FUNC_2(const BITMAPINFO * VAR_0)
{
    FUNC_0(
        "planes = %d\n"
        "bpp    = %d\n"
        "height = %d\n"
        "width  = %d\n"
        "compr  = %s\n",
        VAR_0->bmiHeader.biPlanes,
        VAR_0->bmiHeader.biBitCount,
        VAR_0->bmiHeader.biHeight,
        VAR_0->bmiHeader.biWidth,
        FUNC_1( (const char *)&VAR_0->bmiHeader.biCompression, 4 ) );
}

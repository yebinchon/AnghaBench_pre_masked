
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dds_pixel_format {scalar_t__ bpp; scalar_t__ rmask; scalar_t__ gmask; scalar_t__ bmask; int flags; scalar_t__ amask; } ;
struct TYPE_3__ {scalar_t__ bpp; scalar_t__ rmask; scalar_t__ gmask; scalar_t__ bmask; scalar_t__ amask; int format; } ;
typedef int D3DFORMAT ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static D3DFORMAT FUNC_2(const struct dds_pixel_format *VAR_3)
{
    unsigned int VAR_4;

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++)
    {
        if (VAR_2[VAR_4].bpp == VAR_3->bpp
            && VAR_2[VAR_4].rmask == VAR_3->rmask
            && VAR_2[VAR_4].gmask == VAR_3->gmask
            && VAR_2[VAR_4].bmask == VAR_3->bmask)
        {
            if ((VAR_3->flags & VAR_1) && VAR_2[VAR_4].amask == VAR_3->amask)
                return VAR_2[VAR_4].format;
            if (VAR_2[VAR_4].amask == 0)
                return VAR_2[VAR_4].format;
        }
    }

    FUNC_1("Unknown RGB pixel format (%#x, %#x, %#x, %#x)\n",
        VAR_3->rmask, VAR_3->gmask, VAR_3->bmask, VAR_3->amask);
    return VAR_0;
}

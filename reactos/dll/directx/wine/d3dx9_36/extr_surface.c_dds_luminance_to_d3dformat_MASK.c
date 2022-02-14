
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dds_pixel_format {int bpp; int rmask; int flags; int amask; } ;
typedef int D3DFORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,int,int) ;

__attribute__((used)) static D3DFORMAT FUNC_1(const struct dds_pixel_format *VAR_6)
{
    if (VAR_6->bpp == 8)
    {
        if (VAR_6->rmask == 0xff)
            return VAR_3;
        if ((VAR_6->flags & VAR_5) && VAR_6->rmask == 0x0f && VAR_6->amask == 0xf0)
            return VAR_0;
    }
    if (VAR_6->bpp == 16)
    {
        if (VAR_6->rmask == 0xffff)
            return VAR_2;
        if ((VAR_6->flags & VAR_5) && VAR_6->rmask == 0x00ff && VAR_6->amask == 0xff00)
            return VAR_1;
    }

    FUNC_0("Unknown luminance pixel format (bpp %u, l %#x, a %#x)\n",
        VAR_6->bpp, VAR_6->rmask, VAR_6->amask);
    return VAR_4;
}

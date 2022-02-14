
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dds_pixel_format {int bpp; int rmask; int gmask; int bmask; int amask; } ;
typedef int D3DFORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int,int,int ) ;

__attribute__((used)) static D3DFORMAT FUNC_1(const struct dds_pixel_format *VAR_2)
{
    if (VAR_2->bpp == 32 && VAR_2->rmask == 0x000000ff && VAR_2->gmask == 0x0000ff00
            && VAR_2->bmask == 0x00ff0000)
        return VAR_1;

    FUNC_0("Unknown bump pixel format (%u, %#x, %#x, %#x, %#x)\n", VAR_2->bpp,
        VAR_2->rmask, VAR_2->gmask, VAR_2->bmask, VAR_2->amask);
    return VAR_0;
}

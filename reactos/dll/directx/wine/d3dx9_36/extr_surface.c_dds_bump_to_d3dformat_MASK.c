
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dds_pixel_format {int bpp; int rmask; int gmask; int amask; int bmask; } ;
typedef int D3DFORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,int,int ,int ) ;

__attribute__((used)) static D3DFORMAT FUNC_1(const struct dds_pixel_format *VAR_3)
{
    if (VAR_3->bpp == 16 && VAR_3->rmask == 0x00ff && VAR_3->gmask == 0xff00)
        return VAR_2;
    if (VAR_3->bpp == 32 && VAR_3->rmask == 0x0000ffff && VAR_3->gmask == 0xffff0000)
        return VAR_1;

    FUNC_0("Unknown bump pixel format (%u, %#x, %#x, %#x, %#x)\n", VAR_3->bpp,
        VAR_3->rmask, VAR_3->gmask, VAR_3->bmask, VAR_3->amask);
    return VAR_0;
}

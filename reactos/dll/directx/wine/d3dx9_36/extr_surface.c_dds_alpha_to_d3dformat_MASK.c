
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dds_pixel_format {int bpp; int amask; int rmask; } ;
typedef int D3DFORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;

__attribute__((used)) static D3DFORMAT FUNC_1(const struct dds_pixel_format *VAR_2)
{
    if (VAR_2->bpp == 8 && VAR_2->amask == 0xff)
        return VAR_0;

    FUNC_0("Unknown Alpha pixel format (%u, %#x)\n", VAR_2->bpp, VAR_2->rmask);
    return VAR_1;
}

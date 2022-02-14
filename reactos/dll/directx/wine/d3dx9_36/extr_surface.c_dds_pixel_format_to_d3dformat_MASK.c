
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dds_pixel_format {int flags; int gmask; int amask; int bmask; int rmask; int bpp; int fourcc; int size; } ;
typedef int D3DFORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ,int,int ,int ) ;
 int FUNC_1 (char*,int,int ,int ,int ,int,int ,int ) ;
 int FUNC_2 (struct dds_pixel_format const*) ;
 int FUNC_3 (struct dds_pixel_format const*) ;
 int FUNC_4 (struct dds_pixel_format const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dds_pixel_format const*) ;
 int FUNC_7 (struct dds_pixel_format const*) ;

__attribute__((used)) static D3DFORMAT FUNC_8(const struct dds_pixel_format *VAR_7)
{
    FUNC_0("pixel_format: size %u, flags %#x, fourcc %#x, bpp %u.\n", VAR_7->size,
            VAR_7->flags, VAR_7->fourcc, VAR_7->bpp);
    FUNC_0("rmask %#x, gmask %#x, bmask %#x, amask %#x.\n", VAR_7->rmask, VAR_7->gmask,
            VAR_7->bmask, VAR_7->amask);

    if (VAR_7->flags & VAR_4)
        return FUNC_5(VAR_7->fourcc);
    if (VAR_7->flags & VAR_6)
        return FUNC_7(VAR_7);
    if (VAR_7->flags & VAR_5)
        return FUNC_6(VAR_7);
    if (VAR_7->flags & VAR_1)
        return FUNC_2(VAR_7);
    if (VAR_7->flags & VAR_2)
        return FUNC_4(VAR_7);
    if (VAR_7->flags & VAR_3)
        return FUNC_3(VAR_7);

    FUNC_1("Unknown pixel format (flags %#x, fourcc %#x, bpp %u, r %#x, g %#x, b %#x, a %#x)\n",
        VAR_7->flags, VAR_7->fourcc, VAR_7->bpp,
        VAR_7->rmask, VAR_7->gmask, VAR_7->bmask, VAR_7->amask);
    return VAR_0;
}

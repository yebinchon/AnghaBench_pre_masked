
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {unsigned char width; unsigned char height; unsigned char has_gct; int gct_entries; unsigned char aspect; int xres; int yres; int gct_background; } ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const,int ,int) ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static const unsigned char *
FUNC_2(fz_context *VAR_2, struct info *VAR_3, const unsigned char *VAR_4, const unsigned char *VAR_5)
{
 if (VAR_5 - VAR_4 < 7)
  FUNC_1(VAR_2, VAR_0, "premature end in logical screen descriptor in gif image");

 VAR_3->width = VAR_4[1] << 8 | VAR_4[0];
 VAR_3->height = VAR_4[3] << 8 | VAR_4[2];
 if (VAR_3->width <= 0)
  FUNC_1(VAR_2, VAR_0, "image width must be > 0");
 if (VAR_3->height <= 0)
  FUNC_1(VAR_2, VAR_0, "image height must be > 0");
 if (VAR_3->height > VAR_1 / VAR_3->width / 3 )
  FUNC_1(VAR_2, VAR_0, "image dimensions might overflow");

 VAR_3->has_gct = (VAR_4[4] >> 7) & 0x1;
 if (VAR_3->has_gct)
 {
  VAR_3->gct_entries = 1 << ((VAR_4[4] & 0x7) + 1);
  VAR_3->gct_background = FUNC_0(VAR_4[5], 0, VAR_3->gct_entries - 1);
 }
 VAR_3->aspect = VAR_4[6];

 VAR_3->xres = 96;
 VAR_3->yres= 96;
 if (VAR_3->aspect > 0)
  VAR_3->yres = (((float) VAR_3->aspect + 15) / 64) * 96;

 return VAR_4 + 7;
}

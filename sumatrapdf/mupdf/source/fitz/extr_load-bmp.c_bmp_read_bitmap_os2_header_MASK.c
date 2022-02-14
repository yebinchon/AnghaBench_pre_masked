
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int compression; int palettetype; void* colors; void* yres; void* xres; int bitcount; void* height; void* width; } ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (unsigned char const*) ;
 void* FUNC_2 (unsigned char const*) ;

__attribute__((used)) static const unsigned char *
FUNC_3(fz_context *VAR_4, struct info *VAR_5, const unsigned char *VAR_6, const unsigned char *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_2(VAR_6 + 0);
 if (VAR_8 != 16 && VAR_8 != 64)
  FUNC_0(VAR_4, VAR_3, "unsupported os2 header size in bmp image");

 if (VAR_8 >= 16)
 {
  if (VAR_7 - VAR_6 < 16)
   FUNC_0(VAR_4, VAR_3, "premature end in bitmap os2 header in bmp image");

  VAR_5->width = FUNC_2(VAR_6 + 4);
  VAR_5->height = FUNC_2(VAR_6 + 8);
  VAR_5->bitcount = FUNC_1(VAR_6 + 14);

  VAR_5->compression = VAR_0;
 }
 if (VAR_8 >= 64)
 {
  if (VAR_7 - VAR_6 < 64)
   FUNC_0(VAR_4, VAR_3, "premature end in bitmap os2 header in bmp image");

  VAR_5->compression = FUNC_2(VAR_6 + 16);
  VAR_5->xres = FUNC_2(VAR_6 + 24);
  VAR_5->yres = FUNC_2(VAR_6 + 28);
  VAR_5->colors = FUNC_2(VAR_6 + 32);


  if (VAR_5->compression < 0)
   VAR_5->compression = VAR_2;
  else if (VAR_5->compression == 4)
   VAR_5->compression = VAR_1;
 }

 VAR_5->palettetype = 1;

 return VAR_6 + VAR_8;
}

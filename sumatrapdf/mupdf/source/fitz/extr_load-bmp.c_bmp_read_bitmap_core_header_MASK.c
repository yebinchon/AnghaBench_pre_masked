
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int xres; int yres; scalar_t__ palettetype; int compression; void* bitcount; void* height; void* width; } ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 void* FUNC_1 (unsigned char const*) ;
 int FUNC_2 (unsigned char const*) ;

__attribute__((used)) static const unsigned char *
FUNC_3(fz_context *VAR_2, struct info *VAR_3, const unsigned char *VAR_4, const unsigned char *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4 + 0);
 if (VAR_6 != 12)
  FUNC_0(VAR_2, VAR_1, "unsupported core header size in bmp image");

 if (VAR_6 >= 12)
 {
  if (VAR_5 - VAR_4 < 12)
   FUNC_0(VAR_2, VAR_1, "premature end in bitmap core header in bmp image");

  VAR_3->width = FUNC_1(VAR_4 + 4);
  VAR_3->height = FUNC_1(VAR_4 + 6);
  VAR_3->bitcount = FUNC_1(VAR_4 + 10);
 }

 VAR_3->xres = 2835;
 VAR_3->yres = 2835;
 VAR_3->compression = VAR_0;
 VAR_3->palettetype = 0;

 return VAR_4 + VAR_6;
}

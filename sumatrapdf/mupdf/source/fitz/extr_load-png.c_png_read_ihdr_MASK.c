
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int width; int height; unsigned char depth; unsigned char interlace; int indexed; int n; void* type; } ;
typedef int fz_context ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 void* FUNC_1 (unsigned char const*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_4, struct info *VAR_5, const unsigned char *VAR_6, unsigned int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 if (VAR_7 != 13)
  FUNC_0(VAR_4, VAR_2, "IHDR chunk is the wrong size");

 VAR_5->width = FUNC_1(VAR_6 + 0);
 VAR_5->height = FUNC_1(VAR_6 + 4);
 VAR_5->depth = VAR_6[8];

 VAR_8 = VAR_6[9];
 VAR_9 = VAR_6[10];
 VAR_10 = VAR_6[11];
 VAR_5->interlace = VAR_6[12];

 if (VAR_5->width <= 0)
  FUNC_0(VAR_4, VAR_2, "image width must be > 0");
 if (VAR_5->height <= 0)
  FUNC_0(VAR_4, VAR_2, "image height must be > 0");

 if (VAR_5->depth != 1 && VAR_5->depth != 2 && VAR_5->depth != 4 &&
   VAR_5->depth != 8 && VAR_5->depth != 16)
  FUNC_0(VAR_4, VAR_2, "image bit depth must be one of 1, 2, 4, 8, 16");
 if (VAR_8 == 2 && VAR_5->depth < 8)
  FUNC_0(VAR_4, VAR_2, "illegal bit depth for truecolor");
 if (VAR_8 == 3 && VAR_5->depth > 8)
  FUNC_0(VAR_4, VAR_2, "illegal bit depth for indexed");
 if (VAR_8 == 4 && VAR_5->depth < 8)
  FUNC_0(VAR_4, VAR_2, "illegal bit depth for grayscale with alpha");
 if (VAR_8 == 6 && VAR_5->depth < 8)
  FUNC_0(VAR_4, VAR_2, "illegal bit depth for truecolor with alpha");

 VAR_5->indexed = 0;
 if (VAR_8 == 0)
  VAR_5->n = 1, VAR_5->type = VAR_0;
 else if (VAR_8 == 2)
  VAR_5->n = 3, VAR_5->type = VAR_1;
 else if (VAR_8 == 4)
  VAR_5->n = 2, VAR_5->type = VAR_0;
 else if (VAR_8 == 6)
  VAR_5->n = 4, VAR_5->type = VAR_1;
 else if (VAR_8 == 3)
 {
  VAR_5->type = VAR_1;
  VAR_5->indexed = 1;
  VAR_5->n = 1;
 }
 else
  FUNC_0(VAR_4, VAR_2, "unknown color type");

 if (VAR_9 != 0)
  FUNC_0(VAR_4, VAR_2, "unknown compression method");
 if (VAR_10 != 0)
  FUNC_0(VAR_4, VAR_2, "unknown filter method");
 if (VAR_5->interlace != 0 && VAR_5->interlace != 1)
  FUNC_0(VAR_4, VAR_2, "interlace method not supported");
 if (VAR_5->height > VAR_3 / VAR_5->width / VAR_5->n / (VAR_5->depth / 8 + 1))
  FUNC_0(VAR_4, VAR_2, "image dimensions might overflow");
}

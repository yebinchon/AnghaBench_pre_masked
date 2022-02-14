
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int width; int height; int bitcount; int compression; } ;
typedef int fz_context ;


 int VAR_0 ;
 unsigned char* FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static unsigned char *
FUNC_2(fz_context *VAR_1, struct info *VAR_2, const unsigned char *VAR_3, const unsigned char **VAR_4)
{
 const unsigned char *VAR_5;
 unsigned char *VAR_6, *VAR_7, *VAR_8;
 int VAR_9 = VAR_2->width;
 int VAR_10 = VAR_2->height;
 int VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = (VAR_9*3 + 3) / 4 * 4;

 VAR_5 = VAR_3;
 VAR_6 = VAR_8 = FUNC_0(VAR_1, VAR_10, VAR_11);
 VAR_7 = VAR_6 + VAR_10 * VAR_11;
 VAR_12 = 0;

 while (VAR_5 + 2 <= *VAR_4)
 {
  if (VAR_5[0] == 0 && VAR_5[1] == 0)
  {
   if (VAR_12*3 < VAR_11)
    VAR_6 += VAR_11 - VAR_12*3;
   VAR_5 += 2;
   VAR_12 = 0;
  }
  else if (VAR_5[0] == 0 && VAR_5[1] == 1)
  {
   VAR_6 = VAR_7;
   break;
  }
  else if (VAR_5[0] == 0 && VAR_5[1] == 2)
  {
   int VAR_14, VAR_15;
   if (VAR_5 + 4 > *VAR_4)
    break;
   VAR_14 = VAR_5[2];
   VAR_15 = VAR_5[3];
   VAR_6 += VAR_14*3 + VAR_15 * VAR_11;
   VAR_5 += 4;
   VAR_12 += VAR_14;
  }
  else if (VAR_5[0] == 0 && VAR_5[1] >= 3)
  {
   int VAR_16 = VAR_5[1] * 3;
   int VAR_17 = (VAR_16 + 1) / 2 * 2;
   if (VAR_5 + 2 + VAR_17 > *VAR_4)
    break;
   if (VAR_6 + VAR_16 > VAR_7) {
    FUNC_1(VAR_1, "buffer overflow in bitmap data in bmp image");
    break;
   }
   VAR_5 += 2;
   for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++)
    VAR_6[VAR_13] = VAR_5[VAR_13];
   VAR_6 += VAR_16;
   VAR_5 += (VAR_16 + 1) / 2 * 2;
   VAR_12 += VAR_16;
  }
  else
  {
   int VAR_18 = VAR_5[0] * 3;
   if (VAR_5 + 1 + 3 > *VAR_4)
    break;
   if (VAR_6 + VAR_18 > VAR_7) {
    FUNC_1(VAR_1, "buffer overflow in bitmap data in bmp image");
    break;
   }
   for (VAR_13 = 0; VAR_13 < VAR_18 / 3; VAR_13++) {
    VAR_6[VAR_13 * 3 + 0] = VAR_5[1];
    VAR_6[VAR_13 * 3 + 1] = VAR_5[2];
    VAR_6[VAR_13 * 3 + 2] = VAR_5[3];
   }
   VAR_6 += VAR_18;
   VAR_5 += 1 + 3;
   VAR_12 += VAR_18;
  }
 }

 if (VAR_6 < VAR_7)
  FUNC_1(VAR_1, "premature end of bitmap data in bmp image");

 VAR_2->compression = VAR_0;
 VAR_2->bitcount = 24;
 *VAR_4 = VAR_7;
 return VAR_8;
}

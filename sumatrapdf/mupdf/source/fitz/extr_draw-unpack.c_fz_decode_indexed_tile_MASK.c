
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* samples; int stride; int w; int n; int alpha; int h; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 int VAR_0 ;
 unsigned char FUNC_0 (int,int ,int) ;

void
FUNC_1(fz_context *VAR_1, fz_pixmap *VAR_2, const float *VAR_3, int VAR_4)
{
 int VAR_5[VAR_0];
 int VAR_6[VAR_0];
 unsigned char *VAR_7 = VAR_2->samples;
 int VAR_8 = VAR_2->stride - VAR_2->w * VAR_2->n;
 int VAR_9;
 int VAR_10 = VAR_2->n;
 int VAR_11 = VAR_10 - VAR_2->alpha;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_12 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
 {
  int VAR_15 = VAR_3[VAR_13 * 2] * 256;
  int VAR_16 = VAR_3[VAR_13 * 2 + 1] * 256;
  VAR_5[VAR_13] = VAR_15;
  VAR_6[VAR_13] = (VAR_16 - VAR_15) / VAR_4;
  VAR_12 |= VAR_15 != 0 || VAR_16 != VAR_4 * 256;
 }

 if (!VAR_12)
  return;

 VAR_14 = VAR_2->h;
 while (VAR_14--)
 {
  VAR_9 = VAR_2->w;
  while (VAR_9--)
  {
   for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
   {
    int VAR_17 = (VAR_5[VAR_13] + (((VAR_7[VAR_13] << 8) * VAR_6[VAR_13]) >> 8)) >> 8;
    VAR_7[VAR_13] = FUNC_0(VAR_17, 0, 255);
   }
   VAR_7 += VAR_10;
  }
  VAR_7 += VAR_8;
 }
}

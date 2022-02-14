
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* samples; int stride; int w; int n; int h; scalar_t__ alpha; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 int VAR_0 ;
 unsigned char FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (unsigned char,int) ;

void
FUNC_3(fz_context *VAR_1, fz_pixmap *VAR_2, const float *VAR_3)
{
 int VAR_4[VAR_0];
 int VAR_5[VAR_0];
 unsigned char *VAR_6 = VAR_2->samples;
 int VAR_7 = VAR_2->stride - VAR_2->w * VAR_2->n;
 int VAR_8;
 int VAR_9 = FUNC_1(1, VAR_2->n - VAR_2->alpha);
 int VAR_10;
 int VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
 {
  int VAR_12 = VAR_3[VAR_10 * 2] * 255;
  int VAR_13 = VAR_3[VAR_10 * 2 + 1] * 255;
  VAR_4[VAR_10] = VAR_12;
  VAR_5[VAR_10] = VAR_13 - VAR_12;
 }

 VAR_11 = VAR_2->h;
 while (VAR_11--)
 {
  VAR_8 = VAR_2->w;
  while (VAR_8--)
  {
   for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
   {
    int VAR_14 = VAR_4[VAR_10] + FUNC_2(VAR_6[VAR_10], VAR_5[VAR_10]);
    VAR_6[VAR_10] = FUNC_0(VAR_14, 0, 255);
   }
   VAR_6 += VAR_2->n;
  }
  VAR_6 += VAR_7;
 }
}

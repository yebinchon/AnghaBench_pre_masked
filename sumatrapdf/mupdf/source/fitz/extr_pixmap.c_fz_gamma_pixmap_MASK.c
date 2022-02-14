
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* samples; int n; int alpha; int h; int w; int stride; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 int FUNC_0 (int,float) ;

void
FUNC_1(fz_context *VAR_0, fz_pixmap *VAR_1, float VAR_2)
{
 unsigned char VAR_3[256];
 unsigned char *VAR_4 = VAR_1->samples;
 int VAR_5 = VAR_1->n - VAR_1->alpha;
 int VAR_6 = VAR_1->n;
 int VAR_7, VAR_8, VAR_9;

 for (VAR_7 = 0; VAR_7 < 256; VAR_7++)
  VAR_3[VAR_7] = FUNC_0(VAR_7 / 255.0f, VAR_2) * 255;

 for (VAR_9 = 0; VAR_9 < VAR_1->h; VAR_9++)
 {
  for (VAR_8 = 0; VAR_8 < VAR_1->w; VAR_8++)
  {
   for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    VAR_4[VAR_7] = VAR_3[VAR_4[VAR_7]];
   VAR_4 += VAR_6;
  }
  VAR_4 += VAR_1->stride - VAR_1->w * VAR_6;
 }
}

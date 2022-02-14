
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* samples; int n; int alpha; int h; int w; int stride; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;



void
FUNC_0(fz_context *VAR_0, fz_pixmap *VAR_1)
{
 unsigned char *VAR_2 = VAR_1->samples;
 int VAR_3, VAR_4, VAR_5;
 int VAR_6 = VAR_1->n - VAR_1->alpha;
 int VAR_7 = VAR_1->n;

 for (VAR_5 = 0; VAR_5 < VAR_1->h; VAR_5++)
 {
  for (VAR_4 = 0; VAR_4 < VAR_1->w; VAR_4++)
  {
   for (VAR_3 = 0; VAR_3 < VAR_6; VAR_3++)
    VAR_2[VAR_3] = 255 - VAR_2[VAR_3];
   VAR_2 += VAR_7;
  }
  VAR_2 += VAR_1->stride - VAR_1->w * VAR_7;
 }
}

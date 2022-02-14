
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* samples; int stride; int w; int n; int h; int alpha; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 unsigned char FUNC_0 (unsigned char,unsigned char) ;

void
FUNC_1(fz_context *VAR_0, fz_pixmap *VAR_1)
{
 unsigned char *VAR_2 = VAR_1->samples;
 unsigned char VAR_3;
 int VAR_4, VAR_5, VAR_6;
 int VAR_7 = VAR_1->stride - VAR_1->w * VAR_1->n;

 if (!VAR_1->alpha)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_1->h; VAR_6++)
 {
  for (VAR_5 = 0; VAR_5 < VAR_1->w; VAR_5++)
  {
   VAR_3 = VAR_2[VAR_1->n - 1];
   for (VAR_4 = 0; VAR_4 < VAR_1->n - 1; VAR_4++)
    VAR_2[VAR_4] = FUNC_0(VAR_2[VAR_4], VAR_3);
   VAR_2 += VAR_1->n;
  }
  VAR_2 += VAR_7;
 }
}

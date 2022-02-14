
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* samples; int h; int stride; int w; int n; } ;
typedef TYPE_1__ fz_pixmap ;



__attribute__((used)) static void
FUNC_0(fz_pixmap *VAR_0, int VAR_1, const int *VAR_2)
{
 unsigned char *VAR_3 = VAR_0->samples;
 int VAR_4;
 int VAR_5, VAR_6;
 int VAR_7 = VAR_0->h;
 int VAR_8 = VAR_0->stride - VAR_0->w * VAR_0->n;
 if (VAR_0->w == 0)
  return;
 while (VAR_7--)
 {
  VAR_4 = VAR_0->w;
  do
  {
   VAR_6 = 1;
   for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    if (VAR_3[VAR_5] < VAR_2[VAR_5 * 2] || VAR_3[VAR_5] > VAR_2[VAR_5 * 2 + 1])
     VAR_6 = 0;
   if (VAR_6)
    for (VAR_5 = 0; VAR_5 < VAR_0->n; VAR_5++)
     VAR_3[VAR_5] = 0;
   VAR_3 += VAR_0->n;
  }
  while (--VAR_4);
  VAR_3 += VAR_8;
 }
}

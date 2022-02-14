
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ptrdiff_t ;
struct TYPE_5__ {unsigned char* samples; size_t w; int h; int n; size_t stride; int alpha; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*,int) ;

void
FUNC_1(fz_context *VAR_0, fz_pixmap *VAR_1, fz_pixmap *VAR_2, int VAR_3)
{
 if (!VAR_1->alpha)
  FUNC_0(VAR_0, VAR_2, 255);
 else
 {
  unsigned char *VAR_4 = VAR_1->samples;
  unsigned char *VAR_5 = VAR_2->samples;
  size_t VAR_6 = VAR_1->w;
  int VAR_7 = VAR_1->h;
  int VAR_8 = VAR_1->n;
  ptrdiff_t VAR_9 = VAR_2->stride - VAR_6 * VAR_2->n;
  ptrdiff_t VAR_10 = VAR_1->stride - VAR_6 * VAR_1->n;

  if ((int)VAR_6 < 0 || VAR_7 < 0)
   return;

  if (VAR_9 == 0 && VAR_10 == 0)
  {
   VAR_6 *= VAR_7;
   VAR_7 = 1;
  }

  VAR_4 += VAR_8-1;
  while (VAR_7--)
  {
   size_t VAR_11 = VAR_6;
   while (VAR_11--)
   {
    *VAR_5++ = *VAR_4;
    VAR_4 += VAR_8;
   }
   VAR_5 += VAR_9;
   VAR_4 += VAR_10;
  }
 }
}

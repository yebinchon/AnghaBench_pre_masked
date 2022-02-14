
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alpha; int w; int h; unsigned char* samples; int stride; int n; int s; int colorspace; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 int FUNC_0 (unsigned char*,int,int,int ,int,int,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (unsigned char*,int,unsigned int) ;

void
FUNC_3(fz_context *VAR_0, fz_pixmap *VAR_1, int VAR_2)
{
 unsigned char *VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9 = VAR_1->alpha;

 VAR_4 = VAR_1->w;
 VAR_5 = VAR_1->h;
 if (VAR_4 < 0 || VAR_5 < 0)
  return;


 if (FUNC_1(VAR_0, VAR_1->colorspace) == 4)
 {
  FUNC_0(VAR_1->samples, VAR_4, VAR_5, VAR_1->s, VAR_1->stride, 255-VAR_2, VAR_1->alpha);
  return;
 }

 VAR_6 = VAR_1->n;
 VAR_7 = VAR_1->stride;
 VAR_8 = VAR_4 * VAR_6;

 VAR_3 = VAR_1->samples;
 if (VAR_2 == 255 || !VAR_9)
 {
  if (VAR_7 == VAR_8)
  {
   VAR_8 *= VAR_5;
   VAR_5 = 1;
  }
  while (VAR_5--)
  {
   FUNC_2(VAR_3, VAR_2, (unsigned int)VAR_8);
   VAR_3 += VAR_7;
  }
 }
 else
 {
  int VAR_10, VAR_11, VAR_12;
  VAR_7 -= VAR_8;
  for (VAR_12 = 0; VAR_12 < VAR_1->h; VAR_12++)
  {
   for (VAR_11 = 0; VAR_11 < VAR_1->w; VAR_11++)
   {
    for (VAR_10 = 0; VAR_10 < VAR_1->n - 1; VAR_10++)
     *VAR_3++ = VAR_2;
    if (VAR_9)
     *VAR_3++ = 255;
   }
   VAR_3 += VAR_7;
  }
 }
}

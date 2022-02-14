
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int stride; unsigned char* samples; int y; int n; int x; int colorspace; } ;
typedef TYPE_1__ fz_pixmap ;
struct TYPE_9__ {int x1; int x0; int y1; int y0; } ;
typedef TYPE_2__ fz_irect ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 TYPE_2__ FUNC_1 (TYPE_2__,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (unsigned char*,int,unsigned int) ;

void
FUNC_4(fz_context *VAR_0, fz_pixmap *VAR_1, int VAR_2, fz_irect VAR_3)
{
 unsigned char *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_3 = FUNC_1(VAR_3, FUNC_2(VAR_0, VAR_1));
 VAR_7 = VAR_3.x1 - VAR_3.x0;
 VAR_6 = VAR_3.y1 - VAR_3.y0;
 if (VAR_7 <= 0 || VAR_6 <= 0)
  return;

 VAR_9 = VAR_1->stride;
 VAR_4 = VAR_1->samples + (unsigned int)(VAR_9 * (VAR_3.y0 - VAR_1->y) + VAR_1->n * (VAR_3.x0 - VAR_1->x));


 if (FUNC_0(VAR_0, VAR_1->colorspace) == 4)
 {
  VAR_2 = 255 - VAR_2;
  do
  {
   unsigned char *VAR_10 = VAR_4;
   for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
   {
    *VAR_10++ = 0;
    *VAR_10++ = 0;
    *VAR_10++ = 0;
    *VAR_10++ = VAR_2;
    *VAR_10++ = 255;
   }
   VAR_4 += VAR_9;
  }
  while (--VAR_6);
  return;
 }

 if (VAR_2 == 255)
 {
  do
  {
   FUNC_3(VAR_4, 255, (unsigned int)(VAR_7 * VAR_1->n));
   VAR_4 += VAR_9;
  }
  while (--VAR_6);
 }
 else
 {
  do
  {
   unsigned char *VAR_11 = VAR_4;
   for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
   {
    for (VAR_8 = 0; VAR_8 < VAR_1->n - 1; VAR_8++)
     *VAR_11++ = VAR_2;
    *VAR_11++ = 255;
   }
   VAR_4 += VAR_9;
  }
  while (--VAR_6);
 }
}

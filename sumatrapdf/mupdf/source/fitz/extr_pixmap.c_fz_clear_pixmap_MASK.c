
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int n; int h; unsigned char* samples; int stride; int s; int colorspace; scalar_t__ alpha; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (unsigned char*,int,unsigned int) ;

void
FUNC_2(fz_context *VAR_0, fz_pixmap *VAR_1)
{
 int VAR_2 = VAR_1->w * VAR_1->n;
 int VAR_3 = VAR_1->h;
 unsigned char *VAR_4 = VAR_1->samples;
 if (VAR_2 == VAR_1->stride)
 {
  VAR_2 *= VAR_3;
  VAR_3 = 1;
 }
 if (VAR_1->alpha || FUNC_0(VAR_0, VAR_1->colorspace))
 {
  while (VAR_3--)
  {
   FUNC_1(VAR_4, 0, (unsigned int)VAR_2);
   VAR_4 += VAR_1->stride;
  }
 }
 else if (VAR_1->s == 0)
 {
  while (VAR_3--)
  {
   FUNC_1(VAR_4, 0xff, (unsigned int)VAR_2);
   VAR_4 += VAR_1->stride;
  }
 }
 else
 {

  int VAR_5 = VAR_2/VAR_1->n;
  int VAR_6 = VAR_1->s;
  int VAR_7 = VAR_1->n - VAR_6;
  while (VAR_3--)
  {
   int VAR_8 = VAR_5;
   while (VAR_8--)
   {
    int VAR_9 = VAR_7;
    do
    {
     *VAR_4++ = 0xff;
     VAR_9--;
    }
    while (VAR_9 != 0);

    VAR_9 = VAR_6;
    do
    {
     *VAR_4++ = 0;
     VAR_9--;
    }
    while (VAR_9 != 0);
   }
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ptrdiff_t ;
struct TYPE_4__ {unsigned char* samples; size_t w; int h; int n; int s; int alpha; size_t stride; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_1, fz_pixmap *VAR_2, fz_pixmap *VAR_3, int VAR_4)
{
 unsigned char *VAR_5 = VAR_2->samples;
 unsigned char *VAR_6 = VAR_3->samples;
 size_t VAR_7 = VAR_2->w;
 int VAR_8 = VAR_2->h;
 int VAR_9 = VAR_2->n;
 int VAR_10 = VAR_2->s;
 int VAR_11 = VAR_2->alpha;
 int VAR_12 = VAR_3->n;
 int VAR_13 = VAR_3->s;
 int VAR_14 = VAR_3->alpha;
 ptrdiff_t VAR_15 = VAR_3->stride - VAR_7 * VAR_12;
 ptrdiff_t VAR_16 = VAR_2->stride - VAR_7 * VAR_9;


 if (VAR_4 && VAR_10 != VAR_13)
  FUNC_0(VAR_1, VAR_0, "incompatible number of spots when converting pixmap");
 if (!VAR_14 && VAR_11)
  FUNC_0(VAR_1, VAR_0, "cannot drop alpha when converting pixmap");

 if ((int)VAR_7 < 0 || VAR_8 < 0)
  return;

 if (VAR_15 == 0 && VAR_16 == 0)
 {
  VAR_7 *= VAR_8;
  VAR_8 = 1;
 }

 if (VAR_10 == 0 && VAR_13 == 0)
 {

  if (VAR_14)
  {
   if (VAR_11)
   {
    while (VAR_8--)
    {
     size_t VAR_17 = VAR_7;
     while (VAR_17--)
     {
      VAR_6[0] = VAR_5[0];
      VAR_6[1] = VAR_5[1];
      VAR_6[2] = VAR_5[2];
      VAR_6[3] = VAR_5[3];
      VAR_6[4] = VAR_5[4];
      VAR_5 += 5;
      VAR_6 += 5;
     }
    }
   }
   else
   {
    while (VAR_8--)
    {
     size_t VAR_18 = VAR_7;
     while (VAR_18--)
     {
      VAR_6[0] = VAR_5[0];
      VAR_6[1] = VAR_5[1];
      VAR_6[2] = VAR_5[2];
      VAR_6[3] = VAR_5[3];
      VAR_6[4] = 255;
      VAR_5 += 4;
      VAR_6 += 5;
     }
    }
   }
  }
  else
  {
   while (VAR_8--)
   {
    size_t VAR_19 = VAR_7;
    while (VAR_19--)
    {
     VAR_6[0] = VAR_5[0];
     VAR_6[1] = VAR_5[1];
     VAR_6[2] = VAR_5[2];
     VAR_6[3] = VAR_5[3];
     VAR_5 += 4;
     VAR_6 += 4;
    }
   }
  }
 }
 else if (VAR_4)
 {

  while (VAR_8--)
  {
   int VAR_20;
   size_t VAR_21 = VAR_7;
   while (VAR_21--)
   {
    VAR_6[0] = VAR_5[0];
    VAR_6[1] = VAR_5[1];
    VAR_6[2] = VAR_5[2];
    VAR_6[3] = VAR_5[3];
    VAR_5 += 4;
    VAR_6 += 4;
    for (VAR_20=VAR_10; VAR_20 > 0; VAR_20--)
     *VAR_6++ = *VAR_5++;
    if (VAR_14)
     *VAR_6++ = VAR_11 ? *VAR_5++ : 255;
   }
   VAR_6 += VAR_15;
   VAR_5 += VAR_16;
  }
 }
 else
 {
  while (VAR_8--)
  {
   size_t VAR_22 = VAR_7;
   while (VAR_22--)
   {
    VAR_6[0] = VAR_5[0];
    VAR_6[1] = VAR_5[1];
    VAR_6[2] = VAR_5[2];
    VAR_6[3] = VAR_5[3];
    VAR_5 += VAR_9;
    VAR_6 += VAR_12;
    if (VAR_14)
     VAR_6[-1] = VAR_11 ? VAR_5[-1] : 255;
   }
   VAR_6 += VAR_15;
   VAR_5 += VAR_16;
  }
 }
}

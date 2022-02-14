
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
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int *,int ,char*) ;

__attribute__((used)) static void FUNC_4(fz_context *VAR_1, fz_pixmap *VAR_2, fz_pixmap *VAR_3, int VAR_4)
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
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24 = 255;
 int VAR_25;

 if (VAR_4 && VAR_10 != VAR_13)
  FUNC_3(VAR_1, VAR_0, "incompatible number of spots when converting pixmap");

 if ((int)VAR_7 < 0 || VAR_8 < 0)
  FUNC_3(VAR_1, VAR_0, "integer overflow");

 while (VAR_8--)
 {
  size_t VAR_26 = VAR_7;
  while (VAR_26--)
  {
   VAR_23 = VAR_5[0];
   VAR_22 = VAR_5[1];
   VAR_21 = VAR_5[2];

   if (VAR_11)
   {
    VAR_24 = VAR_5[3+VAR_10];
    VAR_21 = FUNC_0(VAR_21, VAR_24);
    VAR_22 = FUNC_0(VAR_22, VAR_24);
    VAR_23 = FUNC_0(VAR_23, VAR_24);
   }

   VAR_17 = 255 - VAR_21;
   VAR_18 = 255 - VAR_22;
   VAR_19 = 255 - VAR_23;
   VAR_20 = FUNC_1(VAR_17, FUNC_1(VAR_18, VAR_19));
   VAR_17 = VAR_17 - VAR_20;
   VAR_18 = VAR_18 - VAR_20;
   VAR_19 = VAR_19 - VAR_20;

   if (VAR_14)
   {
    *VAR_6++ = FUNC_2(VAR_17, VAR_24);
    *VAR_6++ = FUNC_2(VAR_18, VAR_24);
    *VAR_6++ = FUNC_2(VAR_19, VAR_24);
    *VAR_6++ = FUNC_2(VAR_20, VAR_24);
   }
   else
   {
    *VAR_6++ = VAR_17;
    *VAR_6++ = VAR_18;
    *VAR_6++ = VAR_19;
    *VAR_6++ = VAR_20;
   }

   if (VAR_4)
   {
    VAR_5 += 3;
    for (VAR_25=VAR_10; VAR_25 > 0; --VAR_25)
     *VAR_6++ = *VAR_5++;
    VAR_5 += VAR_11;
   }
   else
   {
    VAR_5 += 3 + VAR_10 + VAR_11;
    VAR_6 += VAR_13;
   }

   if (VAR_14)
   {
    *VAR_6++ = VAR_24;
   }
  }
  VAR_6 += VAR_15;
  VAR_5 += VAR_16;
 }
}

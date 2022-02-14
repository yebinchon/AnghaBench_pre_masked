
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int white ;
struct TYPE_3__ {unsigned char* samples; int n; int h; int w; int stride; int colorspace; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;
typedef int black ;





 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (unsigned char,int) ;
 int FUNC_2 (int *,int ,char*) ;

void
FUNC_3(fz_context *VAR_1, fz_pixmap *VAR_2, int VAR_3, int VAR_4)
{
 unsigned char *VAR_5 = VAR_2->samples;
 int VAR_6 = VAR_2->n;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10 = (VAR_3>>16)&255;
 int VAR_11 = (VAR_3>>8)&255;
 int VAR_12 = (VAR_3)&255;
 int VAR_13 = (VAR_4>>16)&255;
 int VAR_14 = (VAR_4>>8)&255;
 int VAR_15 = (VAR_4)&255;
 int VAR_16 = (VAR_13 - VAR_10);
 int VAR_17 = (VAR_14 - VAR_11);
 int VAR_18 = (VAR_15 - VAR_12);

 switch (FUNC_0(VAR_1, VAR_2->colorspace))
 {
 case 129:
  VAR_14 = (VAR_13 + VAR_14 + VAR_15) / 3;
  VAR_11 = (VAR_10 + VAR_11 + VAR_12) / 3;
  VAR_17 = VAR_14 - VAR_11;
  for (VAR_8 = 0; VAR_8 < VAR_2->h; VAR_8++)
  {
   for (VAR_7 = 0; VAR_7 < VAR_2->w; VAR_7++)
   {
    *VAR_5 = VAR_11 + FUNC_1(*VAR_5, VAR_17);
    VAR_5 += VAR_6;
   }
   VAR_5 += VAR_2->stride - VAR_2->w * VAR_6;
  }
  break;

 case 130:
  VAR_9 = VAR_16; VAR_16 = VAR_18; VAR_18 = VAR_9;
  VAR_9 = VAR_10; VAR_10 = VAR_12; VAR_12 = VAR_9;

 case 128:
  for (VAR_8 = 0; VAR_8 < VAR_2->h; VAR_8++)
  {
   for (VAR_7 = 0; VAR_7 < VAR_2->w; VAR_7++)
   {
    VAR_5[0] = VAR_10 + FUNC_1(VAR_5[0], VAR_16);
    VAR_5[1] = VAR_11 + FUNC_1(VAR_5[1], VAR_17);
    VAR_5[2] = VAR_12 + FUNC_1(VAR_5[2], VAR_18);
    VAR_5 += VAR_6;
   }
   VAR_5 += VAR_2->stride - VAR_2->w * VAR_6;
  }
  break;

 default:
  FUNC_2(VAR_1, VAR_0, "can only tint RGB, BGR and Gray pixmaps");
  break;
 }
}

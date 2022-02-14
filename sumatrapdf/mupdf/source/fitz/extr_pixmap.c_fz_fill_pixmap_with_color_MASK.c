
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alpha; int s; int w; int h; unsigned char* samples; int stride; int colorspace; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,float*,int ,float*,int *,int ) ;

void
FUNC_2(fz_context *VAR_1, fz_pixmap *VAR_2, fz_colorspace *VAR_3, float *VAR_4, fz_color_params VAR_5)
{
 float VAR_6[VAR_0];
 unsigned char VAR_7[VAR_0];
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_9 = FUNC_0(VAR_1, VAR_2->colorspace);
 VAR_10 = VAR_2->alpha;
 VAR_11 = VAR_2->s;
 FUNC_1(VAR_1, VAR_3, VAR_4, VAR_2->colorspace, VAR_6, ((void*)0), VAR_5);
 for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8)
  VAR_7[VAR_8] = VAR_6[VAR_8] * 255;

 VAR_14 = VAR_2->w;
 VAR_15 = VAR_2->h;
 for (VAR_13 = 0; VAR_13 < VAR_15; ++VAR_13)
 {
  unsigned char *VAR_16 = VAR_2->samples + VAR_13 * VAR_2->stride;
  for (VAR_12 = 0; VAR_12 < VAR_14; ++VAR_12)
  {
   for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8)
    *VAR_16++ = VAR_7[VAR_8];
   for (VAR_8 = 0; VAR_8 < VAR_11; ++VAR_8)
    *VAR_16++ = 0;
   if (VAR_10)
    *VAR_16++ = 255;
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* rgba; int* cmyk; size_t* cs_pos; int ** cs; } ;
typedef TYPE_1__ fz_separations ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,float*,int *,float*,int *,int ) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (float*,int ,int) ;

void
FUNC_4(fz_context *VAR_2,
 const fz_separations *VAR_3,
 int VAR_4,
 fz_colorspace *VAR_5, float *VAR_6,
 fz_colorspace *VAR_7,
 fz_color_params VAR_8)
{
 float VAR_9[VAR_1];

 if (!VAR_3->cs[VAR_4])
 {
  switch (FUNC_0(VAR_2, VAR_5))
  {
  case 3:
   VAR_6[0] = (VAR_3->rgba[VAR_4] & 0xff)/ 255.0f;
   VAR_6[1] = ((VAR_3->rgba[VAR_4]>>8) & 0xff)/ 255.0f;
   VAR_6[2] = ((VAR_3->rgba[VAR_4]>>16) & 0xff)/ 255.0f;
   VAR_6[3] = ((VAR_3->rgba[VAR_4]>>24) & 0xff)/ 255.0f;
   return;
  case 4:
   VAR_6[0] = (VAR_3->cmyk[VAR_4] & 0xff)/ 255.0f;
   VAR_6[1] = ((VAR_3->cmyk[VAR_4]>>8) & 0xff)/ 255.0f;
   VAR_6[2] = ((VAR_3->cmyk[VAR_4]>>16) & 0xff)/ 255.0f;
   VAR_6[3] = ((VAR_3->cmyk[VAR_4]>>24) & 0xff)/ 255.0f;
   return;
  default:
   FUNC_2(VAR_2, VAR_0, "Cannot return equivalent in this colorspace");
  }
 }

 FUNC_3(VAR_9, 0, sizeof(float) * FUNC_0(VAR_2, VAR_3->cs[VAR_4]));
 VAR_9[VAR_3->cs_pos[VAR_4]] = 1;
 FUNC_1(VAR_2, VAR_3->cs[VAR_4], VAR_9, VAR_5, VAR_6, VAR_7, VAR_8);
}

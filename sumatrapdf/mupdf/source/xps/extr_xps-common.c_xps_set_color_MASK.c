
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* color; float alpha; float* opacity; size_t opacity_top; int * colorspace; } ;
typedef TYPE_1__ xps_document ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(fz_context *VAR_0, xps_document *VAR_1, fz_colorspace *VAR_2, float *VAR_3)
{
 int VAR_4;
 int VAR_5 = FUNC_0(VAR_0, VAR_2);
 VAR_1->colorspace = VAR_2;
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  VAR_1->color[VAR_4] = VAR_3[VAR_4 + 1];
 VAR_1->alpha = VAR_3[0] * VAR_1->opacity[VAR_1->opacity_top];
}

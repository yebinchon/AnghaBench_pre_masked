
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;
struct TYPE_5__ {int (* convert ) (int *,TYPE_1__*,float const*,float*) ;} ;
typedef TYPE_1__ fz_color_converter ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,int *,int *,int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*,float const*,float*) ;

void
FUNC_3(fz_context *VAR_0, fz_colorspace *VAR_1, const float *VAR_2, fz_colorspace *VAR_3, float *VAR_4, fz_colorspace *VAR_5, fz_color_params VAR_6)
{
 fz_color_converter VAR_7;
 FUNC_1(VAR_0, &VAR_7, VAR_1, VAR_3, VAR_5, VAR_6);
 VAR_7.convert(VAR_0, &VAR_7, VAR_2, VAR_4);
 FUNC_0(VAR_0, &VAR_7);
}

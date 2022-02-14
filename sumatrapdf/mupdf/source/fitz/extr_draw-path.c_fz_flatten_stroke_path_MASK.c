
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_stroke_state ;
typedef int fz_rasterizer ;
typedef int fz_path ;
typedef int fz_matrix ;
typedef int fz_irect ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int const*,int const*,int ,float,float,int const*,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int const) ;

int
FUNC_3(fz_context *VAR_0, fz_rasterizer *VAR_1, const fz_path *VAR_2, const fz_stroke_state *VAR_3, fz_matrix VAR_4, float VAR_5, float VAR_6, const fz_irect *VAR_7, fz_irect *VAR_8)
{
 if (FUNC_2(VAR_0, VAR_1, *VAR_7))
 {
  if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8))
   return 1;
  FUNC_1(VAR_0, VAR_1);
  VAR_8 = ((void*)0);
 }

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}

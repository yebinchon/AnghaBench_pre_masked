
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *,int *,float const*,int *,float*,int *,int ) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static unsigned int
FUNC_3(fz_context *VAR_0, fz_colorspace *VAR_1, const float *VAR_2, fz_color_params VAR_3)
{
 float VAR_4[3];
 int VAR_5, VAR_6, VAR_7;

 if (VAR_1 != FUNC_2(VAR_0))
 {
  FUNC_1(VAR_0, VAR_1, VAR_2, FUNC_2(VAR_0), VAR_4, ((void*)0), VAR_3);
  VAR_2 = VAR_4;
 }

 VAR_5 = FUNC_0(255 * VAR_2[0] + 0.5f, 0, 255);
 VAR_6 = FUNC_0(255 * VAR_2[1] + 0.5f, 0, 255);
 VAR_7 = FUNC_0(255 * VAR_2[2] + 0.5f, 0, 255);

 return (VAR_5 << 16) | (VAR_6 << 8) | VAR_7;
}

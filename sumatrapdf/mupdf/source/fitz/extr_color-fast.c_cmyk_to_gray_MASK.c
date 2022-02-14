
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;
typedef int fz_color_converter ;


 int FUNC_0 (float,int) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, fz_color_converter *VAR_1, const float *VAR_2, float *VAR_3)
{
 float VAR_4 = VAR_2[0] * 0.3f;
 float VAR_5 = VAR_2[1] * 0.59f;
 float VAR_6 = VAR_2[2] * 0.11f;
 VAR_3[0] = 1 - FUNC_0(VAR_4 + VAR_5 + VAR_6 + VAR_2[3], 1);
}

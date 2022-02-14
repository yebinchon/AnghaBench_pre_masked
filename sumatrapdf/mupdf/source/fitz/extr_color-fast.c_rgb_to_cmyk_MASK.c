
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;
typedef int fz_color_converter ;


 float FUNC_0 (float,float) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, fz_color_converter *VAR_1, const float *VAR_2, float *VAR_3)
{
 float VAR_4, VAR_5, VAR_6, VAR_7;
 VAR_4 = 1 - VAR_2[0];
 VAR_5 = 1 - VAR_2[1];
 VAR_6 = 1 - VAR_2[2];
 VAR_7 = FUNC_0(VAR_4, FUNC_0(VAR_5, VAR_6));
 VAR_3[0] = VAR_4 - VAR_7;
 VAR_3[1] = VAR_5 - VAR_7;
 VAR_3[2] = VAR_6 - VAR_7;
 VAR_3[3] = VAR_7;
}

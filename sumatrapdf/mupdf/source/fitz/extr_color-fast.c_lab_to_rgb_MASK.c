
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;
typedef int fz_color_converter ;


 float FUNC_0 (float) ;
 int FUNC_1 (float,int ,int) ;
 float FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_0, fz_color_converter *VAR_1, const float *VAR_2, float *VAR_3)
{

 float VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 VAR_4 = VAR_2[0];
 VAR_5 = VAR_2[1];
 VAR_6 = VAR_2[2];
 VAR_8 = (VAR_4 + 16) / 116;
 VAR_7 = VAR_8 + VAR_5 / 500;
 VAR_9 = VAR_8 - VAR_6 / 200;
 VAR_10 = FUNC_0(VAR_7);
 VAR_11 = FUNC_0(VAR_8);
 VAR_12 = FUNC_0(VAR_9);
 VAR_13 = (3.240449f * VAR_10 + -1.537136f * VAR_11 + -0.498531f * VAR_12) * 0.830026f;
 VAR_14 = (-0.969265f * VAR_10 + 1.876011f * VAR_11 + 0.041556f * VAR_12) * 1.05452f;
 VAR_15 = (0.055643f * VAR_10 + -0.204026f * VAR_11 + 1.057229f * VAR_12) * 1.1003f;
 VAR_3[0] = FUNC_2(FUNC_1(VAR_13, 0, 1));
 VAR_3[1] = FUNC_2(FUNC_1(VAR_14, 0, 1));
 VAR_3[2] = FUNC_2(FUNC_1(VAR_15, 0, 1));
}

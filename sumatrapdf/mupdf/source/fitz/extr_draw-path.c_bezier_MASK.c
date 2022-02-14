
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_rasterizer ;
typedef int fz_matrix ;
typedef int fz_context ;


 int VAR_0 ;
 float FUNC_0 (float) ;
 float FUNC_1 (float,float) ;
 int FUNC_2 (int *,int *,int ,float,float,float,float) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, fz_rasterizer *VAR_2, fz_matrix VAR_3, float VAR_4,
 float VAR_5, float VAR_6,
 float VAR_7, float VAR_8,
 float VAR_9, float VAR_10,
 float VAR_11, float VAR_12, int VAR_13)
{
 float VAR_14;
 float VAR_15, VAR_16;
 float VAR_17, VAR_18;
 float VAR_19, VAR_20;
 float VAR_21, VAR_22;
 float VAR_23, VAR_24;
 float VAR_25, VAR_26;


 VAR_14 = FUNC_0(VAR_5 - VAR_7);
 VAR_14 = FUNC_1(VAR_14, FUNC_0(VAR_6 - VAR_8));
 VAR_14 = FUNC_1(VAR_14, FUNC_0(VAR_11 - VAR_9));
 VAR_14 = FUNC_1(VAR_14, FUNC_0(VAR_12 - VAR_10));
 if (VAR_14 < VAR_4 || VAR_13 >= VAR_0)
 {
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6, VAR_11, VAR_12);
  return;
 }

 VAR_15 = VAR_5 + VAR_7;
 VAR_16 = VAR_6 + VAR_8;
 VAR_17 = VAR_7 + VAR_9;
 VAR_18 = VAR_8 + VAR_10;
 VAR_19 = VAR_9 + VAR_11;
 VAR_20 = VAR_10 + VAR_12;

 VAR_21 = VAR_15 + VAR_17;
 VAR_22 = VAR_16 + VAR_18;
 VAR_23 = VAR_17 + VAR_19;
 VAR_24 = VAR_18 + VAR_20;

 VAR_25 = VAR_21 + VAR_23;
 VAR_26 = VAR_22 + VAR_24;

 VAR_15 *= 0.5f; VAR_16 *= 0.5f;

 VAR_19 *= 0.5f; VAR_20 *= 0.5f;

 VAR_21 *= 0.25f; VAR_22 *= 0.25f;
 VAR_23 *= 0.25f; VAR_24 *= 0.25f;

 VAR_25 *= 0.125f; VAR_26 *= 0.125f;

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_15, VAR_16, VAR_21, VAR_22, VAR_25, VAR_26, VAR_13 + 1);
 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_25, VAR_26, VAR_23, VAR_24, VAR_19, VAR_20, VAR_11, VAR_12, VAR_13 + 1);
}

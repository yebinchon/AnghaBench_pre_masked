
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
 float VAR_9, float VAR_10, int VAR_11)
{
 float VAR_12;
 float VAR_13, VAR_14;
 float VAR_15, VAR_16;
 float VAR_17, VAR_18;


 VAR_12 = FUNC_0(VAR_5 - VAR_7);
 VAR_12 = FUNC_1(VAR_12, FUNC_0(VAR_6 - VAR_8));
 VAR_12 = FUNC_1(VAR_12, FUNC_0(VAR_9 - VAR_7));
 VAR_12 = FUNC_1(VAR_12, FUNC_0(VAR_10 - VAR_8));
 if (VAR_12 < VAR_4 || VAR_11 >= VAR_0)
 {
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6, VAR_9, VAR_10);
  return;
 }

 VAR_13 = VAR_5 + VAR_7;
 VAR_14 = VAR_6 + VAR_8;
 VAR_15 = VAR_7 + VAR_9;
 VAR_16 = VAR_8 + VAR_10;

 VAR_17 = VAR_13 + VAR_15;
 VAR_18 = VAR_14 + VAR_16;

 VAR_13 *= 0.5f; VAR_14 *= 0.5f;
 VAR_15 *= 0.5f; VAR_16 *= 0.5f;

 VAR_17 *= 0.25f; VAR_18 *= 0.25f;

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_13, VAR_14, VAR_17, VAR_18, VAR_11 + 1);
 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_17, VAR_18, VAR_15, VAR_16, VAR_9, VAR_10, VAR_11 + 1);
}

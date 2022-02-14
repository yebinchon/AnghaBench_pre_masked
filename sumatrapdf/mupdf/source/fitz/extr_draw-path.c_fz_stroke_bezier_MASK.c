
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctx {float flatness; } ;
typedef int fz_context ;


 int VAR_0 ;
 float FUNC_0 (float) ;
 float FUNC_1 (float,float) ;
 int FUNC_2 (int *,struct sctx*,float,float,int) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, struct sctx *VAR_2,
 float VAR_3, float VAR_4,
 float VAR_5, float VAR_6,
 float VAR_7, float VAR_8,
 float VAR_9, float VAR_10, int VAR_11)
{
 float VAR_12;
 float VAR_13, VAR_14;
 float VAR_15, VAR_16;
 float VAR_17, VAR_18;
 float VAR_19, VAR_20;
 float VAR_21, VAR_22;
 float VAR_23, VAR_24;


 VAR_12 = FUNC_0(VAR_3 - VAR_5);
 VAR_12 = FUNC_1(VAR_12, FUNC_0(VAR_4 - VAR_6));
 VAR_12 = FUNC_1(VAR_12, FUNC_0(VAR_9 - VAR_7));
 VAR_12 = FUNC_1(VAR_12, FUNC_0(VAR_10 - VAR_8));
 if (VAR_12 < VAR_2->flatness || VAR_11 >= VAR_0)
 {
  FUNC_2(VAR_1, VAR_2, VAR_9, VAR_10, 1);
  return;
 }

 VAR_13 = VAR_3 + VAR_5;
 VAR_14 = VAR_4 + VAR_6;
 VAR_15 = VAR_5 + VAR_7;
 VAR_16 = VAR_6 + VAR_8;
 VAR_17 = VAR_7 + VAR_9;
 VAR_18 = VAR_8 + VAR_10;

 VAR_19 = VAR_13 + VAR_15;
 VAR_20 = VAR_14 + VAR_16;
 VAR_21 = VAR_15 + VAR_17;
 VAR_22 = VAR_16 + VAR_18;

 VAR_23 = VAR_19 + VAR_21;
 VAR_24 = VAR_20 + VAR_22;

 VAR_13 *= 0.5f; VAR_14 *= 0.5f;

 VAR_17 *= 0.5f; VAR_18 *= 0.5f;

 VAR_19 *= 0.25f; VAR_20 *= 0.25f;
 VAR_21 *= 0.25f; VAR_22 *= 0.25f;

 VAR_23 *= 0.125f; VAR_24 *= 0.125f;

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_13, VAR_14, VAR_19, VAR_20, VAR_23, VAR_24, VAR_11 + 1);
 FUNC_3(VAR_1, VAR_2, VAR_23, VAR_24, VAR_21, VAR_22, VAR_17, VAR_18, VAR_9, VAR_10, VAR_11 + 1);
}

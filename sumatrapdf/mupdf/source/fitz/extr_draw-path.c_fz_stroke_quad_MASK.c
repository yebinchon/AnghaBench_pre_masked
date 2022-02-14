
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
 float VAR_7, float VAR_8, int VAR_9)
{
 float VAR_10;
 float VAR_11, VAR_12;
 float VAR_13, VAR_14;
 float VAR_15, VAR_16;


 VAR_10 = FUNC_0(VAR_3 - VAR_5);
 VAR_10 = FUNC_1(VAR_10, FUNC_0(VAR_4 - VAR_6));
 VAR_10 = FUNC_1(VAR_10, FUNC_0(VAR_7 - VAR_5));
 VAR_10 = FUNC_1(VAR_10, FUNC_0(VAR_8 - VAR_6));
 if (VAR_10 < VAR_2->flatness || VAR_9 >= VAR_0)
 {
  FUNC_2(VAR_1, VAR_2, VAR_7, VAR_8, 1);
  return;
 }

 VAR_11 = VAR_3 + VAR_5;
 VAR_12 = VAR_4 + VAR_6;
 VAR_13 = VAR_5 + VAR_7;
 VAR_14 = VAR_6 + VAR_8;

 VAR_15 = VAR_11 + VAR_13;
 VAR_16 = VAR_12 + VAR_14;

 VAR_11 *= 0.5f; VAR_12 *= 0.5f;
 VAR_13 *= 0.5f; VAR_14 *= 0.5f;

 VAR_15 *= 0.25f; VAR_16 *= 0.25f;

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_11, VAR_12, VAR_15, VAR_16, VAR_9 + 1);
 FUNC_3(VAR_1, VAR_2, VAR_15, VAR_16, VAR_13, VAR_14, VAR_7, VAR_8, VAR_9 + 1);
}

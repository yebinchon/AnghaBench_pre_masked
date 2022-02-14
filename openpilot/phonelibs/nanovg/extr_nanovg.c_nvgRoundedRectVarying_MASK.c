
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NVGcontext ;


 float VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (float*) ;
 int VAR_2 ;
 float VAR_3 ;
 float VAR_4 ;
 int FUNC_1 (int *,float,float,float,float) ;
 float FUNC_2 (float) ;
 int FUNC_3 (int *,float*,int ) ;
 float FUNC_4 (float,float) ;
 float FUNC_5 (float) ;

void FUNC_6(NVGcontext* VAR_5, float VAR_6, float VAR_7, float VAR_8, float VAR_9, float VAR_10, float VAR_11, float VAR_12, float VAR_13)
{
 if(VAR_10 < 0.1f && VAR_11 < 0.1f && VAR_12 < 0.1f && VAR_13 < 0.1f) {
  FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  return;
 } else {
  float VAR_14 = FUNC_2(VAR_8)*0.5f;
  float VAR_15 = FUNC_2(VAR_9)*0.5f;
  float VAR_16 = FUNC_4(VAR_13, VAR_14) * FUNC_5(VAR_8), VAR_17 = FUNC_4(VAR_13, VAR_15) * FUNC_5(VAR_9);
  float VAR_18 = FUNC_4(VAR_12, VAR_14) * FUNC_5(VAR_8), VAR_19 = FUNC_4(VAR_12, VAR_15) * FUNC_5(VAR_9);
  float VAR_20 = FUNC_4(VAR_11, VAR_14) * FUNC_5(VAR_8), VAR_21 = FUNC_4(VAR_11, VAR_15) * FUNC_5(VAR_9);
  float VAR_22 = FUNC_4(VAR_10, VAR_14) * FUNC_5(VAR_8), VAR_23 = FUNC_4(VAR_10, VAR_15) * FUNC_5(VAR_9);
  float VAR_24[] = {
   VAR_4, VAR_6, VAR_7 + VAR_23,
   VAR_3, VAR_6, VAR_7 + VAR_9 - VAR_17,
   VAR_0, VAR_6, VAR_7 + VAR_9 - VAR_17*(1 - VAR_2), VAR_6 + VAR_16*(1 - VAR_2), VAR_7 + VAR_9, VAR_6 + VAR_16, VAR_7 + VAR_9,
   VAR_3, VAR_6 + VAR_8 - VAR_18, VAR_7 + VAR_9,
   VAR_0, VAR_6 + VAR_8 - VAR_18*(1 - VAR_2), VAR_7 + VAR_9, VAR_6 + VAR_8, VAR_7 + VAR_9 - VAR_19*(1 - VAR_2), VAR_6 + VAR_8, VAR_7 + VAR_9 - VAR_19,
   VAR_3, VAR_6 + VAR_8, VAR_7 + VAR_21,
   VAR_0, VAR_6 + VAR_8, VAR_7 + VAR_21*(1 - VAR_2), VAR_6 + VAR_8 - VAR_20*(1 - VAR_2), VAR_7, VAR_6 + VAR_8 - VAR_20, VAR_7,
   VAR_3, VAR_6 + VAR_22, VAR_7,
   VAR_0, VAR_6 + VAR_22*(1 - VAR_2), VAR_7, VAR_6, VAR_7 + VAR_23*(1 - VAR_2), VAR_6, VAR_7 + VAR_23,
   VAR_1
  };
  FUNC_3(VAR_5, VAR_24, FUNC_0(VAR_24));
 }
}

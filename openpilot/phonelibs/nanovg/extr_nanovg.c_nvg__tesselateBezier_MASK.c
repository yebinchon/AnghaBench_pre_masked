
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float tessTol; } ;
typedef TYPE_1__ NVGcontext ;


 float FUNC_0 (float) ;
 int FUNC_1 (TYPE_1__*,float,float,int) ;

__attribute__((used)) static void FUNC_2(NVGcontext* VAR_0,
         float VAR_1, float VAR_2, float VAR_3, float VAR_4,
         float VAR_5, float VAR_6, float VAR_7, float VAR_8,
         int VAR_9, int VAR_10)
{
 float VAR_11,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16,VAR_17,VAR_18,VAR_19,VAR_20,VAR_21,VAR_22;
 float VAR_23,VAR_24,VAR_25,VAR_26;

 if (VAR_9 > 10) return;

 VAR_11 = (VAR_1+VAR_3)*0.5f;
 VAR_12 = (VAR_2+VAR_4)*0.5f;
 VAR_13 = (VAR_3+VAR_5)*0.5f;
 VAR_14 = (VAR_4+VAR_6)*0.5f;
 VAR_15 = (VAR_5+VAR_7)*0.5f;
 VAR_16 = (VAR_6+VAR_8)*0.5f;
 VAR_17 = (VAR_11+VAR_13)*0.5f;
 VAR_18 = (VAR_12+VAR_14)*0.5f;

 VAR_23 = VAR_7 - VAR_1;
 VAR_24 = VAR_8 - VAR_2;
 VAR_25 = FUNC_0(((VAR_3 - VAR_7) * VAR_24 - (VAR_4 - VAR_8) * VAR_23));
 VAR_26 = FUNC_0(((VAR_5 - VAR_7) * VAR_24 - (VAR_6 - VAR_8) * VAR_23));

 if ((VAR_25 + VAR_26)*(VAR_25 + VAR_26) < VAR_0->tessTol * (VAR_23*VAR_23 + VAR_24*VAR_24)) {
  FUNC_1(VAR_0, VAR_7, VAR_8, VAR_10);
  return;
 }






 VAR_19 = (VAR_13+VAR_15)*0.5f;
 VAR_20 = (VAR_14+VAR_16)*0.5f;
 VAR_21 = (VAR_17+VAR_19)*0.5f;
 VAR_22 = (VAR_18+VAR_20)*0.5f;

 FUNC_2(VAR_0, VAR_1,VAR_2, VAR_11,VAR_12, VAR_17,VAR_18, VAR_21,VAR_22, VAR_9+1, 0);
 FUNC_2(VAR_0, VAR_21,VAR_22, VAR_19,VAR_20, VAR_15,VAR_16, VAR_7,VAR_8, VAR_9+1, VAR_10);
}

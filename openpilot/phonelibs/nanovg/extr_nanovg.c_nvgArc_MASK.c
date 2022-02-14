
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ncommands; } ;
typedef TYPE_1__ NVGcontext ;


 float VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (float) ;
 int FUNC_1 (TYPE_1__*,float*,int) ;
 float FUNC_2 (float) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;
 float FUNC_5 (float) ;

void FUNC_6(NVGcontext* VAR_6, float VAR_7, float VAR_8, float VAR_9, float VAR_10, float VAR_11, int VAR_12)
{
 float VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
 float VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 float VAR_23 = 0, VAR_24 = 0, VAR_25 = 0, VAR_26 = 0;
 float VAR_27[3 + 5*7 + 100];
 int VAR_28, VAR_29, VAR_30;
 int VAR_31 = VAR_6->ncommands > 0 ? VAR_3 : VAR_4;


 VAR_14 = VAR_11 - VAR_10;
 if (VAR_12 == VAR_2) {
  if (FUNC_0(VAR_14) >= VAR_5*2) {
   VAR_14 = VAR_5*2;
  } else {
   while (VAR_14 < 0.0f) VAR_14 += VAR_5*2;
  }
 } else {
  if (FUNC_0(VAR_14) >= VAR_5*2) {
   VAR_14 = -VAR_5*2;
  } else {
   while (VAR_14 > 0.0f) VAR_14 -= VAR_5*2;
  }
 }


 VAR_29 = FUNC_3(1, FUNC_4((int)(FUNC_0(VAR_14) / (VAR_5*0.5f) + 0.5f), 5));
 VAR_15 = (VAR_14 / (float)VAR_29) / 2.0f;
 VAR_16 = FUNC_0(4.0f / 3.0f * (1.0f - FUNC_2(VAR_15)) / FUNC_5(VAR_15));

 if (VAR_12 == VAR_1)
  VAR_16 = -VAR_16;

 VAR_30 = 0;
 for (VAR_28 = 0; VAR_28 <= VAR_29; VAR_28++) {
  VAR_13 = VAR_10 + VAR_14 * (VAR_28/(float)VAR_29);
  VAR_17 = FUNC_2(VAR_13);
  VAR_18 = FUNC_5(VAR_13);
  VAR_19 = VAR_7 + VAR_17*VAR_9;
  VAR_20 = VAR_8 + VAR_18*VAR_9;
  VAR_21 = -VAR_18*VAR_9*VAR_16;
  VAR_22 = VAR_17*VAR_9*VAR_16;

  if (VAR_28 == 0) {
   VAR_27[VAR_30++] = (float)VAR_31;
   VAR_27[VAR_30++] = VAR_19;
   VAR_27[VAR_30++] = VAR_20;
  } else {
   VAR_27[VAR_30++] = VAR_0;
   VAR_27[VAR_30++] = VAR_23+VAR_25;
   VAR_27[VAR_30++] = VAR_24+VAR_26;
   VAR_27[VAR_30++] = VAR_19-VAR_21;
   VAR_27[VAR_30++] = VAR_20-VAR_22;
   VAR_27[VAR_30++] = VAR_19;
   VAR_27[VAR_30++] = VAR_20;
  }
  VAR_23 = VAR_19;
  VAR_24 = VAR_20;
  VAR_25 = VAR_21;
  VAR_26 = VAR_22;
 }

 FUNC_1(VAR_6, VAR_27, VAR_30);
}

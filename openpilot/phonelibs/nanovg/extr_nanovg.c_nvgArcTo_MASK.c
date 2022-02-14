
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float commandx; float commandy; scalar_t__ ncommands; int distTol; } ;
typedef TYPE_1__ NVGcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,float,float,float,float,float,int) ;
 int FUNC_1 (TYPE_1__*,float,float) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float,float) ;
 float FUNC_4 (float,float,float,float) ;
 int FUNC_5 (float,float,float,float,float,float) ;
 int FUNC_6 (float*,float*) ;
 scalar_t__ FUNC_7 (float,float,float,float,int) ;
 float FUNC_8 (float) ;

void FUNC_9(NVGcontext* VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7)
{
 float VAR_8 = VAR_2->commandx;
 float VAR_9 = VAR_2->commandy;
 float VAR_10,VAR_11, VAR_12,VAR_13, VAR_14, VAR_15, VAR_16,VAR_17, VAR_18,VAR_19;
 int VAR_20;

 if (VAR_2->ncommands == 0) {
  return;
 }


 if (FUNC_7(VAR_8,VAR_9, VAR_3,VAR_4, VAR_2->distTol) ||
  FUNC_7(VAR_3,VAR_4, VAR_5,VAR_6, VAR_2->distTol) ||
  FUNC_5(VAR_3,VAR_4, VAR_8,VAR_9, VAR_5,VAR_6) < VAR_2->distTol*VAR_2->distTol ||
  VAR_7 < VAR_2->distTol) {
  FUNC_1(VAR_2, VAR_3,VAR_4);
  return;
 }


 VAR_10 = VAR_8-VAR_3;
 VAR_11 = VAR_9-VAR_4;
 VAR_12 = VAR_5-VAR_3;
 VAR_13 = VAR_6-VAR_4;
 FUNC_6(&VAR_10,&VAR_11);
 FUNC_6(&VAR_12,&VAR_13);
 VAR_14 = FUNC_2(VAR_10*VAR_12 + VAR_11*VAR_13);
 VAR_15 = VAR_7 / FUNC_8(VAR_14/2.0f);



 if (VAR_15 > 10000.0f) {
  FUNC_1(VAR_2, VAR_3,VAR_4);
  return;
 }

 if (FUNC_4(VAR_10,VAR_11, VAR_12,VAR_13) > 0.0f) {
  VAR_16 = VAR_3 + VAR_10*VAR_15 + VAR_11*VAR_7;
  VAR_17 = VAR_4 + VAR_11*VAR_15 + -VAR_10*VAR_7;
  VAR_18 = FUNC_3(VAR_10, -VAR_11);
  VAR_19 = FUNC_3(-VAR_12, VAR_13);
  VAR_20 = VAR_1;

 } else {
  VAR_16 = VAR_3 + VAR_10*VAR_15 + -VAR_11*VAR_7;
  VAR_17 = VAR_4 + VAR_11*VAR_15 + VAR_10*VAR_7;
  VAR_18 = FUNC_3(-VAR_10, VAR_11);
  VAR_19 = FUNC_3(VAR_12, -VAR_13);
  VAR_20 = VAR_0;

 }

 FUNC_0(VAR_2, VAR_16, VAR_17, VAR_7, VAR_18, VAR_19, VAR_20);
}

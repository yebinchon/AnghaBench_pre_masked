
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_11__ {int sx; int transparent; scalar_t__ trueColor; } ;
typedef int (* FuncPtr ) (gdImagePtr,int,int) ;


 double FUNC_0 (TYPE_1__*,int) ;
 double FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int,int,int) ;
 int FUNC_4 (gdImagePtr,int,int) ;
 int FUNC_5 (gdImagePtr,int,int) ;
 double FUNC_6 (TYPE_1__*,int) ;
 double FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int,int,int) ;
 int FUNC_9 (int,int,int,int) ;

void FUNC_10 (gdImagePtr VAR_0, gdImagePtr VAR_1, int VAR_2, int VAR_3, double VAR_4, int VAR_5, int VAR_6)
{
 typedef int (*FuncPtr)(gdImagePtr, int, int);
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 FuncPtr VAR_16;

 int VAR_17, VAR_18=0, VAR_19;


 if (VAR_1->trueColor) {
  VAR_17 = VAR_5;
  VAR_16 = FUNC_5;
 } else {
  VAR_17 = VAR_5;
  VAR_12 = FUNC_7(VAR_1, VAR_5);
  VAR_13 = FUNC_6(VAR_1, VAR_5);
  VAR_14 = FUNC_1(VAR_1, VAR_5);
  VAR_15 = FUNC_0(VAR_1, VAR_5);
  VAR_5 = FUNC_9(VAR_12, VAR_13, VAR_14, VAR_15);
  VAR_16 = FUNC_4;
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  FUNC_8 (VAR_0, VAR_7, VAR_2, VAR_5);
 }

 if (VAR_7 < VAR_0->sx) {
  FUNC_8 (VAR_0, VAR_7, VAR_2, VAR_5);
 }

 for (VAR_7 = 0; VAR_7 < VAR_1->sx; VAR_7++) {
  VAR_19 = VAR_16 (VAR_1,VAR_7,VAR_2);

  VAR_8 = (int)(FUNC_7(VAR_1,VAR_19) * VAR_4);
  VAR_9 = (int)(FUNC_6(VAR_1,VAR_19) * VAR_4);
  VAR_10 = (int)(FUNC_1(VAR_1,VAR_19) * VAR_4);
  VAR_11 = (int)(FUNC_0(VAR_1,VAR_19) * VAR_4);

  VAR_18 = FUNC_2(VAR_1, VAR_8, VAR_9, VAR_10, VAR_11);

  if (VAR_18 == -1) {
   VAR_18 = FUNC_3(VAR_1, VAR_8, VAR_9, VAR_10, VAR_11);
  }

  VAR_8 = FUNC_7(VAR_1,VAR_19) - (FUNC_7(VAR_1,VAR_18) - FUNC_7(VAR_1,VAR_17));
  VAR_9 = FUNC_6(VAR_1,VAR_19) - (FUNC_6(VAR_1,VAR_18) - FUNC_6(VAR_1,VAR_17));
  VAR_10 = FUNC_1(VAR_1,VAR_19) - (FUNC_1(VAR_1,VAR_18) - FUNC_1(VAR_1,VAR_17));
  VAR_11 = FUNC_0(VAR_1,VAR_19) - (FUNC_0(VAR_1,VAR_18) - FUNC_0(VAR_1,VAR_17));

        if (VAR_8>255) {
         VAR_8 = 255;
        }

  if (VAR_9>255) {
   VAR_9 = 255;
  }

  if (VAR_10>255) {
   VAR_10 = 255;
  }

  if (VAR_11>127) {
   VAR_11 = 127;
  }

  if (VAR_6 && VAR_19 == VAR_0->transparent) {
   VAR_19 = VAR_0->transparent;
  } else {
   VAR_19 = FUNC_2(VAR_0, VAR_8, VAR_9, VAR_10, VAR_11);

   if (VAR_19 == -1) {
    VAR_19 = FUNC_3(VAR_0, VAR_8, VAR_9, VAR_10, VAR_11);
   }
  }

  if ((VAR_7 + VAR_3 >= 0) && (VAR_7 + VAR_3 < VAR_0->sx)) {
   FUNC_8 (VAR_0, VAR_7+VAR_3, VAR_2, VAR_19);
  }

  VAR_17 = VAR_18;
 }

 VAR_7 += VAR_3;

 if (VAR_7 < VAR_0->sx) {
  FUNC_8 (VAR_0, VAR_7, VAR_2, VAR_18);
 }

 FUNC_8 (VAR_0, VAR_3, VAR_2, VAR_5);

 VAR_7--;

 while (++VAR_7 < VAR_0->sx) {
  FUNC_8 (VAR_0, VAR_7, VAR_2, VAR_5);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_11__ {int sy; int transparent; scalar_t__ trueColor; } ;
typedef int (* FuncPtr ) (gdImagePtr,int,int) ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int,int,int) ;
 int FUNC_4 (gdImagePtr,int,int) ;
 int FUNC_5 (gdImagePtr,int,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int,int,int) ;

void FUNC_9 (gdImagePtr VAR_0, gdImagePtr VAR_1, int VAR_2, int VAR_3, double VAR_4, int VAR_5, int VAR_6)
{
 typedef int (*FuncPtr)(gdImagePtr, int, int);
 int VAR_7, VAR_8=0, VAR_9, VAR_10, VAR_11, VAR_12;
 FuncPtr VAR_13;
 int VAR_14, VAR_15=0, VAR_16;

 if (VAR_1->trueColor) {
  VAR_13 = FUNC_5;
 } else {
  VAR_13 = FUNC_4;
 }

 for (VAR_7 = 0; VAR_7<=VAR_3; VAR_7++) {
  FUNC_8 (VAR_0, VAR_2, VAR_7, VAR_5);
 }
 VAR_9 = (int)((double)FUNC_7(VAR_1,VAR_5) * VAR_4);
 VAR_10 = (int)((double)FUNC_6(VAR_1,VAR_5) * VAR_4);
 VAR_11 = (int)((double)FUNC_1(VAR_1,VAR_5) * VAR_4);
 VAR_12 = (int)((double)FUNC_0(VAR_1,VAR_5) * VAR_4);

 VAR_14 = FUNC_2(VAR_0, VAR_9, VAR_10, VAR_11, VAR_12);

 for (VAR_7 = 0; VAR_7 < VAR_1->sy; VAR_7++) {
  VAR_16 = VAR_13 (VAR_1, VAR_2, VAR_7);
  VAR_8 = VAR_7 + VAR_3;

  VAR_9 = (int)((double)FUNC_7(VAR_1,VAR_16) * VAR_4);
  VAR_10 = (int)((double)FUNC_6(VAR_1,VAR_16) * VAR_4);
  VAR_11 = (int)((double)FUNC_1(VAR_1,VAR_16) * VAR_4);
  VAR_12 = (int)((double)FUNC_0(VAR_1,VAR_16) * VAR_4);

  VAR_15 = FUNC_2(VAR_1, VAR_9, VAR_10, VAR_11, VAR_12);

  if (VAR_15 == -1) {
   VAR_15 = FUNC_3(VAR_1, VAR_9, VAR_10, VAR_11, VAR_12);
  }

  VAR_9 = FUNC_7(VAR_1,VAR_16) - (FUNC_7(VAR_1,VAR_15) - FUNC_7(VAR_1,VAR_14));
  VAR_10 = FUNC_6(VAR_1,VAR_16) - (FUNC_6(VAR_1,VAR_15) - FUNC_6(VAR_1,VAR_14));
  VAR_11 = FUNC_1(VAR_1,VAR_16) - (FUNC_1(VAR_1,VAR_15) - FUNC_1(VAR_1,VAR_14));
  VAR_12 = FUNC_0(VAR_1,VAR_16) - (FUNC_0(VAR_1,VAR_15) - FUNC_0(VAR_1,VAR_14));

  if (VAR_9>255) {
          VAR_9 = 255;
  }

  if (VAR_10>255) {
   VAR_10 = 255;
  }

  if (VAR_11>255) {
       VAR_11 = 255;
  }

  if (VAR_12>127) {
   VAR_12 = 127;
  }

  if (VAR_6 && VAR_16 == VAR_0->transparent) {
   VAR_16 = VAR_0->transparent;
  } else {
   VAR_16 = FUNC_2(VAR_0, VAR_9, VAR_10, VAR_11, VAR_12);

   if (VAR_16 == -1) {
    VAR_16 = FUNC_3(VAR_0, VAR_9, VAR_10, VAR_11, VAR_12);
   }
  }

  if ((VAR_8 >= 0) && (VAR_8 < VAR_0->sy)) {
   FUNC_8 (VAR_0, VAR_2, VAR_8, VAR_16);
  }

  VAR_14 = VAR_15;
 }

 VAR_7 = VAR_8;
 if (VAR_7 < VAR_0->sy) {
  FUNC_8 (VAR_0, VAR_2, VAR_7, VAR_15);
 }

 VAR_7--;
 while (++VAR_7 < VAR_0->sy) {
  FUNC_8 (VAR_0, VAR_2, VAR_7, VAR_5);
 }
}

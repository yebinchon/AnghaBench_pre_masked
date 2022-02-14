
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_8__ {int trueColor; } ;


 double FUNC_0 (double) ;
 double FUNC_1 (double) ;
 double VAR_0 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int,int,int,int,int,int,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int,int ) ;
 int FUNC_5 (int,int,int,int) ;
 double FUNC_6 (int) ;
 double FUNC_7 (int) ;
 double FUNC_8 (int) ;
 double FUNC_9 (int) ;

void FUNC_10 (gdImagePtr VAR_1, gdImagePtr VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;
 double VAR_13, VAR_14, VAR_15, VAR_16;

 if (!VAR_1->trueColor) {
  FUNC_2 (VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
  return;
 }
 for (VAR_12 = VAR_4; (VAR_12 < VAR_4 + VAR_8); VAR_12++) {
  VAR_13 = ((double) VAR_12 - (double) VAR_4) * (double) VAR_10 / (double) VAR_8;
  VAR_14 = ((double) (VAR_12 + 1) - (double) VAR_4) * (double) VAR_10 / (double) VAR_8;
  for (VAR_11 = VAR_3; (VAR_11 < VAR_3 + VAR_7); VAR_11++) {
   double VAR_17, VAR_18;
   double VAR_19 = 0;
   double VAR_20 = 0.0, VAR_21 = 0.0, VAR_22 = 0.0, VAR_23 = 0.0;
   double VAR_24, VAR_25 = 0.0, VAR_26 = 0.0;
   VAR_15 = ((double) VAR_11 - (double) VAR_3) * (double) VAR_9 / VAR_7;
   VAR_16 = ((double) (VAR_11 + 1) - (double) VAR_3) * (double) VAR_9 / VAR_7;
   VAR_18 = VAR_13;
   do {
    double VAR_27;
    if (FUNC_0(VAR_18) == FUNC_0(VAR_13)) {
     VAR_27 = 1.0f - (VAR_18 - FUNC_0(VAR_18));
     if (VAR_27 > VAR_14 - VAR_13) {
      VAR_27 = VAR_14 - VAR_13;
     }
     VAR_18 = FUNC_0(VAR_18);
    } else if (VAR_18 == FUNC_1(VAR_14)) {
     VAR_27 = VAR_14 - FUNC_0(VAR_14);
    } else {
     VAR_27 = 1.0f;
    }
    VAR_17 = VAR_15;
    do {
     double VAR_28;
     double VAR_29;
     int VAR_30;
     if (FUNC_1(VAR_17) == FUNC_0(VAR_15)) {
      VAR_28 = 1.0f - (VAR_17 - FUNC_0(VAR_17));
      if (VAR_28 > VAR_16 - VAR_15) {
       VAR_28 = VAR_16 - VAR_15;
      }
      VAR_17 = FUNC_0(VAR_17);
     } else if (VAR_17 == FUNC_1(VAR_16)) {
      VAR_28 = VAR_16 - FUNC_0(VAR_16);
     } else {
      VAR_28 = 1.0f;
     }
     VAR_29 = VAR_28 * VAR_27;
     VAR_30 = FUNC_3(VAR_2, (int) VAR_17 + VAR_5, (int) VAR_18 + VAR_6);

     VAR_24 = ((VAR_0 - FUNC_6(VAR_30))) * VAR_29;
     VAR_20 += FUNC_9 (VAR_30) * VAR_24;
     VAR_21 += FUNC_8 (VAR_30) * VAR_24;
     VAR_22 += FUNC_7 (VAR_30) * VAR_24;
     VAR_23 += FUNC_6 (VAR_30) * VAR_29;
     VAR_25 += VAR_24;
     VAR_26 += VAR_29;
     VAR_19 += VAR_28 * VAR_27;
     VAR_17 += 1.0f;
    }
    while (VAR_17 < VAR_16);

    VAR_18 += 1.0f;
   }

   while (VAR_18 < VAR_14);

   if (VAR_19 != 0.0f) {
    VAR_20 /= VAR_19;
    VAR_21 /= VAR_19;
    VAR_22 /= VAR_19;
    VAR_23 /= VAR_19;
    VAR_23 += 0.5;
   }
   if ( VAR_25 != 0.0f) {
    if( VAR_26 != 0.0f) {
     VAR_25 /= VAR_26;
    }
    VAR_20 /= VAR_25;
    VAR_21 /= VAR_25;
    VAR_22 /= VAR_25;
   }

   if (VAR_20 > 255.0f) {
    VAR_20 = 255.0f;
   }
   if (VAR_21 > 255.0f) {
    VAR_21 = 255.0f;
   }
   if (VAR_22 > 255.0f) {
    VAR_22 = 255.0f;
   }
   if (VAR_23 > VAR_0) {
    VAR_23 = VAR_0;
   }
   FUNC_4(VAR_1, VAR_11, VAR_12, FUNC_5 ((int) VAR_20, (int) VAR_21, (int) VAR_22, (int) VAR_23));
  }
 }
}

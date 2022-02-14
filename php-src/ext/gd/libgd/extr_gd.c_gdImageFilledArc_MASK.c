
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; } ;
typedef TYPE_1__ gdPoint ;
typedef int gdImagePtr ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*,int,int) ;
 int FUNC_1 (int ,int,int,int,int,int) ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;

void FUNC_2 (gdImagePtr VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 gdPoint VAR_14[363];
 int VAR_15, VAR_16;
 int VAR_17 = 0, VAR_18 = 0;
 int VAR_19 = 0, VAR_20 = 0;
 int VAR_21 = -1, VAR_22 = -1, VAR_23 = -1, VAR_24 = -1;

    if ((VAR_10 % 360) == (VAR_11 % 360)) {
  VAR_10 = 0; VAR_11 = 360;
 } else {
  if (VAR_10 > 360) {
   VAR_10 = VAR_10 % 360;
  }

  if (VAR_11 > 360) {
   VAR_11 = VAR_11 % 360;
  }

  while (VAR_10 < 0) {
   VAR_10 += 360;
  }

  while (VAR_11 < VAR_10) {
   VAR_11 += 360;
  }
  if (VAR_10 == VAR_11) {
   VAR_10 = 0; VAR_11 = 360;
  }
 }

 for (VAR_15 = VAR_10, VAR_16 = 1; VAR_15 <= VAR_11; VAR_15++, VAR_16++) {
  int VAR_25, VAR_26;
  VAR_25 = VAR_23 = ((long) VAR_1[VAR_15 % 360] * (long) VAR_8 / (2 * 1024)) + VAR_6;
  VAR_26 = VAR_24 = ((long) VAR_4[VAR_15 % 360] * (long) VAR_9 / (2 * 1024)) + VAR_7;
  if (VAR_15 != VAR_10) {
   if (!(VAR_13 & VAR_0)) {
    if (VAR_13 & VAR_3) {
     FUNC_1(VAR_5, VAR_17, VAR_18, VAR_25, VAR_26, VAR_12);
    } else {
     if (VAR_26 == VAR_18) {
      VAR_16--;
      if (((VAR_15 > 270 || VAR_15 < 90) && VAR_25 > VAR_17) || ((VAR_15 > 90 && VAR_15 < 270) && VAR_25 < VAR_17)) {


       VAR_14[VAR_16].x = VAR_25;
      }
     } else {
      VAR_14[VAR_16].x = VAR_25;
      VAR_14[VAR_16].y = VAR_26;
     }
      }
   }
  } else {
   VAR_19 = VAR_25;
   VAR_20 = VAR_26;
   if (!(VAR_13 & (VAR_0 | VAR_3))) {
    VAR_14[0].x = VAR_6;
    VAR_14[0].y = VAR_7;
    VAR_14[VAR_16].x = VAR_21 = VAR_25;
    VAR_14[VAR_16].y = VAR_22 = VAR_26;
   }
  }
  VAR_17 = VAR_25;
  VAR_18 = VAR_26;
 }
 if (VAR_13 & VAR_0) {
  if (VAR_13 & VAR_3) {
   if (VAR_13 & VAR_2) {
    FUNC_1(VAR_5, VAR_6, VAR_7, VAR_17, VAR_18, VAR_12);
    FUNC_1(VAR_5, VAR_6, VAR_7, VAR_19, VAR_20, VAR_12);
   }
   FUNC_1(VAR_5, VAR_19, VAR_20, VAR_17, VAR_18, VAR_12);
  } else {
   VAR_14[0].x = VAR_19;
   VAR_14[0].y = VAR_20;
   VAR_14[1].x = VAR_17;
   VAR_14[1].y = VAR_18;
   VAR_14[2].x = VAR_6;
   VAR_14[2].y = VAR_7;
   FUNC_0(VAR_5, VAR_14, 3, VAR_12);
  }
 } else {
  if (VAR_13 & VAR_3) {
   if (VAR_13 & VAR_2) {
    FUNC_1(VAR_5, VAR_6, VAR_7, VAR_17, VAR_18, VAR_12);
    FUNC_1(VAR_5, VAR_6, VAR_7, VAR_19, VAR_20, VAR_12);
   }
  } else {
   if (VAR_11 - VAR_10 < 360) {
    if (VAR_14[1].x != VAR_21 && VAR_14[1].y == VAR_22) {

     for (VAR_15 = VAR_16; VAR_15 > 1; VAR_15--) {
      VAR_14[VAR_15].x = VAR_14[VAR_15-1].x;
      VAR_14[VAR_15].y = VAR_14[VAR_15-1].y;
     }
     VAR_14[1].x = VAR_21;
     VAR_14[1].y = VAR_22;
     VAR_16++;
    }
    if (VAR_14[VAR_16-1].x != VAR_23 && VAR_14[VAR_16-1].y == VAR_24) {

     VAR_14[VAR_16].x = VAR_23;
     VAR_14[VAR_16].y = VAR_24;
     VAR_16++;
    }
   }
   VAR_14[VAR_16].x = VAR_6;
   VAR_14[VAR_16].y = VAR_7;
   FUNC_0(VAR_5, VAR_14, VAR_16+1, VAR_12);
  }
 }
}

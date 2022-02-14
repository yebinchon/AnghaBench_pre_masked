
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_4__ {int thick; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int,int*,int*,int,int) ;
 double FUNC_3 (int ) ;

void FUNC_4 (gdImagePtr VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17 = 0;
 int VAR_18 = 1;
 int VAR_19;
 int VAR_20;
 int VAR_21 = VAR_0->thick;

 VAR_6 = FUNC_0(VAR_3 - VAR_1);
 VAR_7 = FUNC_0(VAR_4 - VAR_2);
 if (VAR_7 <= VAR_6) {



  double VAR_22 = FUNC_3(FUNC_1(VAR_7, VAR_6));
  if (VAR_22 != 0) {
   VAR_19 = VAR_21 / VAR_22;
  } else {
   VAR_19 = 1;
  }
  VAR_20 = 1;

  VAR_10 = 2 * VAR_7 - VAR_6;
  VAR_8 = 2 * VAR_7;
  VAR_9 = 2 * (VAR_7 - VAR_6);
  if (VAR_1 > VAR_3) {
   VAR_11 = VAR_3;
   VAR_12 = VAR_4;
   VAR_16 = (-1);
   VAR_13 = VAR_1;
  } else {
   VAR_11 = VAR_1;
   VAR_12 = VAR_2;
   VAR_16 = 1;
   VAR_13 = VAR_3;
  }
  FUNC_2(VAR_0, VAR_11, VAR_12, VAR_5, &VAR_18, &VAR_17, VAR_19, VAR_20);
  if (((VAR_4 - VAR_2) * VAR_16) > 0) {
   while (VAR_11 < VAR_13) {
    VAR_11++;
    if (VAR_10 < 0) {
     VAR_10 += VAR_8;
    } else {
     VAR_12++;
     VAR_10 += VAR_9;
    }
    FUNC_2(VAR_0, VAR_11, VAR_12, VAR_5, &VAR_18, &VAR_17, VAR_19, VAR_20);
   }
  } else {
   while (VAR_11 < VAR_13) {
    VAR_11++;
    if (VAR_10 < 0) {
     VAR_10 += VAR_8;
    } else {
     VAR_12--;
     VAR_10 += VAR_9;
    }
    FUNC_2(VAR_0, VAR_11, VAR_12, VAR_5, &VAR_18, &VAR_17, VAR_19, VAR_20);
   }
  }
 } else {


  double VAR_23 = FUNC_3 (FUNC_1 (VAR_7, VAR_6));
  if (VAR_23 != 0) {
   VAR_19 = VAR_21 / VAR_23;
  } else {
   VAR_19 = 1;
  }
  VAR_20 = 0;

  VAR_10 = 2 * VAR_6 - VAR_7;
  VAR_8 = 2 * VAR_6;
  VAR_9 = 2 * (VAR_6 - VAR_7);
  if (VAR_2 > VAR_4) {
   VAR_12 = VAR_4;
   VAR_11 = VAR_3;
   VAR_14 = VAR_2;
   VAR_15 = (-1);
  } else {
   VAR_12 = VAR_2;
   VAR_11 = VAR_1;
   VAR_14 = VAR_4;
   VAR_15 = 1;
  }
  FUNC_2(VAR_0, VAR_11, VAR_12, VAR_5, &VAR_18, &VAR_17, VAR_19, VAR_20);
  if (((VAR_3 - VAR_1) * VAR_15) > 0) {
   while (VAR_12 < VAR_14) {
    VAR_12++;
    if (VAR_10 < 0) {
     VAR_10 += VAR_8;
    } else {
     VAR_11++;
     VAR_10 += VAR_9;
    }
    FUNC_2(VAR_0, VAR_11, VAR_12, VAR_5, &VAR_18, &VAR_17, VAR_19, VAR_20);
   }
  } else {
   while (VAR_12 < VAR_14) {
    VAR_12++;
    if (VAR_10 < 0) {
     VAR_10 += VAR_8;
    } else {
     VAR_11--;
     VAR_10 += VAR_9;
    }
    FUNC_2(VAR_0, VAR_11, VAR_12, VAR_5, &VAR_18, &VAR_17, VAR_19, VAR_20);
   }
  }
 }
}

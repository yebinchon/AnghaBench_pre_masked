
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_9__ {int thick; int AA_color; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*,int*,int*,int*,scalar_t__) ;
 double FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*,int,int,int,int,int ) ;
 int FUNC_5 (TYPE_1__*,int,int,int,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int,int,int) ;
 int FUNC_9 (TYPE_1__*,int,int,int,int) ;
 double FUNC_10 (int ) ;

void FUNC_11 (gdImagePtr VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;
 int VAR_19, VAR_20;
 int VAR_21 = VAR_1->thick;

 if (VAR_6 == VAR_0) {





  FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_1->AA_color);
  return;
 }


 if (!FUNC_2(&VAR_2,&VAR_3,&VAR_4,&VAR_5,FUNC_6(VAR_1)-1) || !FUNC_2(&VAR_3,&VAR_2,&VAR_5,&VAR_4,FUNC_7(VAR_1)-1)) {
  return;
 }

 VAR_7 = FUNC_0 (VAR_4 - VAR_2);
 VAR_8 = FUNC_0 (VAR_5 - VAR_3);

 if (VAR_7 == 0) {
  FUNC_9(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
  return;
 } else if (VAR_8 == 0) {
  FUNC_5(VAR_1, VAR_3, VAR_2, VAR_4, VAR_6);
  return;
 }

 if (VAR_8 <= VAR_7) {


  if ((VAR_7 == 0) && (VAR_8 == 0)) {
   VAR_18 = 1;
  } else {


   double VAR_22 = FUNC_3 (FUNC_1 (VAR_8, VAR_7));
   if (VAR_22 != 0) {
    VAR_18 = VAR_21 / VAR_22;
   } else {
    VAR_18 = 1;
   }
   if (VAR_18 == 0) {
    VAR_18 = 1;
   }
  }
  VAR_11 = 2 * VAR_8 - VAR_7;
  VAR_9 = 2 * VAR_8;
  VAR_10 = 2 * (VAR_8 - VAR_7);
  if (VAR_2 > VAR_4) {
   VAR_12 = VAR_4;
   VAR_13 = VAR_5;
   VAR_17 = (-1);
   VAR_14 = VAR_2;
  } else {
   VAR_12 = VAR_2;
   VAR_13 = VAR_3;
   VAR_17 = 1;
   VAR_14 = VAR_4;
  }


  VAR_20 = VAR_13 - VAR_18 / 2;
  for (VAR_19 = VAR_20; VAR_19 < VAR_20 + VAR_18; VAR_19++) {
   FUNC_8(VAR_1, VAR_12, VAR_19, VAR_6);
  }

  if (((VAR_5 - VAR_3) * VAR_17) > 0) {
   while (VAR_12 < VAR_14) {
    VAR_12++;
    if (VAR_11 < 0) {
     VAR_11 += VAR_9;
    } else {
     VAR_13++;
     VAR_11 += VAR_10;
    }
    VAR_20 = VAR_13 - VAR_18 / 2;
    for (VAR_19 = VAR_20; VAR_19 < VAR_20 + VAR_18; VAR_19++) {
     FUNC_8 (VAR_1, VAR_12, VAR_19, VAR_6);
    }
   }
  } else {
   while (VAR_12 < VAR_14) {
    VAR_12++;
    if (VAR_11 < 0) {
     VAR_11 += VAR_9;
    } else {
     VAR_13--;
     VAR_11 += VAR_10;
    }
    VAR_20 = VAR_13 - VAR_18 / 2;
    for (VAR_19 = VAR_20; VAR_19 < VAR_20 + VAR_18; VAR_19++) {
     FUNC_8 (VAR_1, VAR_12, VAR_19, VAR_6);
    }
   }
  }
 } else {



  double VAR_23 = FUNC_10 (FUNC_1 (VAR_8, VAR_7));
  if (VAR_23 != 0) {
   VAR_18 = VAR_21 / VAR_23;
  } else {
   VAR_18 = 1;
  }
  if (VAR_18 == 0) {
   VAR_18 = 1;
  }

  VAR_11 = 2 * VAR_7 - VAR_8;
  VAR_9 = 2 * VAR_7;
  VAR_10 = 2 * (VAR_7 - VAR_8);
  if (VAR_3 > VAR_5) {
   VAR_13 = VAR_5;
   VAR_12 = VAR_4;
   VAR_15 = VAR_3;
   VAR_16 = (-1);
  } else {
   VAR_13 = VAR_3;
   VAR_12 = VAR_2;
   VAR_15 = VAR_5;
   VAR_16 = 1;
  }


  VAR_20 = VAR_12 - VAR_18 / 2;
  for (VAR_19 = VAR_20; VAR_19 < VAR_20 + VAR_18; VAR_19++) {
   FUNC_8 (VAR_1, VAR_19, VAR_13, VAR_6);
  }

  if (((VAR_4 - VAR_2) * VAR_16) > 0) {
   while (VAR_13 < VAR_15) {
    VAR_13++;
    if (VAR_11 < 0) {
     VAR_11 += VAR_9;
    } else {
     VAR_12++;
     VAR_11 += VAR_10;
    }
    VAR_20 = VAR_12 - VAR_18 / 2;
    for (VAR_19 = VAR_20; VAR_19 < VAR_20 + VAR_18; VAR_19++) {
     FUNC_8 (VAR_1, VAR_19, VAR_13, VAR_6);
    }
   }
  } else {
   while (VAR_13 < VAR_15) {
    VAR_13++;
    if (VAR_11 < 0) {
     VAR_11 += VAR_9;
    } else {
     VAR_12--;
     VAR_11 += VAR_10;
    }
    VAR_20 = VAR_12 - VAR_18 / 2;
    for (VAR_19 = VAR_20; VAR_19 < VAR_20 + VAR_18; VAR_19++) {
     FUNC_8 (VAR_1, VAR_19, VAR_13, VAR_6);
    }
   }
  }
 }
}

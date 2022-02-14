
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int integer ;
struct TYPE_3__ {int i; int r; } ;
typedef TYPE_1__ doublecomplex ;



int FUNC_0(integer *VAR_0, doublecomplex *VAR_1, integer *VAR_2,
 integer *VAR_3, integer *VAR_4, integer *VAR_5, integer *VAR_6)
{

    integer VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;


    static integer VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    static doublecomplex VAR_25;
    VAR_7 = *VAR_2;
    VAR_8 = 1 + VAR_7;
    VAR_1 -= VAR_8;
    --VAR_5;


    if (*VAR_6 > 0) {
 VAR_23 = *VAR_3;
 VAR_18 = *VAR_3;
 VAR_19 = *VAR_4;
 VAR_24 = 1;
    } else if (*VAR_6 < 0) {
 VAR_23 = (1 - *VAR_4) * *VAR_6 + 1;
 VAR_18 = *VAR_4;
 VAR_19 = *VAR_3;
 VAR_24 = -1;
    } else {
 return 0;
    }

    VAR_20 = *VAR_0 / 32 << 5;
    if (VAR_20 != 0) {
 VAR_9 = VAR_20;
 for (VAR_16 = 1; VAR_16 <= VAR_9; VAR_16 += 32) {
     VAR_22 = VAR_23;
     VAR_10 = VAR_19;
     VAR_11 = VAR_24;
     for (VAR_15 = VAR_18; VAR_11 < 0 ? VAR_15 >= VAR_10 : VAR_15 <= VAR_10; VAR_15 += VAR_11)
      {
  VAR_21 = VAR_5[VAR_22];
  if (VAR_21 != VAR_15) {
      VAR_12 = VAR_16 + 31;
      for (VAR_17 = VAR_16; VAR_17 <= VAR_12; ++VAR_17) {
   VAR_13 = VAR_15 + VAR_17 * VAR_7;
   VAR_25.r = VAR_1[VAR_13].r, VAR_25.i = VAR_1[VAR_13].i;
   VAR_13 = VAR_15 + VAR_17 * VAR_7;
   VAR_14 = VAR_21 + VAR_17 * VAR_7;
   VAR_1[VAR_13].r = VAR_1[VAR_14].r, VAR_1[VAR_13].i = VAR_1[VAR_14].i;
   VAR_13 = VAR_21 + VAR_17 * VAR_7;
   VAR_1[VAR_13].r = VAR_25.r, VAR_1[VAR_13].i = VAR_25.i;

      }
  }
  VAR_22 += *VAR_6;

     }

 }
    }
    if (VAR_20 != *VAR_0) {
 ++VAR_20;
 VAR_22 = VAR_23;
 VAR_9 = VAR_19;
 VAR_11 = VAR_24;
 for (VAR_15 = VAR_18; VAR_11 < 0 ? VAR_15 >= VAR_9 : VAR_15 <= VAR_9; VAR_15 += VAR_11) {
     VAR_21 = VAR_5[VAR_22];
     if (VAR_21 != VAR_15) {
  VAR_10 = *VAR_0;
  for (VAR_17 = VAR_20; VAR_17 <= VAR_10; ++VAR_17) {
      VAR_12 = VAR_15 + VAR_17 * VAR_7;
      VAR_25.r = VAR_1[VAR_12].r, VAR_25.i = VAR_1[VAR_12].i;
      VAR_12 = VAR_15 + VAR_17 * VAR_7;
      VAR_13 = VAR_21 + VAR_17 * VAR_7;
      VAR_1[VAR_12].r = VAR_1[VAR_13].r, VAR_1[VAR_12].i = VAR_1[VAR_13].i;
      VAR_12 = VAR_21 + VAR_17 * VAR_7;
      VAR_1[VAR_12].r = VAR_25.r, VAR_1[VAR_12].i = VAR_25.i;

  }
     }
     VAR_22 += *VAR_6;

 }
    }

    return 0;



}

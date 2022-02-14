
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int doublereal ;



int FUNC_0(integer *VAR_0, doublereal *VAR_1, integer *VAR_2, integer
 *VAR_3, integer *VAR_4, integer *VAR_5, integer *VAR_6)
{

    integer VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;


    static integer VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    static doublereal VAR_23;
    VAR_7 = *VAR_2;
    VAR_8 = 1 + VAR_7;
    VAR_1 -= VAR_8;
    --VAR_5;


    if (*VAR_6 > 0) {
 VAR_21 = *VAR_3;
 VAR_16 = *VAR_3;
 VAR_17 = *VAR_4;
 VAR_22 = 1;
    } else if (*VAR_6 < 0) {
 VAR_21 = (1 - *VAR_4) * *VAR_6 + 1;
 VAR_16 = *VAR_4;
 VAR_17 = *VAR_3;
 VAR_22 = -1;
    } else {
 return 0;
    }

    VAR_18 = *VAR_0 / 32 << 5;
    if (VAR_18 != 0) {
 VAR_9 = VAR_18;
 for (VAR_14 = 1; VAR_14 <= VAR_9; VAR_14 += 32) {
     VAR_20 = VAR_21;
     VAR_10 = VAR_17;
     VAR_11 = VAR_22;
     for (VAR_13 = VAR_16; VAR_11 < 0 ? VAR_13 >= VAR_10 : VAR_13 <= VAR_10; VAR_13 += VAR_11)
      {
  VAR_19 = VAR_5[VAR_20];
  if (VAR_19 != VAR_13) {
      VAR_12 = VAR_14 + 31;
      for (VAR_15 = VAR_14; VAR_15 <= VAR_12; ++VAR_15) {
   VAR_23 = VAR_1[VAR_13 + VAR_15 * VAR_7];
   VAR_1[VAR_13 + VAR_15 * VAR_7] = VAR_1[VAR_19 + VAR_15 * VAR_7];
   VAR_1[VAR_19 + VAR_15 * VAR_7] = VAR_23;

      }
  }
  VAR_20 += *VAR_6;

     }

 }
    }
    if (VAR_18 != *VAR_0) {
 ++VAR_18;
 VAR_20 = VAR_21;
 VAR_9 = VAR_17;
 VAR_11 = VAR_22;
 for (VAR_13 = VAR_16; VAR_11 < 0 ? VAR_13 >= VAR_9 : VAR_13 <= VAR_9; VAR_13 += VAR_11) {
     VAR_19 = VAR_5[VAR_20];
     if (VAR_19 != VAR_13) {
  VAR_10 = *VAR_0;
  for (VAR_15 = VAR_18; VAR_15 <= VAR_10; ++VAR_15) {
      VAR_23 = VAR_1[VAR_13 + VAR_15 * VAR_7];
      VAR_1[VAR_13 + VAR_15 * VAR_7] = VAR_1[VAR_19 + VAR_15 * VAR_7];
      VAR_1[VAR_19 + VAR_15 * VAR_7] = VAR_23;

  }
     }
     VAR_20 += *VAR_6;

 }
    }

    return 0;



}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef int integer ;


 int FUNC_0 (int,int) ;

int FUNC_1(integer *VAR_0, integer *VAR_1, real *VAR_2, real *VAR_3,
 integer *VAR_4, real *VAR_5, integer *VAR_6, real *VAR_7, integer *VAR_8)
{

    integer VAR_9, VAR_10, VAR_11, VAR_12;


    static integer VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    static real VAR_19;
    extern int FUNC_2(char *, integer *);
    --VAR_3;
    --VAR_5;
    VAR_9 = *VAR_8;
    VAR_10 = 1 + VAR_9;
    VAR_7 -= VAR_10;


    VAR_18 = 0;
    if (*VAR_0 < 0) {
 VAR_18 = 1;
    } else if (*VAR_1 < 0) {
 VAR_18 = 2;
    } else if (*VAR_4 == 0) {
 VAR_18 = 5;
    } else if (*VAR_6 == 0) {
 VAR_18 = 7;
    } else if (*VAR_8 < FUNC_0(1,*VAR_0)) {
 VAR_18 = 9;
    }
    if (VAR_18 != 0) {
 FUNC_2("SGER  ", &VAR_18);
 return 0;
    }



    if (*VAR_0 == 0 || *VAR_1 == 0 || *VAR_2 == 0.f) {
 return 0;
    }






    if (*VAR_6 > 0) {
 VAR_16 = 1;
    } else {
 VAR_16 = 1 - (*VAR_1 - 1) * *VAR_6;
    }
    if (*VAR_4 == 1) {
 VAR_11 = *VAR_1;
 for (VAR_14 = 1; VAR_14 <= VAR_11; ++VAR_14) {
     if (VAR_5[VAR_16] != 0.f) {
  VAR_19 = *VAR_2 * VAR_5[VAR_16];
  VAR_12 = *VAR_0;
  for (VAR_13 = 1; VAR_13 <= VAR_12; ++VAR_13) {
      VAR_7[VAR_13 + VAR_14 * VAR_9] += VAR_3[VAR_13] * VAR_19;

  }
     }
     VAR_16 += *VAR_6;

 }
    } else {
 if (*VAR_4 > 0) {
     VAR_17 = 1;
 } else {
     VAR_17 = 1 - (*VAR_0 - 1) * *VAR_4;
 }
 VAR_11 = *VAR_1;
 for (VAR_14 = 1; VAR_14 <= VAR_11; ++VAR_14) {
     if (VAR_5[VAR_16] != 0.f) {
  VAR_19 = *VAR_2 * VAR_5[VAR_16];
  VAR_15 = VAR_17;
  VAR_12 = *VAR_0;
  for (VAR_13 = 1; VAR_13 <= VAR_12; ++VAR_13) {
      VAR_7[VAR_13 + VAR_14 * VAR_9] += VAR_3[VAR_15] * VAR_19;
      VAR_15 += *VAR_4;

  }
     }
     VAR_16 += *VAR_6;

 }
    }

    return 0;



}

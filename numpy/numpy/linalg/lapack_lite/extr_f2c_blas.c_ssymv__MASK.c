
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef void* logical ;
typedef int integer ;


 int FUNC_0 (int,int) ;

int FUNC_1(char *VAR_0, integer *VAR_1, real *VAR_2, real *VAR_3,
 integer *VAR_4, real *VAR_5, integer *VAR_6, real *VAR_7, real *VAR_8, integer *
 VAR_9)
{

    integer VAR_10, VAR_11, VAR_12, VAR_13;


    static integer VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    static real VAR_23, VAR_24;
    extern logical FUNC_2(char *, char *);
    extern int FUNC_3(char *, integer *);
    VAR_10 = *VAR_4;
    VAR_11 = 1 + VAR_10;
    VAR_3 -= VAR_11;
    --VAR_5;
    --VAR_8;


    VAR_22 = 0;
    if (! FUNC_2(VAR_0, "U") && ! FUNC_2(VAR_0, "L")) {
 VAR_22 = 1;
    } else if (*VAR_1 < 0) {
 VAR_22 = 2;
    } else if (*VAR_4 < FUNC_0(1,*VAR_1)) {
 VAR_22 = 5;
    } else if (*VAR_6 == 0) {
 VAR_22 = 7;
    } else if (*VAR_9 == 0) {
 VAR_22 = 10;
    }
    if (VAR_22 != 0) {
 FUNC_3("SSYMV ", &VAR_22);
 return 0;
    }



    if (*VAR_1 == 0 || *VAR_2 == 0.f && *VAR_7 == 1.f) {
 return 0;
    }



    if (*VAR_6 > 0) {
 VAR_20 = 1;
    } else {
 VAR_20 = 1 - (*VAR_1 - 1) * *VAR_6;
    }
    if (*VAR_9 > 0) {
 VAR_21 = 1;
    } else {
 VAR_21 = 1 - (*VAR_1 - 1) * *VAR_9;
    }
    if (*VAR_7 != 1.f) {
 if (*VAR_9 == 1) {
     if (*VAR_7 == 0.f) {
  VAR_12 = *VAR_1;
  for (VAR_14 = 1; VAR_14 <= VAR_12; ++VAR_14) {
      VAR_8[VAR_14] = 0.f;

  }
     } else {
  VAR_12 = *VAR_1;
  for (VAR_14 = 1; VAR_14 <= VAR_12; ++VAR_14) {
      VAR_8[VAR_14] = *VAR_7 * VAR_8[VAR_14];

  }
     }
 } else {
     VAR_17 = VAR_21;
     if (*VAR_7 == 0.f) {
  VAR_12 = *VAR_1;
  for (VAR_14 = 1; VAR_14 <= VAR_12; ++VAR_14) {
      VAR_8[VAR_17] = 0.f;
      VAR_17 += *VAR_9;

  }
     } else {
  VAR_12 = *VAR_1;
  for (VAR_14 = 1; VAR_14 <= VAR_12; ++VAR_14) {
      VAR_8[VAR_17] = *VAR_7 * VAR_8[VAR_17];
      VAR_17 += *VAR_9;

  }
     }
 }
    }
    if (*VAR_2 == 0.f) {
 return 0;
    }
    if (FUNC_2(VAR_0, "U")) {



 if (*VAR_6 == 1 && *VAR_9 == 1) {
     VAR_12 = *VAR_1;
     for (VAR_15 = 1; VAR_15 <= VAR_12; ++VAR_15) {
  VAR_23 = *VAR_2 * VAR_5[VAR_15];
  VAR_24 = 0.f;
  VAR_13 = VAR_15 - 1;
  for (VAR_14 = 1; VAR_14 <= VAR_13; ++VAR_14) {
      VAR_8[VAR_14] += VAR_23 * VAR_3[VAR_14 + VAR_15 * VAR_10];
      VAR_24 += VAR_3[VAR_14 + VAR_15 * VAR_10] * VAR_5[VAR_14];

  }
  VAR_8[VAR_15] = VAR_8[VAR_15] + VAR_23 * VAR_3[VAR_15 + VAR_15 * VAR_10] + *VAR_2 * VAR_24;

     }
 } else {
     VAR_18 = VAR_20;
     VAR_19 = VAR_21;
     VAR_12 = *VAR_1;
     for (VAR_15 = 1; VAR_15 <= VAR_12; ++VAR_15) {
  VAR_23 = *VAR_2 * VAR_5[VAR_18];
  VAR_24 = 0.f;
  VAR_16 = VAR_20;
  VAR_17 = VAR_21;
  VAR_13 = VAR_15 - 1;
  for (VAR_14 = 1; VAR_14 <= VAR_13; ++VAR_14) {
      VAR_8[VAR_17] += VAR_23 * VAR_3[VAR_14 + VAR_15 * VAR_10];
      VAR_24 += VAR_3[VAR_14 + VAR_15 * VAR_10] * VAR_5[VAR_16];
      VAR_16 += *VAR_6;
      VAR_17 += *VAR_9;

  }
  VAR_8[VAR_19] = VAR_8[VAR_19] + VAR_23 * VAR_3[VAR_15 + VAR_15 * VAR_10] + *VAR_2 * VAR_24;
  VAR_18 += *VAR_6;
  VAR_19 += *VAR_9;

     }
 }
    } else {



 if (*VAR_6 == 1 && *VAR_9 == 1) {
     VAR_12 = *VAR_1;
     for (VAR_15 = 1; VAR_15 <= VAR_12; ++VAR_15) {
  VAR_23 = *VAR_2 * VAR_5[VAR_15];
  VAR_24 = 0.f;
  VAR_8[VAR_15] += VAR_23 * VAR_3[VAR_15 + VAR_15 * VAR_10];
  VAR_13 = *VAR_1;
  for (VAR_14 = VAR_15 + 1; VAR_14 <= VAR_13; ++VAR_14) {
      VAR_8[VAR_14] += VAR_23 * VAR_3[VAR_14 + VAR_15 * VAR_10];
      VAR_24 += VAR_3[VAR_14 + VAR_15 * VAR_10] * VAR_5[VAR_14];

  }
  VAR_8[VAR_15] += *VAR_2 * VAR_24;

     }
 } else {
     VAR_18 = VAR_20;
     VAR_19 = VAR_21;
     VAR_12 = *VAR_1;
     for (VAR_15 = 1; VAR_15 <= VAR_12; ++VAR_15) {
  VAR_23 = *VAR_2 * VAR_5[VAR_18];
  VAR_24 = 0.f;
  VAR_8[VAR_19] += VAR_23 * VAR_3[VAR_15 + VAR_15 * VAR_10];
  VAR_16 = VAR_18;
  VAR_17 = VAR_19;
  VAR_13 = *VAR_1;
  for (VAR_14 = VAR_15 + 1; VAR_14 <= VAR_13; ++VAR_14) {
      VAR_16 += *VAR_6;
      VAR_17 += *VAR_9;
      VAR_8[VAR_17] += VAR_23 * VAR_3[VAR_14 + VAR_15 * VAR_10];
      VAR_24 += VAR_3[VAR_14 + VAR_15 * VAR_10] * VAR_5[VAR_16];

  }
  VAR_8[VAR_19] += *VAR_2 * VAR_24;
  VAR_18 += *VAR_6;
  VAR_19 += *VAR_9;

     }
 }
    }

    return 0;



}

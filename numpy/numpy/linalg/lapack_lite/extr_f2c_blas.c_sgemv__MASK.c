
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef void* logical ;
typedef int integer ;


 int FUNC_0 (int,int) ;

int FUNC_1(char *VAR_0, integer *VAR_1, integer *VAR_2, real *VAR_3,
 real *VAR_4, integer *VAR_5, real *VAR_6, integer *VAR_7, real *VAR_8, real *VAR_9,
 integer *VAR_10)
{

    integer VAR_11, VAR_12, VAR_13, VAR_14;


    static integer VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    static real VAR_24;
    static integer VAR_25, VAR_26;
    extern logical FUNC_2(char *, char *);
    extern int FUNC_3(char *, integer *);
    VAR_11 = *VAR_5;
    VAR_12 = 1 + VAR_11;
    VAR_4 -= VAR_12;
    --VAR_6;
    --VAR_9;


    VAR_23 = 0;
    if (! FUNC_2(VAR_0, "N") && ! FUNC_2(VAR_0, "T") && ! FUNC_2(VAR_0, "C")
     ) {
 VAR_23 = 1;
    } else if (*VAR_1 < 0) {
 VAR_23 = 2;
    } else if (*VAR_2 < 0) {
 VAR_23 = 3;
    } else if (*VAR_5 < FUNC_0(1,*VAR_1)) {
 VAR_23 = 6;
    } else if (*VAR_7 == 0) {
 VAR_23 = 8;
    } else if (*VAR_10 == 0) {
 VAR_23 = 11;
    }
    if (VAR_23 != 0) {
 FUNC_3("SGEMV ", &VAR_23);
 return 0;
    }



    if (*VAR_1 == 0 || *VAR_2 == 0 || *VAR_3 == 0.f && *VAR_8 == 1.f) {
 return 0;
    }






    if (FUNC_2(VAR_0, "N")) {
 VAR_25 = *VAR_2;
 VAR_26 = *VAR_1;
    } else {
 VAR_25 = *VAR_1;
 VAR_26 = *VAR_2;
    }
    if (*VAR_7 > 0) {
 VAR_21 = 1;
    } else {
 VAR_21 = 1 - (VAR_25 - 1) * *VAR_7;
    }
    if (*VAR_10 > 0) {
 VAR_22 = 1;
    } else {
 VAR_22 = 1 - (VAR_26 - 1) * *VAR_10;
    }
    if (*VAR_8 != 1.f) {
 if (*VAR_10 == 1) {
     if (*VAR_8 == 0.f) {
  VAR_13 = VAR_26;
  for (VAR_15 = 1; VAR_15 <= VAR_13; ++VAR_15) {
      VAR_9[VAR_15] = 0.f;

  }
     } else {
  VAR_13 = VAR_26;
  for (VAR_15 = 1; VAR_15 <= VAR_13; ++VAR_15) {
      VAR_9[VAR_15] = *VAR_8 * VAR_9[VAR_15];

  }
     }
 } else {
     VAR_18 = VAR_22;
     if (*VAR_8 == 0.f) {
  VAR_13 = VAR_26;
  for (VAR_15 = 1; VAR_15 <= VAR_13; ++VAR_15) {
      VAR_9[VAR_18] = 0.f;
      VAR_18 += *VAR_10;

  }
     } else {
  VAR_13 = VAR_26;
  for (VAR_15 = 1; VAR_15 <= VAR_13; ++VAR_15) {
      VAR_9[VAR_18] = *VAR_8 * VAR_9[VAR_18];
      VAR_18 += *VAR_10;

  }
     }
 }
    }
    if (*VAR_3 == 0.f) {
 return 0;
    }
    if (FUNC_2(VAR_0, "N")) {



 VAR_19 = VAR_21;
 if (*VAR_10 == 1) {
     VAR_13 = *VAR_2;
     for (VAR_16 = 1; VAR_16 <= VAR_13; ++VAR_16) {
  if (VAR_6[VAR_19] != 0.f) {
      VAR_24 = *VAR_3 * VAR_6[VAR_19];
      VAR_14 = *VAR_1;
      for (VAR_15 = 1; VAR_15 <= VAR_14; ++VAR_15) {
   VAR_9[VAR_15] += VAR_24 * VAR_4[VAR_15 + VAR_16 * VAR_11];

      }
  }
  VAR_19 += *VAR_7;

     }
 } else {
     VAR_13 = *VAR_2;
     for (VAR_16 = 1; VAR_16 <= VAR_13; ++VAR_16) {
  if (VAR_6[VAR_19] != 0.f) {
      VAR_24 = *VAR_3 * VAR_6[VAR_19];
      VAR_18 = VAR_22;
      VAR_14 = *VAR_1;
      for (VAR_15 = 1; VAR_15 <= VAR_14; ++VAR_15) {
   VAR_9[VAR_18] += VAR_24 * VAR_4[VAR_15 + VAR_16 * VAR_11];
   VAR_18 += *VAR_10;

      }
  }
  VAR_19 += *VAR_7;

     }
 }
    } else {



 VAR_20 = VAR_22;
 if (*VAR_7 == 1) {
     VAR_13 = *VAR_2;
     for (VAR_16 = 1; VAR_16 <= VAR_13; ++VAR_16) {
  VAR_24 = 0.f;
  VAR_14 = *VAR_1;
  for (VAR_15 = 1; VAR_15 <= VAR_14; ++VAR_15) {
      VAR_24 += VAR_4[VAR_15 + VAR_16 * VAR_11] * VAR_6[VAR_15];

  }
  VAR_9[VAR_20] += *VAR_3 * VAR_24;
  VAR_20 += *VAR_10;

     }
 } else {
     VAR_13 = *VAR_2;
     for (VAR_16 = 1; VAR_16 <= VAR_13; ++VAR_16) {
  VAR_24 = 0.f;
  VAR_17 = VAR_21;
  VAR_14 = *VAR_1;
  for (VAR_15 = 1; VAR_15 <= VAR_14; ++VAR_15) {
      VAR_24 += VAR_4[VAR_15 + VAR_16 * VAR_11] * VAR_6[VAR_17];
      VAR_17 += *VAR_7;

  }
  VAR_9[VAR_20] += *VAR_3 * VAR_24;
  VAR_20 += *VAR_10;

     }
 }
    }

    return 0;



}

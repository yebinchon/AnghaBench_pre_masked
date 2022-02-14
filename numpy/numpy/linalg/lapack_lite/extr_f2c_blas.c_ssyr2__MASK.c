
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef void* logical ;
typedef int integer ;


 int FUNC_0 (int,int) ;

int FUNC_1(char *VAR_0, integer *VAR_1, real *VAR_2, real *VAR_3,
 integer *VAR_4, real *VAR_5, integer *VAR_6, real *VAR_7, integer *VAR_8)
{

    integer VAR_9, VAR_10, VAR_11, VAR_12;


    static integer VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    static real VAR_22, VAR_23;
    extern logical FUNC_2(char *, char *);
    extern int FUNC_3(char *, integer *);
    --VAR_3;
    --VAR_5;
    VAR_9 = *VAR_8;
    VAR_10 = 1 + VAR_9;
    VAR_7 -= VAR_10;


    VAR_21 = 0;
    if (! FUNC_2(VAR_0, "U") && ! FUNC_2(VAR_0, "L")) {
 VAR_21 = 1;
    } else if (*VAR_1 < 0) {
 VAR_21 = 2;
    } else if (*VAR_4 == 0) {
 VAR_21 = 5;
    } else if (*VAR_6 == 0) {
 VAR_21 = 7;
    } else if (*VAR_8 < FUNC_0(1,*VAR_1)) {
 VAR_21 = 9;
    }
    if (VAR_21 != 0) {
 FUNC_3("SSYR2 ", &VAR_21);
 return 0;
    }



    if (*VAR_1 == 0 || *VAR_2 == 0.f) {
 return 0;
    }






    if (*VAR_4 != 1 || *VAR_6 != 1) {
 if (*VAR_4 > 0) {
     VAR_19 = 1;
 } else {
     VAR_19 = 1 - (*VAR_1 - 1) * *VAR_4;
 }
 if (*VAR_6 > 0) {
     VAR_20 = 1;
 } else {
     VAR_20 = 1 - (*VAR_1 - 1) * *VAR_6;
 }
 VAR_17 = VAR_19;
 VAR_18 = VAR_20;
    }







    if (FUNC_2(VAR_0, "U")) {



 if (*VAR_4 == 1 && *VAR_6 == 1) {
     VAR_11 = *VAR_1;
     for (VAR_14 = 1; VAR_14 <= VAR_11; ++VAR_14) {
  if (VAR_3[VAR_14] != 0.f || VAR_5[VAR_14] != 0.f) {
      VAR_22 = *VAR_2 * VAR_5[VAR_14];
      VAR_23 = *VAR_2 * VAR_3[VAR_14];
      VAR_12 = VAR_14;
      for (VAR_13 = 1; VAR_13 <= VAR_12; ++VAR_13) {
   VAR_7[VAR_13 + VAR_14 * VAR_9] = VAR_7[VAR_13 + VAR_14 * VAR_9] + VAR_3[VAR_13] *
    VAR_22 + VAR_5[VAR_13] * VAR_23;

      }
  }

     }
 } else {
     VAR_11 = *VAR_1;
     for (VAR_14 = 1; VAR_14 <= VAR_11; ++VAR_14) {
  if (VAR_3[VAR_17] != 0.f || VAR_5[VAR_18] != 0.f) {
      VAR_22 = *VAR_2 * VAR_5[VAR_18];
      VAR_23 = *VAR_2 * VAR_3[VAR_17];
      VAR_15 = VAR_19;
      VAR_16 = VAR_20;
      VAR_12 = VAR_14;
      for (VAR_13 = 1; VAR_13 <= VAR_12; ++VAR_13) {
   VAR_7[VAR_13 + VAR_14 * VAR_9] = VAR_7[VAR_13 + VAR_14 * VAR_9] + VAR_3[VAR_15] *
    VAR_22 + VAR_5[VAR_16] * VAR_23;
   VAR_15 += *VAR_4;
   VAR_16 += *VAR_6;

      }
  }
  VAR_17 += *VAR_4;
  VAR_18 += *VAR_6;

     }
 }
    } else {



 if (*VAR_4 == 1 && *VAR_6 == 1) {
     VAR_11 = *VAR_1;
     for (VAR_14 = 1; VAR_14 <= VAR_11; ++VAR_14) {
  if (VAR_3[VAR_14] != 0.f || VAR_5[VAR_14] != 0.f) {
      VAR_22 = *VAR_2 * VAR_5[VAR_14];
      VAR_23 = *VAR_2 * VAR_3[VAR_14];
      VAR_12 = *VAR_1;
      for (VAR_13 = VAR_14; VAR_13 <= VAR_12; ++VAR_13) {
   VAR_7[VAR_13 + VAR_14 * VAR_9] = VAR_7[VAR_13 + VAR_14 * VAR_9] + VAR_3[VAR_13] *
    VAR_22 + VAR_5[VAR_13] * VAR_23;

      }
  }

     }
 } else {
     VAR_11 = *VAR_1;
     for (VAR_14 = 1; VAR_14 <= VAR_11; ++VAR_14) {
  if (VAR_3[VAR_17] != 0.f || VAR_5[VAR_18] != 0.f) {
      VAR_22 = *VAR_2 * VAR_5[VAR_18];
      VAR_23 = *VAR_2 * VAR_3[VAR_17];
      VAR_15 = VAR_17;
      VAR_16 = VAR_18;
      VAR_12 = *VAR_1;
      for (VAR_13 = VAR_14; VAR_13 <= VAR_12; ++VAR_13) {
   VAR_7[VAR_13 + VAR_14 * VAR_9] = VAR_7[VAR_13 + VAR_14 * VAR_9] + VAR_3[VAR_15] *
    VAR_22 + VAR_5[VAR_16] * VAR_23;
   VAR_15 += *VAR_4;
   VAR_16 += *VAR_6;

      }
  }
  VAR_17 += *VAR_4;
  VAR_18 += *VAR_6;

     }
 }
    }

    return 0;



}

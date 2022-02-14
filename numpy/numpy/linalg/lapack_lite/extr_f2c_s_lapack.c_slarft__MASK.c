
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef void* logical ;
typedef int integer ;


 int VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

int FUNC_2(char *VAR_2, char *VAR_3, integer *VAR_4, integer *
 VAR_5, real *VAR_6, integer *VAR_7, real *VAR_8, real *VAR_9, integer *VAR_10)
{

    integer VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    real VAR_18;


    static integer VAR_19, VAR_20, VAR_21;
    static real VAR_22;
    extern logical FUNC_3(char *, char *);
    extern int FUNC_4(char *, integer *, integer *, real *,
     real *, integer *, real *, integer *, real *, real *, integer *);
    static integer VAR_23;
    extern int FUNC_5(char *, char *, char *, integer *,
     real *, integer *, real *, integer *);
    VAR_13 = *VAR_7;
    VAR_14 = 1 + VAR_13;
    VAR_6 -= VAR_14;
    --VAR_8;
    VAR_11 = *VAR_10;
    VAR_12 = 1 + VAR_11;
    VAR_9 -= VAR_12;


    if (*VAR_4 == 0) {
 return 0;
    }

    if (FUNC_3(VAR_2, "F")) {
 VAR_21 = *VAR_4;
 VAR_15 = *VAR_5;
 for (VAR_19 = 1; VAR_19 <= VAR_15; ++VAR_19) {
     VAR_21 = FUNC_0(VAR_19,VAR_21);
     if (VAR_8[VAR_19] == 0.f) {



  VAR_16 = VAR_19;
  for (VAR_20 = 1; VAR_20 <= VAR_16; ++VAR_20) {
      VAR_9[VAR_20 + VAR_19 * VAR_11] = 0.f;

  }
     } else {



  VAR_22 = VAR_6[VAR_19 + VAR_19 * VAR_13];
  VAR_6[VAR_19 + VAR_19 * VAR_13] = 1.f;
  if (FUNC_3(VAR_3, "C")) {

      VAR_16 = VAR_19 + 1;
      for (VAR_23 = *VAR_4; VAR_23 >= VAR_16; --VAR_23) {
   if (VAR_6[VAR_23 + VAR_19 * VAR_13] != 0.f) {
       goto L15;
   }
      }
L15:
      VAR_20 = FUNC_1(VAR_23,VAR_21);



      VAR_16 = VAR_20 - VAR_19 + 1;
      VAR_17 = VAR_19 - 1;
      VAR_18 = -VAR_8[VAR_19];
      FUNC_4("Transpose", &VAR_16, &VAR_17, &VAR_18, &VAR_6[VAR_19 + VAR_13],
        VAR_7, &VAR_6[VAR_19 + VAR_19 * VAR_13], &VAR_0, &VAR_1, &VAR_9[
       VAR_19 * VAR_11 + 1], &VAR_0);
  } else {

      VAR_16 = VAR_19 + 1;
      for (VAR_23 = *VAR_4; VAR_23 >= VAR_16; --VAR_23) {
   if (VAR_6[VAR_19 + VAR_23 * VAR_13] != 0.f) {
       goto L16;
   }
      }
L16:
      VAR_20 = FUNC_1(VAR_23,VAR_21);



      VAR_16 = VAR_19 - 1;
      VAR_17 = VAR_20 - VAR_19 + 1;
      VAR_18 = -VAR_8[VAR_19];
      FUNC_4("No transpose", &VAR_16, &VAR_17, &VAR_18, &VAR_6[VAR_19 *
       VAR_13 + 1], VAR_7, &VAR_6[VAR_19 + VAR_19 * VAR_13], VAR_7, &
       VAR_1, &VAR_9[VAR_19 * VAR_11 + 1], &VAR_0);
  }
  VAR_6[VAR_19 + VAR_19 * VAR_13] = VAR_22;



  VAR_16 = VAR_19 - 1;
  FUNC_5("Upper", "No transpose", "Non-unit", &VAR_16, &VAR_9[
   VAR_12], VAR_10, &VAR_9[VAR_19 * VAR_11 + 1], &VAR_0);
  VAR_9[VAR_19 + VAR_19 * VAR_11] = VAR_8[VAR_19];
  if (VAR_19 > 1) {
      VAR_21 = FUNC_0(VAR_21,VAR_23);
  } else {
      VAR_21 = VAR_23;
  }
     }

 }
    } else {
 VAR_21 = 1;
 for (VAR_19 = *VAR_5; VAR_19 >= 1; --VAR_19) {
     if (VAR_8[VAR_19] == 0.f) {



  VAR_15 = *VAR_5;
  for (VAR_20 = VAR_19; VAR_20 <= VAR_15; ++VAR_20) {
      VAR_9[VAR_20 + VAR_19 * VAR_11] = 0.f;

  }
     } else {



  if (VAR_19 < *VAR_5) {
      if (FUNC_3(VAR_3, "C")) {
   VAR_22 = VAR_6[*VAR_4 - *VAR_5 + VAR_19 + VAR_19 * VAR_13];
   VAR_6[*VAR_4 - *VAR_5 + VAR_19 + VAR_19 * VAR_13] = 1.f;

   VAR_15 = VAR_19 - 1;
   for (VAR_23 = 1; VAR_23 <= VAR_15; ++VAR_23) {
       if (VAR_6[VAR_23 + VAR_19 * VAR_13] != 0.f) {
    goto L35;
       }
   }
L35:
   VAR_20 = FUNC_0(VAR_23,VAR_21);






   VAR_15 = *VAR_4 - *VAR_5 + VAR_19 - VAR_20 + 1;
   VAR_16 = *VAR_5 - VAR_19;
   VAR_18 = -VAR_8[VAR_19];
   FUNC_4("Transpose", &VAR_15, &VAR_16, &VAR_18, &VAR_6[VAR_20 + (VAR_19
    + 1) * VAR_13], VAR_7, &VAR_6[VAR_20 + VAR_19 * VAR_13], &
    VAR_0, &VAR_1, &VAR_9[VAR_19 + 1 + VAR_19 * VAR_11], &
    VAR_0);
   VAR_6[*VAR_4 - *VAR_5 + VAR_19 + VAR_19 * VAR_13] = VAR_22;
      } else {
   VAR_22 = VAR_6[VAR_19 + (*VAR_4 - *VAR_5 + VAR_19) * VAR_13];
   VAR_6[VAR_19 + (*VAR_4 - *VAR_5 + VAR_19) * VAR_13] = 1.f;

   VAR_15 = VAR_19 - 1;
   for (VAR_23 = 1; VAR_23 <= VAR_15; ++VAR_23) {
       if (VAR_6[VAR_19 + VAR_23 * VAR_13] != 0.f) {
    goto L36;
       }
   }
L36:
   VAR_20 = FUNC_0(VAR_23,VAR_21);






   VAR_15 = *VAR_5 - VAR_19;
   VAR_16 = *VAR_4 - *VAR_5 + VAR_19 - VAR_20 + 1;
   VAR_18 = -VAR_8[VAR_19];
   FUNC_4("No transpose", &VAR_15, &VAR_16, &VAR_18, &VAR_6[VAR_19 +
    1 + VAR_20 * VAR_13], VAR_7, &VAR_6[VAR_19 + VAR_20 * VAR_13],
    VAR_7, &VAR_1, &VAR_9[VAR_19 + 1 + VAR_19 * VAR_11], &
    VAR_0);
   VAR_6[VAR_19 + (*VAR_4 - *VAR_5 + VAR_19) * VAR_13] = VAR_22;
      }



      VAR_15 = *VAR_5 - VAR_19;
      FUNC_5("Lower", "No transpose", "Non-unit", &VAR_15, &VAR_9[VAR_19
       + 1 + (VAR_19 + 1) * VAR_11], VAR_10, &VAR_9[VAR_19 + 1 + VAR_19 *
        VAR_11], &VAR_0)
       ;
      if (VAR_19 > 1) {
   VAR_21 = FUNC_1(VAR_21,VAR_23);
      } else {
   VAR_21 = VAR_23;
      }
  }
  VAR_9[VAR_19 + VAR_19 * VAR_11] = VAR_8[VAR_19];
     }

 }
    }
    return 0;



}

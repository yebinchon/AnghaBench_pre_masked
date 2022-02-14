
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef void* logical ;
typedef int integer ;


 int FUNC_0 (int,int) ;

int FUNC_1(char *VAR_0, char *VAR_1, char *VAR_2, integer *VAR_3,
 real *VAR_4, integer *VAR_5, real *VAR_6, integer *VAR_7)
{

    integer VAR_8, VAR_9, VAR_10, VAR_11;


    static integer VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    static real VAR_18;
    extern logical FUNC_2(char *, char *);
    extern int FUNC_3(char *, integer *);
    static logical VAR_19;
    VAR_8 = *VAR_5;
    VAR_9 = 1 + VAR_8;
    VAR_4 -= VAR_9;
    --VAR_6;


    VAR_17 = 0;
    if (! FUNC_2(VAR_0, "U") && ! FUNC_2(VAR_0, "L")) {
 VAR_17 = 1;
    } else if (! FUNC_2(VAR_1, "N") && ! FUNC_2(VAR_1,
     "T") && ! FUNC_2(VAR_1, "C")) {
 VAR_17 = 2;
    } else if (! FUNC_2(VAR_2, "U") && ! FUNC_2(VAR_2,
     "N")) {
 VAR_17 = 3;
    } else if (*VAR_3 < 0) {
 VAR_17 = 4;
    } else if (*VAR_5 < FUNC_0(1,*VAR_3)) {
 VAR_17 = 6;
    } else if (*VAR_7 == 0) {
 VAR_17 = 8;
    }
    if (VAR_17 != 0) {
 FUNC_3("STRMV ", &VAR_17);
 return 0;
    }



    if (*VAR_3 == 0) {
 return 0;
    }

    VAR_19 = FUNC_2(VAR_2, "N");






    if (*VAR_7 <= 0) {
 VAR_16 = 1 - (*VAR_3 - 1) * *VAR_7;
    } else if (*VAR_7 != 1) {
 VAR_16 = 1;
    }






    if (FUNC_2(VAR_1, "N")) {



 if (FUNC_2(VAR_0, "U")) {
     if (*VAR_7 == 1) {
  VAR_10 = *VAR_3;
  for (VAR_13 = 1; VAR_13 <= VAR_10; ++VAR_13) {
      if (VAR_6[VAR_13] != 0.f) {
   VAR_18 = VAR_6[VAR_13];
   VAR_11 = VAR_13 - 1;
   for (VAR_12 = 1; VAR_12 <= VAR_11; ++VAR_12) {
       VAR_6[VAR_12] += VAR_18 * VAR_4[VAR_12 + VAR_13 * VAR_8];

   }
   if (VAR_19) {
       VAR_6[VAR_13] *= VAR_4[VAR_13 + VAR_13 * VAR_8];
   }
      }

  }
     } else {
  VAR_15 = VAR_16;
  VAR_10 = *VAR_3;
  for (VAR_13 = 1; VAR_13 <= VAR_10; ++VAR_13) {
      if (VAR_6[VAR_15] != 0.f) {
   VAR_18 = VAR_6[VAR_15];
   VAR_14 = VAR_16;
   VAR_11 = VAR_13 - 1;
   for (VAR_12 = 1; VAR_12 <= VAR_11; ++VAR_12) {
       VAR_6[VAR_14] += VAR_18 * VAR_4[VAR_12 + VAR_13 * VAR_8];
       VAR_14 += *VAR_7;

   }
   if (VAR_19) {
       VAR_6[VAR_15] *= VAR_4[VAR_13 + VAR_13 * VAR_8];
   }
      }
      VAR_15 += *VAR_7;

  }
     }
 } else {
     if (*VAR_7 == 1) {
  for (VAR_13 = *VAR_3; VAR_13 >= 1; --VAR_13) {
      if (VAR_6[VAR_13] != 0.f) {
   VAR_18 = VAR_6[VAR_13];
   VAR_10 = VAR_13 + 1;
   for (VAR_12 = *VAR_3; VAR_12 >= VAR_10; --VAR_12) {
       VAR_6[VAR_12] += VAR_18 * VAR_4[VAR_12 + VAR_13 * VAR_8];

   }
   if (VAR_19) {
       VAR_6[VAR_13] *= VAR_4[VAR_13 + VAR_13 * VAR_8];
   }
      }

  }
     } else {
  VAR_16 += (*VAR_3 - 1) * *VAR_7;
  VAR_15 = VAR_16;
  for (VAR_13 = *VAR_3; VAR_13 >= 1; --VAR_13) {
      if (VAR_6[VAR_15] != 0.f) {
   VAR_18 = VAR_6[VAR_15];
   VAR_14 = VAR_16;
   VAR_10 = VAR_13 + 1;
   for (VAR_12 = *VAR_3; VAR_12 >= VAR_10; --VAR_12) {
       VAR_6[VAR_14] += VAR_18 * VAR_4[VAR_12 + VAR_13 * VAR_8];
       VAR_14 -= *VAR_7;

   }
   if (VAR_19) {
       VAR_6[VAR_15] *= VAR_4[VAR_13 + VAR_13 * VAR_8];
   }
      }
      VAR_15 -= *VAR_7;

  }
     }
 }
    } else {



 if (FUNC_2(VAR_0, "U")) {
     if (*VAR_7 == 1) {
  for (VAR_13 = *VAR_3; VAR_13 >= 1; --VAR_13) {
      VAR_18 = VAR_6[VAR_13];
      if (VAR_19) {
   VAR_18 *= VAR_4[VAR_13 + VAR_13 * VAR_8];
      }
      for (VAR_12 = VAR_13 - 1; VAR_12 >= 1; --VAR_12) {
   VAR_18 += VAR_4[VAR_12 + VAR_13 * VAR_8] * VAR_6[VAR_12];

      }
      VAR_6[VAR_13] = VAR_18;

  }
     } else {
  VAR_15 = VAR_16 + (*VAR_3 - 1) * *VAR_7;
  for (VAR_13 = *VAR_3; VAR_13 >= 1; --VAR_13) {
      VAR_18 = VAR_6[VAR_15];
      VAR_14 = VAR_15;
      if (VAR_19) {
   VAR_18 *= VAR_4[VAR_13 + VAR_13 * VAR_8];
      }
      for (VAR_12 = VAR_13 - 1; VAR_12 >= 1; --VAR_12) {
   VAR_14 -= *VAR_7;
   VAR_18 += VAR_4[VAR_12 + VAR_13 * VAR_8] * VAR_6[VAR_14];

      }
      VAR_6[VAR_15] = VAR_18;
      VAR_15 -= *VAR_7;

  }
     }
 } else {
     if (*VAR_7 == 1) {
  VAR_10 = *VAR_3;
  for (VAR_13 = 1; VAR_13 <= VAR_10; ++VAR_13) {
      VAR_18 = VAR_6[VAR_13];
      if (VAR_19) {
   VAR_18 *= VAR_4[VAR_13 + VAR_13 * VAR_8];
      }
      VAR_11 = *VAR_3;
      for (VAR_12 = VAR_13 + 1; VAR_12 <= VAR_11; ++VAR_12) {
   VAR_18 += VAR_4[VAR_12 + VAR_13 * VAR_8] * VAR_6[VAR_12];

      }
      VAR_6[VAR_13] = VAR_18;

  }
     } else {
  VAR_15 = VAR_16;
  VAR_10 = *VAR_3;
  for (VAR_13 = 1; VAR_13 <= VAR_10; ++VAR_13) {
      VAR_18 = VAR_6[VAR_15];
      VAR_14 = VAR_15;
      if (VAR_19) {
   VAR_18 *= VAR_4[VAR_13 + VAR_13 * VAR_8];
      }
      VAR_11 = *VAR_3;
      for (VAR_12 = VAR_13 + 1; VAR_12 <= VAR_11; ++VAR_12) {
   VAR_14 += *VAR_7;
   VAR_18 += VAR_4[VAR_12 + VAR_13 * VAR_8] * VAR_6[VAR_14];

      }
      VAR_6[VAR_15] = VAR_18;
      VAR_15 += *VAR_7;

  }
     }
 }
    }

    return 0;



}

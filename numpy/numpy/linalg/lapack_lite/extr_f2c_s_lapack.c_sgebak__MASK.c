
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef void* logical ;
typedef int integer ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int*) ;

int FUNC_3(char *VAR_0, char *VAR_1, integer *VAR_2, integer *VAR_3,
 integer *VAR_4, real *VAR_5, integer *VAR_6, real *VAR_7, integer *VAR_8, integer
 *VAR_9)
{

    integer VAR_10, VAR_11, VAR_12;


    static integer VAR_13, VAR_14;
    static real VAR_15;
    static integer VAR_16;
    extern logical FUNC_4(char *, char *);
    extern int FUNC_5(integer *, real *, real *, integer *);
    static logical VAR_17;
    extern int FUNC_6(integer *, real *, integer *, real *,
     integer *), FUNC_2(char *, integer *);
    static logical VAR_18;
    --VAR_5;
    VAR_10 = *VAR_8;
    VAR_11 = 1 + VAR_10;
    VAR_7 -= VAR_11;


    VAR_18 = FUNC_4(VAR_1, "R");
    VAR_17 = FUNC_4(VAR_1, "L");

    *VAR_9 = 0;
    if (! FUNC_4(VAR_0, "N") && ! FUNC_4(VAR_0, "P") && ! FUNC_4(VAR_0, "S")
     && ! FUNC_4(VAR_0, "B")) {
 *VAR_9 = -1;
    } else if (! VAR_18 && ! VAR_17) {
 *VAR_9 = -2;
    } else if (*VAR_2 < 0) {
 *VAR_9 = -3;
    } else if (*VAR_3 < 1 || *VAR_3 > FUNC_0(1,*VAR_2)) {
 *VAR_9 = -4;
    } else if (*VAR_4 < FUNC_1(*VAR_3,*VAR_2) || *VAR_4 > *VAR_2) {
 *VAR_9 = -5;
    } else if (*VAR_6 < 0) {
 *VAR_9 = -7;
    } else if (*VAR_8 < FUNC_0(1,*VAR_2)) {
 *VAR_9 = -9;
    }
    if (*VAR_9 != 0) {
 VAR_12 = -(*VAR_9);
 FUNC_2("SGEBAK", &VAR_12);
 return 0;
    }



    if (*VAR_2 == 0) {
 return 0;
    }
    if (*VAR_6 == 0) {
 return 0;
    }
    if (FUNC_4(VAR_0, "N")) {
 return 0;
    }

    if (*VAR_3 == *VAR_4) {
 goto L30;
    }



    if (FUNC_4(VAR_0, "S") || FUNC_4(VAR_0, "B")) {

 if (VAR_18) {
     VAR_12 = *VAR_4;
     for (VAR_13 = *VAR_3; VAR_13 <= VAR_12; ++VAR_13) {
  VAR_15 = VAR_5[VAR_13];
  FUNC_5(VAR_6, &VAR_15, &VAR_7[VAR_13 + VAR_10], VAR_8);

     }
 }

 if (VAR_17) {
     VAR_12 = *VAR_4;
     for (VAR_13 = *VAR_3; VAR_13 <= VAR_12; ++VAR_13) {
  VAR_15 = 1.f / VAR_5[VAR_13];
  FUNC_5(VAR_6, &VAR_15, &VAR_7[VAR_13 + VAR_10], VAR_8);

     }
 }

    }
L30:
    if (FUNC_4(VAR_0, "P") || FUNC_4(VAR_0, "B")) {
 if (VAR_18) {
     VAR_12 = *VAR_2;
     for (VAR_16 = 1; VAR_16 <= VAR_12; ++VAR_16) {
  VAR_13 = VAR_16;
  if (VAR_13 >= *VAR_3 && VAR_13 <= *VAR_4) {
      goto L40;
  }
  if (VAR_13 < *VAR_3) {
      VAR_13 = *VAR_3 - VAR_16;
  }
  VAR_14 = VAR_5[VAR_13];
  if (VAR_14 == VAR_13) {
      goto L40;
  }
  FUNC_6(VAR_6, &VAR_7[VAR_13 + VAR_10], VAR_8, &VAR_7[VAR_14 + VAR_10], VAR_8);
L40:
  ;
     }
 }

 if (VAR_17) {
     VAR_12 = *VAR_2;
     for (VAR_16 = 1; VAR_16 <= VAR_12; ++VAR_16) {
  VAR_13 = VAR_16;
  if (VAR_13 >= *VAR_3 && VAR_13 <= *VAR_4) {
      goto L50;
  }
  if (VAR_13 < *VAR_3) {
      VAR_13 = *VAR_3 - VAR_16;
  }
  VAR_14 = VAR_5[VAR_13];
  if (VAR_14 == VAR_13) {
      goto L50;
  }
  FUNC_6(VAR_6, &VAR_7[VAR_13 + VAR_10], VAR_8, &VAR_7[VAR_14 + VAR_10], VAR_8);
L50:
  ;
     }
 }
    }

    return 0;



}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* logical ;
typedef int integer ;
typedef int ftnlen ;
typedef int doublereal ;
typedef char* address ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,char*,char*,int*,int*,int *,int*,int*,int*,int*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,char**,int*,int *,int ) ;
 int FUNC_4 (char*,int*) ;

int FUNC_5(char *VAR_5, char *VAR_6, integer *VAR_7, doublereal *
 VAR_8, integer *VAR_9, integer *VAR_10)
{

    address VAR_11[2];
    integer VAR_12, VAR_13, VAR_14, VAR_15[2], VAR_16, VAR_17, VAR_18;
    char VAR_19[2];


    static integer VAR_20, VAR_21, VAR_22, VAR_23;
    extern logical FUNC_6(char *, char *);
    extern int FUNC_7(char *, char *, char *, char *,
     integer *, integer *, doublereal *, doublereal *, integer *,
     doublereal *, integer *), FUNC_0(
     char *, char *, char *, char *, integer *, integer *, doublereal *
     , doublereal *, integer *, doublereal *, integer *);
    static logical VAR_24;
    extern int FUNC_8(char *, char *, integer *, doublereal
     *, integer *, integer *), FUNC_4(char *, integer
     *);
    extern integer FUNC_9(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    static logical VAR_25;
    VAR_12 = *VAR_9;
    VAR_13 = 1 + VAR_12;
    VAR_8 -= VAR_13;


    *VAR_10 = 0;
    VAR_24 = FUNC_6(VAR_5, "U");
    VAR_25 = FUNC_6(VAR_6, "N");
    if (! VAR_24 && ! FUNC_6(VAR_5, "L")) {
 *VAR_10 = -1;
    } else if (! VAR_25 && ! FUNC_6(VAR_6, "U")) {
 *VAR_10 = -2;
    } else if (*VAR_7 < 0) {
 *VAR_10 = -3;
    } else if (*VAR_9 < FUNC_1(1,*VAR_7)) {
 *VAR_10 = -5;
    }
    if (*VAR_10 != 0) {
 VAR_14 = -(*VAR_10);
 FUNC_4("DTRTRI", &VAR_14);
 return 0;
    }



    if (*VAR_7 == 0) {
 return 0;
    }



    if (VAR_25) {
 VAR_14 = *VAR_7;
 for (*VAR_10 = 1; *VAR_10 <= VAR_14; ++(*VAR_10)) {
     if (VAR_8[*VAR_10 + *VAR_10 * VAR_12] == 0.) {
  return 0;
     }

 }
 *VAR_10 = 0;
    }






    VAR_15[0] = 1, VAR_11[0] = VAR_5;
    VAR_15[1] = 1, VAR_11[1] = VAR_6;
    FUNC_3(VAR_19, VAR_11, VAR_15, &VAR_1, (ftnlen)2);
    VAR_22 = FUNC_9(&VAR_0, "DTRTRI", VAR_19, VAR_7, &VAR_4, &VAR_4, &VAR_4, (ftnlen)6, (
     ftnlen)2);
    if (VAR_22 <= 1 || VAR_22 >= *VAR_7) {



 FUNC_8(VAR_5, VAR_6, VAR_7, &VAR_8[VAR_13], VAR_9, VAR_10);
    } else {



 if (VAR_24) {



     VAR_14 = *VAR_7;
     VAR_16 = VAR_22;
     for (VAR_20 = 1; VAR_16 < 0 ? VAR_20 >= VAR_14 : VAR_20 <= VAR_14; VAR_20 += VAR_16) {

  VAR_17 = VAR_22, VAR_18 = *VAR_7 - VAR_20 + 1;
  VAR_21 = FUNC_2(VAR_17,VAR_18);



  VAR_17 = VAR_20 - 1;
  FUNC_7("Left", "Upper", "No transpose", VAR_6, &VAR_17, &VAR_21, &
   VAR_2, &VAR_8[VAR_13], VAR_9, &VAR_8[VAR_20 * VAR_12 + 1], VAR_9);
  VAR_17 = VAR_20 - 1;
  FUNC_0("Right", "Upper", "No transpose", VAR_6, &VAR_17, &VAR_21, &
   VAR_3, &VAR_8[VAR_20 + VAR_20 * VAR_12], VAR_9, &VAR_8[VAR_20 * VAR_12 + 1],
   VAR_9);



  FUNC_8("Upper", VAR_6, &VAR_21, &VAR_8[VAR_20 + VAR_20 * VAR_12], VAR_9, VAR_10);

     }
 } else {



     VAR_23 = (*VAR_7 - 1) / VAR_22 * VAR_22 + 1;
     VAR_16 = -VAR_22;
     for (VAR_20 = VAR_23; VAR_16 < 0 ? VAR_20 >= 1 : VAR_20 <= 1; VAR_20 += VAR_16) {

  VAR_14 = VAR_22, VAR_17 = *VAR_7 - VAR_20 + 1;
  VAR_21 = FUNC_2(VAR_14,VAR_17);
  if (VAR_20 + VAR_21 <= *VAR_7) {



      VAR_14 = *VAR_7 - VAR_20 - VAR_21 + 1;
      FUNC_7("Left", "Lower", "No transpose", VAR_6, &VAR_14, &VAR_21,
       &VAR_2, &VAR_8[VAR_20 + VAR_21 + (VAR_20 + VAR_21) * VAR_12], VAR_9, &VAR_8[VAR_20
       + VAR_21 + VAR_20 * VAR_12], VAR_9);
      VAR_14 = *VAR_7 - VAR_20 - VAR_21 + 1;
      FUNC_0("Right", "Lower", "No transpose", VAR_6, &VAR_14, &VAR_21,
        &VAR_3, &VAR_8[VAR_20 + VAR_20 * VAR_12], VAR_9, &VAR_8[VAR_20 + VAR_21 + VAR_20 *
        VAR_12], VAR_9);
  }



  FUNC_8("Lower", VAR_6, &VAR_21, &VAR_8[VAR_20 + VAR_20 * VAR_12], VAR_9, VAR_10);

     }
 }
    }

    return 0;



}

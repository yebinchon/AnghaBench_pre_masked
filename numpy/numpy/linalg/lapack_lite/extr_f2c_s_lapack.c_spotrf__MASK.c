
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;
typedef scalar_t__ logical ;
typedef int integer ;
typedef int ftnlen ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int*,int *,int*,int*) ;
 int FUNC_3 (char*,char*,int*,int*,int *,int *,int*,int *,int *,int*) ;
 int FUNC_4 (char*,int*) ;

int FUNC_5(char *VAR_4, integer *VAR_5, real *VAR_6, integer *VAR_7,
 integer *VAR_8)
{

    integer VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;


    static integer VAR_15, VAR_16, VAR_17;
    extern logical FUNC_6(char *, char *);
    extern int FUNC_7(char *, char *, integer *, integer *,
     integer *, real *, real *, integer *, real *, integer *, real *,
     real *, integer *);
    static logical VAR_18;
    extern int FUNC_8(char *, char *, char *, char *,
     integer *, integer *, real *, real *, integer *, real *, integer *
     ), FUNC_3(char *, char *, integer
     *, integer *, real *, real *, integer *, real *, real *, integer *
     ), FUNC_2(char *, integer *, real *, integer *,
     integer *), FUNC_4(char *, integer *);
    extern integer FUNC_9(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    VAR_9 = *VAR_7;
    VAR_10 = 1 + VAR_9;
    VAR_6 -= VAR_10;


    *VAR_8 = 0;
    VAR_18 = FUNC_6(VAR_4, "U");
    if (! VAR_18 && ! FUNC_6(VAR_4, "L")) {
 *VAR_8 = -1;
    } else if (*VAR_5 < 0) {
 *VAR_8 = -2;
    } else if (*VAR_7 < FUNC_0(1,*VAR_5)) {
 *VAR_8 = -4;
    }
    if (*VAR_8 != 0) {
 VAR_11 = -(*VAR_8);
 FUNC_4("SPOTRF", &VAR_11);
 return 0;
    }



    if (*VAR_5 == 0) {
 return 0;
    }



    VAR_17 = FUNC_9(&VAR_0, "SPOTRF", VAR_4, VAR_5, &VAR_3, &VAR_3, &VAR_3, (ftnlen)6, (
     ftnlen)1);
    if (VAR_17 <= 1 || VAR_17 >= *VAR_5) {



 FUNC_2(VAR_4, VAR_5, &VAR_6[VAR_10], VAR_7, VAR_8);
    } else {



 if (VAR_18) {



     VAR_11 = *VAR_5;
     VAR_12 = VAR_17;
     for (VAR_15 = 1; VAR_12 < 0 ? VAR_15 >= VAR_11 : VAR_15 <= VAR_11; VAR_15 += VAR_12) {







  VAR_13 = VAR_17, VAR_14 = *VAR_5 - VAR_15 + 1;
  VAR_16 = FUNC_1(VAR_13,VAR_14);
  VAR_13 = VAR_15 - 1;
  FUNC_3("Upper", "Transpose", &VAR_16, &VAR_13, &VAR_2, &VAR_6[VAR_15 *
   VAR_9 + 1], VAR_7, &VAR_1, &VAR_6[VAR_15 + VAR_15 * VAR_9], VAR_7);
  FUNC_2("Upper", &VAR_16, &VAR_6[VAR_15 + VAR_15 * VAR_9], VAR_7, VAR_8);
  if (*VAR_8 != 0) {
      goto L30;
  }
  if (VAR_15 + VAR_16 <= *VAR_5) {



      VAR_13 = *VAR_5 - VAR_15 - VAR_16 + 1;
      VAR_14 = VAR_15 - 1;
      FUNC_7("Transpose", "No transpose", &VAR_16, &VAR_13, &VAR_14, &
       VAR_2, &VAR_6[VAR_15 * VAR_9 + 1], VAR_7, &VAR_6[(VAR_15 + VAR_16) *
       VAR_9 + 1], VAR_7, &VAR_1, &VAR_6[VAR_15 + (VAR_15 + VAR_16) *
       VAR_9], VAR_7);
      VAR_13 = *VAR_5 - VAR_15 - VAR_16 + 1;
      FUNC_8("Left", "Upper", "Transpose", "Non-unit", &VAR_16, &
       VAR_13, &VAR_1, &VAR_6[VAR_15 + VAR_15 * VAR_9], VAR_7, &VAR_6[VAR_15 + (VAR_15
       + VAR_16) * VAR_9], VAR_7);
  }

     }

 } else {



     VAR_12 = *VAR_5;
     VAR_11 = VAR_17;
     for (VAR_15 = 1; VAR_11 < 0 ? VAR_15 >= VAR_12 : VAR_15 <= VAR_12; VAR_15 += VAR_11) {







  VAR_13 = VAR_17, VAR_14 = *VAR_5 - VAR_15 + 1;
  VAR_16 = FUNC_1(VAR_13,VAR_14);
  VAR_13 = VAR_15 - 1;
  FUNC_3("Lower", "No transpose", &VAR_16, &VAR_13, &VAR_2, &VAR_6[VAR_15 +
   VAR_9], VAR_7, &VAR_1, &VAR_6[VAR_15 + VAR_15 * VAR_9], VAR_7);
  FUNC_2("Lower", &VAR_16, &VAR_6[VAR_15 + VAR_15 * VAR_9], VAR_7, VAR_8);
  if (*VAR_8 != 0) {
      goto L30;
  }
  if (VAR_15 + VAR_16 <= *VAR_5) {



      VAR_13 = *VAR_5 - VAR_15 - VAR_16 + 1;
      VAR_14 = VAR_15 - 1;
      FUNC_7("No transpose", "Transpose", &VAR_13, &VAR_16, &VAR_14, &
       VAR_2, &VAR_6[VAR_15 + VAR_16 + VAR_9], VAR_7, &VAR_6[VAR_15 + VAR_9],
       VAR_7, &VAR_1, &VAR_6[VAR_15 + VAR_16 + VAR_15 * VAR_9], VAR_7);
      VAR_13 = *VAR_5 - VAR_15 - VAR_16 + 1;
      FUNC_8("Right", "Lower", "Transpose", "Non-unit", &VAR_13, &
       VAR_16, &VAR_1, &VAR_6[VAR_15 + VAR_15 * VAR_9], VAR_7, &VAR_6[VAR_15 + VAR_16 +
       VAR_15 * VAR_9], VAR_7);
  }

     }
 }
    }
    goto L40;

L30:
    *VAR_8 = *VAR_8 + VAR_15 - 1;

L40:
    return 0;



}

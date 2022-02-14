
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;
typedef int integer ;
typedef int ftnlen ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*,int*,int *,int*,int*,int*) ;
 int FUNC_3 (char*,char*,char*,char*,int*,int*,int *,int *,int*,int *,int*) ;
 int FUNC_4 (char*,int*) ;

int FUNC_5(integer *VAR_4, integer *VAR_5, real *VAR_6, integer *VAR_7,
 integer *VAR_8, integer *VAR_9)
{

    integer VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;


    static integer VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    extern int FUNC_6(char *, char *, integer *, integer *,
     integer *, real *, real *, integer *, real *, integer *, real *,
     real *, integer *), FUNC_3(char *, char *, char *,
      char *, integer *, integer *, real *, real *, integer *, real *,
     integer *), FUNC_2(integer *,
     integer *, real *, integer *, integer *, integer *), FUNC_4(char
     *, integer *);
    extern integer FUNC_7(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    extern int FUNC_8(integer *, real *, integer *, integer
     *, integer *, integer *, integer *);
    VAR_10 = *VAR_7;
    VAR_11 = 1 + VAR_10;
    VAR_6 -= VAR_11;
    --VAR_8;


    *VAR_9 = 0;
    if (*VAR_4 < 0) {
 *VAR_9 = -1;
    } else if (*VAR_5 < 0) {
 *VAR_9 = -2;
    } else if (*VAR_7 < FUNC_0(1,*VAR_4)) {
 *VAR_9 = -4;
    }
    if (*VAR_9 != 0) {
 VAR_12 = -(*VAR_9);
 FUNC_4("SGETRF", &VAR_12);
 return 0;
    }



    if (*VAR_4 == 0 || *VAR_5 == 0) {
 return 0;
    }



    VAR_20 = FUNC_7(&VAR_0, "SGETRF", " ", VAR_4, VAR_5, &VAR_3, &VAR_3, (ftnlen)6, (ftnlen)
     1);
    if (VAR_20 <= 1 || VAR_20 >= FUNC_1(*VAR_4,*VAR_5)) {



 FUNC_2(VAR_4, VAR_5, &VAR_6[VAR_11], VAR_7, &VAR_8[1], VAR_9);
    } else {



 VAR_12 = FUNC_1(*VAR_4,*VAR_5);
 VAR_13 = VAR_20;
 for (VAR_18 = 1; VAR_13 < 0 ? VAR_18 >= VAR_12 : VAR_18 <= VAR_12; VAR_18 += VAR_13) {

     VAR_14 = FUNC_1(*VAR_4,*VAR_5) - VAR_18 + 1;
     VAR_19 = FUNC_1(VAR_14,VAR_20);






     VAR_14 = *VAR_4 - VAR_18 + 1;
     FUNC_2(&VAR_14, &VAR_19, &VAR_6[VAR_18 + VAR_18 * VAR_10], VAR_7, &VAR_8[VAR_18], &VAR_21);



     if (*VAR_9 == 0 && VAR_21 > 0) {
  *VAR_9 = VAR_21 + VAR_18 - 1;
     }

     VAR_15 = *VAR_4, VAR_16 = VAR_18 + VAR_19 - 1;
     VAR_14 = FUNC_1(VAR_15,VAR_16);
     for (VAR_17 = VAR_18; VAR_17 <= VAR_14; ++VAR_17) {
  VAR_8[VAR_17] = VAR_18 - 1 + VAR_8[VAR_17];

     }



     VAR_14 = VAR_18 - 1;
     VAR_15 = VAR_18 + VAR_19 - 1;
     FUNC_8(&VAR_14, &VAR_6[VAR_11], VAR_7, &VAR_18, &VAR_15, &VAR_8[1], &VAR_0);

     if (VAR_18 + VAR_19 <= *VAR_5) {



  VAR_14 = *VAR_5 - VAR_18 - VAR_19 + 1;
  VAR_15 = VAR_18 + VAR_19 - 1;
  FUNC_8(&VAR_14, &VAR_6[(VAR_18 + VAR_19) * VAR_10 + 1], VAR_7, &VAR_18, &VAR_15, &
   VAR_8[1], &VAR_0);



  VAR_14 = *VAR_5 - VAR_18 - VAR_19 + 1;
  FUNC_3("Left", "Lower", "No transpose", "Unit", &VAR_19, &VAR_14, &
   VAR_1, &VAR_6[VAR_18 + VAR_18 * VAR_10], VAR_7, &VAR_6[VAR_18 + (VAR_18 + VAR_19) *
   VAR_10], VAR_7);
  if (VAR_18 + VAR_19 <= *VAR_4) {



      VAR_14 = *VAR_4 - VAR_18 - VAR_19 + 1;
      VAR_15 = *VAR_5 - VAR_18 - VAR_19 + 1;
      FUNC_6("No transpose", "No transpose", &VAR_14, &VAR_15, &VAR_19,
       &VAR_2, &VAR_6[VAR_18 + VAR_19 + VAR_18 * VAR_10], VAR_7, &VAR_6[VAR_18 + (VAR_18
       + VAR_19) * VAR_10], VAR_7, &VAR_1, &VAR_6[VAR_18 + VAR_19 + (VAR_18 + VAR_19)
        * VAR_10], VAR_7);
  }
     }

 }
    }
    return 0;



}

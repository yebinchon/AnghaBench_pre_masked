
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int integer ;
typedef int ftnlen ;
struct TYPE_8__ {int r; int i; } ;
typedef TYPE_1__ doublecomplex ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int*) ;
 int FUNC_3 (int*,int*,TYPE_1__*,int*,int*,int*) ;
 int FUNC_4 (char*,char*,char*,char*,int*,int*,TYPE_1__*,TYPE_1__*,int*,TYPE_1__*,int*) ;

int FUNC_5(integer *VAR_3, integer *VAR_4, doublecomplex *VAR_5,
 integer *VAR_6, integer *VAR_7, integer *VAR_8)
{

    integer VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    doublecomplex VAR_16;


    static integer VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    extern int FUNC_6(char *, char *, integer *, integer *,
     integer *, doublecomplex *, doublecomplex *, integer *,
     doublecomplex *, integer *, doublecomplex *, doublecomplex *,
     integer *), FUNC_4(char *, char *, char *, char *,
      integer *, integer *, doublecomplex *, doublecomplex *, integer *
     , doublecomplex *, integer *),
     FUNC_3(integer *, integer *, doublecomplex *, integer *, integer
     *, integer *), FUNC_2(char *, integer *);
    extern integer FUNC_7(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    extern int FUNC_8(integer *, doublecomplex *, integer *,
      integer *, integer *, integer *, integer *);
    VAR_9 = *VAR_6;
    VAR_10 = 1 + VAR_9;
    VAR_5 -= VAR_10;
    --VAR_7;


    *VAR_8 = 0;
    if (*VAR_3 < 0) {
 *VAR_8 = -1;
    } else if (*VAR_4 < 0) {
 *VAR_8 = -2;
    } else if (*VAR_6 < FUNC_0(1,*VAR_3)) {
 *VAR_8 = -4;
    }
    if (*VAR_8 != 0) {
 VAR_11 = -(*VAR_8);
 FUNC_2("ZGETRF", &VAR_11);
 return 0;
    }



    if (*VAR_3 == 0 || *VAR_4 == 0) {
 return 0;
    }



    VAR_20 = FUNC_7(&VAR_0, "ZGETRF", " ", VAR_3, VAR_4, &VAR_2, &VAR_2, (ftnlen)6, (ftnlen)
     1);
    if (VAR_20 <= 1 || VAR_20 >= FUNC_1(*VAR_3,*VAR_4)) {



 FUNC_3(VAR_3, VAR_4, &VAR_5[VAR_10], VAR_6, &VAR_7[1], VAR_8);
    } else {



 VAR_11 = FUNC_1(*VAR_3,*VAR_4);
 VAR_12 = VAR_20;
 for (VAR_18 = 1; VAR_12 < 0 ? VAR_18 >= VAR_11 : VAR_18 <= VAR_11; VAR_18 += VAR_12) {

     VAR_13 = FUNC_1(*VAR_3,*VAR_4) - VAR_18 + 1;
     VAR_19 = FUNC_1(VAR_13,VAR_20);






     VAR_13 = *VAR_3 - VAR_18 + 1;
     FUNC_3(&VAR_13, &VAR_19, &VAR_5[VAR_18 + VAR_18 * VAR_9], VAR_6, &VAR_7[VAR_18], &VAR_21);



     if (*VAR_8 == 0 && VAR_21 > 0) {
  *VAR_8 = VAR_21 + VAR_18 - 1;
     }

     VAR_14 = *VAR_3, VAR_15 = VAR_18 + VAR_19 - 1;
     VAR_13 = FUNC_1(VAR_14,VAR_15);
     for (VAR_17 = VAR_18; VAR_17 <= VAR_13; ++VAR_17) {
  VAR_7[VAR_17] = VAR_18 - 1 + VAR_7[VAR_17];

     }



     VAR_13 = VAR_18 - 1;
     VAR_14 = VAR_18 + VAR_19 - 1;
     FUNC_8(&VAR_13, &VAR_5[VAR_10], VAR_6, &VAR_18, &VAR_14, &VAR_7[1], &VAR_0);

     if (VAR_18 + VAR_19 <= *VAR_4) {



  VAR_13 = *VAR_4 - VAR_18 - VAR_19 + 1;
  VAR_14 = VAR_18 + VAR_19 - 1;
  FUNC_8(&VAR_13, &VAR_5[(VAR_18 + VAR_19) * VAR_9 + 1], VAR_6, &VAR_18, &VAR_14, &
   VAR_7[1], &VAR_0);



  VAR_13 = *VAR_4 - VAR_18 - VAR_19 + 1;
  FUNC_4("Left", "Lower", "No transpose", "Unit", &VAR_19, &VAR_13, &
   VAR_1, &VAR_5[VAR_18 + VAR_18 * VAR_9], VAR_6, &VAR_5[VAR_18 + (VAR_18 + VAR_19) *
   VAR_9], VAR_6);
  if (VAR_18 + VAR_19 <= *VAR_3) {



      VAR_13 = *VAR_3 - VAR_18 - VAR_19 + 1;
      VAR_14 = *VAR_4 - VAR_18 - VAR_19 + 1;
      VAR_16 = -1., VAR_16 = -0.;
      FUNC_6("No transpose", "No transpose", &VAR_13, &VAR_14, &VAR_19,
       &VAR_16, &VAR_5[VAR_18 + VAR_19 + VAR_18 * VAR_9], VAR_6, &VAR_5[VAR_18 + (VAR_18 +
       VAR_19) * VAR_9], VAR_6, &VAR_1, &VAR_5[VAR_18 + VAR_19 + (VAR_18 + VAR_19) *
        VAR_9], VAR_6);
  }
     }

 }
    }
    return 0;



}

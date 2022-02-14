
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ logical ;
typedef int integer ;
typedef int doublereal ;
struct TYPE_10__ {scalar_t__ i; scalar_t__ r; } ;
typedef TYPE_1__ doublecomplex ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int *,TYPE_1__*,TYPE_1__*) ;

int FUNC_3(char *VAR_1, integer *VAR_2, doublecomplex *VAR_3,
 integer *VAR_4, doublecomplex *VAR_5, integer *VAR_6, integer *VAR_7, integer *
 VAR_8, integer *VAR_9)
{

    integer VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    doublecomplex VAR_17;


    static integer VAR_18, VAR_19, VAR_20, VAR_21;
    static doublereal VAR_22;
    static doublecomplex VAR_23, VAR_24, VAR_25, VAR_26;
    extern int FUNC_4(integer *, doublecomplex *, integer *,
     doublecomplex *, integer *, doublereal *, doublecomplex *);
    extern logical FUNC_5(char *, char *);
    static logical VAR_27;
    extern int FUNC_6(char *, integer *), FUNC_2(
     doublecomplex *, doublecomplex *, doublereal *, doublecomplex *,
     doublecomplex *);
    VAR_12 = *VAR_4;
    VAR_13 = 1 + VAR_12;
    VAR_3 -= VAR_13;
    VAR_10 = *VAR_6;
    VAR_11 = 1 + VAR_10;
    VAR_5 -= VAR_11;


    *VAR_9 = 0;
    VAR_27 = FUNC_5(VAR_1, "V");
    if (! FUNC_5(VAR_1, "N") && ! VAR_27) {
 *VAR_9 = -1;
    } else if (*VAR_2 < 0) {
 *VAR_9 = -2;
    } else if (*VAR_4 < FUNC_1(1,*VAR_2)) {
 *VAR_9 = -4;
    } else if (*VAR_6 < 1 || VAR_27 && *VAR_6 < FUNC_1(1,*VAR_2)) {
 *VAR_9 = -6;
    } else if (*VAR_7 < 1 || *VAR_7 > *VAR_2) {
 *VAR_9 = -7;
    } else if (*VAR_8 < 1 || *VAR_8 > *VAR_2) {
 *VAR_9 = -8;
    }
    if (*VAR_9 != 0) {
 VAR_14 = -(*VAR_9);
 FUNC_6("ZTREXC", &VAR_14);
 return 0;
    }



    if (*VAR_2 == 1 || *VAR_7 == *VAR_8) {
 return 0;
    }

    if (*VAR_7 < *VAR_8) {



 VAR_19 = 0;
 VAR_20 = -1;
 VAR_21 = 1;
    } else {



 VAR_19 = -1;
 VAR_20 = 0;
 VAR_21 = -1;
    }

    VAR_14 = *VAR_8 + VAR_20;
    VAR_15 = VAR_21;
    for (VAR_18 = *VAR_7 + VAR_19; VAR_15 < 0 ? VAR_18 >= VAR_14 : VAR_18 <= VAR_14; VAR_18 += VAR_15) {



 VAR_16 = VAR_18 + VAR_18 * VAR_12;
 VAR_23 = VAR_3[VAR_16].r, VAR_23 = VAR_3[VAR_16].i;
 VAR_16 = VAR_18 + 1 + (VAR_18 + 1) * VAR_12;
 VAR_24 = VAR_3[VAR_16].r, VAR_24 = VAR_3[VAR_16].i;



 VAR_17 = VAR_24 - VAR_23, VAR_17 = VAR_24 - VAR_23;
 FUNC_2(&VAR_3[VAR_18 + (VAR_18 + 1) * VAR_12], &VAR_17, &VAR_22, &VAR_25, &VAR_26);



 if (VAR_18 + 2 <= *VAR_2) {
     VAR_16 = *VAR_2 - VAR_18 - 1;
     FUNC_4(&VAR_16, &VAR_3[VAR_18 + (VAR_18 + 2) * VAR_12], VAR_4, &VAR_3[VAR_18 + 1 + (VAR_18 + 2) *
      VAR_12], VAR_4, &VAR_22, &VAR_25);
 }
 VAR_16 = VAR_18 - 1;
 FUNC_0(&VAR_17, &VAR_25);
 FUNC_4(&VAR_16, &VAR_3[VAR_18 * VAR_12 + 1], &VAR_0, &VAR_3[(VAR_18 + 1) * VAR_12 + 1], &
  VAR_0, &VAR_22, &VAR_17);

 VAR_16 = VAR_18 + VAR_18 * VAR_12;
 VAR_3[VAR_16].r = VAR_24, VAR_3[VAR_16].i = VAR_24;
 VAR_16 = VAR_18 + 1 + (VAR_18 + 1) * VAR_12;
 VAR_3[VAR_16].r = VAR_23, VAR_3[VAR_16].i = VAR_23;

 if (VAR_27) {



     FUNC_0(&VAR_17, &VAR_25);
     FUNC_4(VAR_2, &VAR_5[VAR_18 * VAR_10 + 1], &VAR_0, &VAR_5[(VAR_18 + 1) * VAR_10 + 1], &
      VAR_0, &VAR_22, &VAR_17);
 }


    }

    return 0;



}

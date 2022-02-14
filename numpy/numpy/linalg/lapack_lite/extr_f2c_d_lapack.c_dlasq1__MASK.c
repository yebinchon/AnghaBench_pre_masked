
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int doublereal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int*,int*,int*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;

int FUNC_4(integer *VAR_5, doublereal *VAR_6, doublereal *VAR_7,
 doublereal *VAR_8, integer *VAR_9)
{

    integer VAR_10, VAR_11;
    doublereal VAR_12, VAR_13, VAR_14;


    static integer VAR_15;
    static doublereal VAR_16;
    extern int FUNC_5(doublereal *, doublereal *, doublereal
     *, doublereal *, doublereal *);
    static doublereal VAR_17;
    static integer VAR_18;
    static doublereal VAR_19;
    extern int FUNC_0(integer *, doublereal *, integer *,
     doublereal *, integer *);
    static doublereal VAR_20;
    extern int FUNC_0(integer *, doublereal *, integer *);

    extern int FUNC_0(char *, integer *, integer *,
     doublereal *, doublereal *, integer *, integer *, doublereal *,
     integer *, integer *);
    static doublereal VAR_21;
    extern int FUNC_6(char *, integer *), FUNC_1(
     char *, integer *, doublereal *, integer *);
    --VAR_8;
    --VAR_7;
    --VAR_6;


    *VAR_9 = 0;
    if (*VAR_5 < 0) {
 *VAR_9 = -2;
 VAR_10 = -(*VAR_9);
 FUNC_6("DLASQ1", &VAR_10);
 return 0;
    } else if (*VAR_5 == 0) {
 return 0;
    } else if (*VAR_5 == 1) {
 VAR_6[1] = FUNC_0(VAR_6[1]);
 return 0;
    } else if (*VAR_5 == 2) {
 FUNC_5(&VAR_6[1], &VAR_7[1], &VAR_6[2], &VAR_19, &VAR_20);
 VAR_6[1] = VAR_20;
 VAR_6[2] = VAR_19;
 return 0;
    }



    VAR_20 = 0.;
    VAR_10 = *VAR_5 - 1;
    for (VAR_15 = 1; VAR_15 <= VAR_10; ++VAR_15) {
 VAR_6[VAR_15] = (VAR_12 = VAR_6[VAR_15], FUNC_0(VAR_12));

 VAR_13 = VAR_20, VAR_14 = (VAR_12 = VAR_7[VAR_15], FUNC_0(VAR_12));
 VAR_20 = FUNC_2(VAR_13,VAR_14);

    }
    VAR_6[*VAR_5] = (VAR_12 = VAR_6[*VAR_5], FUNC_0(VAR_12));



    if (VAR_20 == 0.) {
 FUNC_1("D", VAR_5, &VAR_6[1], &VAR_18);
 return 0;
    }

    VAR_10 = *VAR_5;
    for (VAR_15 = 1; VAR_15 <= VAR_10; ++VAR_15) {

 VAR_12 = VAR_20, VAR_13 = VAR_6[VAR_15];
 VAR_20 = FUNC_2(VAR_12,VAR_13);

    }






    VAR_16 = VAR_0;
    VAR_21 = VAR_1;
    VAR_17 = FUNC_3(VAR_16 / VAR_21);
    FUNC_0(VAR_5, &VAR_6[1], &VAR_3, &VAR_8[1], &VAR_4);
    VAR_10 = *VAR_5 - 1;
    FUNC_0(&VAR_10, &VAR_7[1], &VAR_3, &VAR_8[2], &VAR_4);
    VAR_10 = (*VAR_5 << 1) - 1;
    VAR_11 = (*VAR_5 << 1) - 1;
    FUNC_0("G", &VAR_2, &VAR_2, &VAR_20, &VAR_17, &VAR_10, &VAR_3, &VAR_8[1], &VAR_11,
     &VAR_18);



    VAR_10 = (*VAR_5 << 1) - 1;
    for (VAR_15 = 1; VAR_15 <= VAR_10; ++VAR_15) {

 VAR_12 = VAR_8[VAR_15];
 VAR_8[VAR_15] = VAR_12 * VAR_12;

    }
    VAR_8[*VAR_5 * 2] = 0.;

    FUNC_0(VAR_5, &VAR_8[1], VAR_9);

    if (*VAR_9 == 0) {
 VAR_10 = *VAR_5;
 for (VAR_15 = 1; VAR_15 <= VAR_10; ++VAR_15) {
     VAR_6[VAR_15] = FUNC_3(VAR_8[VAR_15]);

 }
 FUNC_0("G", &VAR_2, &VAR_2, &VAR_17, &VAR_20, VAR_5, &VAR_3, &VAR_6[1], VAR_5, &
  VAR_18);
    }

    return 0;



}

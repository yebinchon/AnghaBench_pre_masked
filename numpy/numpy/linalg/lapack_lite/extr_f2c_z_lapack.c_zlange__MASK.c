
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* logical ;
typedef int integer ;
typedef int doublereal ;
typedef int doublecomplex ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

doublereal FUNC_4(char *VAR_1, integer *VAR_2, integer *VAR_3, doublecomplex *VAR_4,
 integer *VAR_5, doublereal *VAR_6)
{

    integer VAR_7, VAR_8, VAR_9, VAR_10;
    doublereal VAR_11, VAR_12, VAR_13;


    static integer VAR_14, VAR_15;
    static doublereal VAR_16, VAR_17;
    extern logical FUNC_5(char *, char *);
    static doublereal VAR_18;
    extern int FUNC_6(integer *, doublecomplex *, integer *,
      doublereal *, doublereal *);
    VAR_7 = *VAR_5;
    VAR_8 = 1 + VAR_7;
    VAR_4 -= VAR_8;
    --VAR_6;


    if (FUNC_1(*VAR_2,*VAR_3) == 0) {
 VAR_18 = 0.;
    } else if (FUNC_5(VAR_1, "M")) {



 VAR_18 = 0.;
 VAR_9 = *VAR_3;
 for (VAR_15 = 1; VAR_15 <= VAR_9; ++VAR_15) {
     VAR_10 = *VAR_2;
     for (VAR_14 = 1; VAR_14 <= VAR_10; ++VAR_14) {

  VAR_12 = VAR_18, VAR_13 = FUNC_3(&VAR_4[VAR_14 + VAR_15 * VAR_7]);
  VAR_18 = FUNC_0(VAR_12,VAR_13);

     }

 }
    } else if (FUNC_5(VAR_1, "O") || *(unsigned char *)
     VAR_1 == '1') {



 VAR_18 = 0.;
 VAR_9 = *VAR_3;
 for (VAR_15 = 1; VAR_15 <= VAR_9; ++VAR_15) {
     VAR_16 = 0.;
     VAR_10 = *VAR_2;
     for (VAR_14 = 1; VAR_14 <= VAR_10; ++VAR_14) {
  VAR_16 += FUNC_3(&VAR_4[VAR_14 + VAR_15 * VAR_7]);

     }
     VAR_18 = FUNC_0(VAR_18,VAR_16);

 }
    } else if (FUNC_5(VAR_1, "I")) {



 VAR_9 = *VAR_2;
 for (VAR_14 = 1; VAR_14 <= VAR_9; ++VAR_14) {
     VAR_6[VAR_14] = 0.;

 }
 VAR_9 = *VAR_3;
 for (VAR_15 = 1; VAR_15 <= VAR_9; ++VAR_15) {
     VAR_10 = *VAR_2;
     for (VAR_14 = 1; VAR_14 <= VAR_10; ++VAR_14) {
  VAR_6[VAR_14] += FUNC_3(&VAR_4[VAR_14 + VAR_15 * VAR_7]);

     }

 }
 VAR_18 = 0.;
 VAR_9 = *VAR_2;
 for (VAR_14 = 1; VAR_14 <= VAR_9; ++VAR_14) {

     VAR_12 = VAR_18, VAR_13 = VAR_6[VAR_14];
     VAR_18 = FUNC_0(VAR_12,VAR_13);

 }
    } else if (FUNC_5(VAR_1, "F") || FUNC_5(VAR_1, "E")) {



 VAR_17 = 0.;
 VAR_16 = 1.;
 VAR_9 = *VAR_3;
 for (VAR_15 = 1; VAR_15 <= VAR_9; ++VAR_15) {
     FUNC_6(VAR_2, &VAR_4[VAR_15 * VAR_7 + 1], &VAR_0, &VAR_17, &VAR_16);

 }
 VAR_18 = VAR_17 * FUNC_2(VAR_16);
    }

    VAR_11 = VAR_18;
    return VAR_11;



}

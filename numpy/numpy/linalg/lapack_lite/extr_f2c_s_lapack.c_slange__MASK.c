
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef void* logical ;
typedef int integer ;
typedef float doublereal ;


 int VAR_0 ;
 int FUNC_0 (float) ;
 float FUNC_1 (float,float) ;
 scalar_t__ FUNC_2 (int,int) ;
 float FUNC_3 (float) ;

doublereal FUNC_4(char *VAR_1, integer *VAR_2, integer *VAR_3, real *VAR_4, integer *VAR_5,
 real *VAR_6)
{

    integer VAR_7, VAR_8, VAR_9, VAR_10;
    real VAR_11, VAR_12, VAR_13, VAR_14;


    static integer VAR_15, VAR_16;
    static real VAR_17, VAR_18;
    extern logical FUNC_5(char *, char *);
    static real VAR_19;
    extern int FUNC_6(integer *, real *, integer *, real *,
     real *);
    VAR_7 = *VAR_5;
    VAR_8 = 1 + VAR_7;
    VAR_4 -= VAR_8;
    --VAR_6;


    if (FUNC_2(*VAR_2,*VAR_3) == 0) {
 VAR_19 = 0.f;
    } else if (FUNC_5(VAR_1, "M")) {



 VAR_19 = 0.f;
 VAR_9 = *VAR_3;
 for (VAR_16 = 1; VAR_16 <= VAR_9; ++VAR_16) {
     VAR_10 = *VAR_2;
     for (VAR_15 = 1; VAR_15 <= VAR_10; ++VAR_15) {

  VAR_13 = VAR_19, VAR_14 = (VAR_12 = VAR_4[VAR_15 + VAR_16 * VAR_7], FUNC_0(VAR_12));
  VAR_19 = FUNC_1(VAR_13,VAR_14);

     }

 }
    } else if (FUNC_5(VAR_1, "O") || *(unsigned char *)
     VAR_1 == '1') {



 VAR_19 = 0.f;
 VAR_9 = *VAR_3;
 for (VAR_16 = 1; VAR_16 <= VAR_9; ++VAR_16) {
     VAR_17 = 0.f;
     VAR_10 = *VAR_2;
     for (VAR_15 = 1; VAR_15 <= VAR_10; ++VAR_15) {
  VAR_17 += (VAR_12 = VAR_4[VAR_15 + VAR_16 * VAR_7], FUNC_0(VAR_12));

     }
     VAR_19 = FUNC_1(VAR_19,VAR_17);

 }
    } else if (FUNC_5(VAR_1, "I")) {



 VAR_9 = *VAR_2;
 for (VAR_15 = 1; VAR_15 <= VAR_9; ++VAR_15) {
     VAR_6[VAR_15] = 0.f;

 }
 VAR_9 = *VAR_3;
 for (VAR_16 = 1; VAR_16 <= VAR_9; ++VAR_16) {
     VAR_10 = *VAR_2;
     for (VAR_15 = 1; VAR_15 <= VAR_10; ++VAR_15) {
  VAR_6[VAR_15] += (VAR_12 = VAR_4[VAR_15 + VAR_16 * VAR_7], FUNC_0(VAR_12));

     }

 }
 VAR_19 = 0.f;
 VAR_9 = *VAR_2;
 for (VAR_15 = 1; VAR_15 <= VAR_9; ++VAR_15) {

     VAR_12 = VAR_19, VAR_13 = VAR_6[VAR_15];
     VAR_19 = FUNC_1(VAR_12,VAR_13);

 }
    } else if (FUNC_5(VAR_1, "F") || FUNC_5(VAR_1, "E")) {



 VAR_18 = 0.f;
 VAR_17 = 1.f;
 VAR_9 = *VAR_3;
 for (VAR_16 = 1; VAR_16 <= VAR_9; ++VAR_16) {
     FUNC_6(VAR_2, &VAR_4[VAR_16 * VAR_7 + 1], &VAR_0, &VAR_18, &VAR_17);

 }
 VAR_19 = VAR_18 * FUNC_3(VAR_17);
    }

    VAR_11 = VAR_19;
    return VAR_11;



}

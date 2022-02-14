
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef scalar_t__ logical ;
typedef int integer ;


 int VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 int FUNC_0 (int*,int*,float*,int*) ;

int FUNC_1(char *VAR_3, integer *VAR_4, integer *VAR_5, real *VAR_6,
 integer *VAR_7, real *VAR_8, real *VAR_9, integer *VAR_10, real *VAR_11)
{

    integer VAR_12, VAR_13;
    real VAR_14;


    static integer VAR_15;
    static logical VAR_16;
    extern int FUNC_2(integer *, integer *, real *, real *,
     integer *, real *, integer *, real *, integer *);
    extern logical FUNC_3(char *, char *);
    static integer VAR_17;
    extern int FUNC_4(char *, integer *, integer *, real *,
     real *, integer *, real *, integer *, real *, real *, integer *);
    static integer VAR_18;
    extern integer FUNC_5(integer *, integer *, real *, integer *), FUNC_0(
     integer *, integer *, real *, integer *);
    --VAR_6;
    VAR_12 = *VAR_10;
    VAR_13 = 1 + VAR_12;
    VAR_9 -= VAR_13;
    --VAR_11;


    VAR_16 = FUNC_3(VAR_3, "L");
    VAR_18 = 0;
    VAR_17 = 0;
    if (*VAR_8 != 0.f) {




 if (VAR_16) {
     VAR_18 = *VAR_4;
 } else {
     VAR_18 = *VAR_5;
 }
 if (*VAR_7 > 0) {
     VAR_15 = (VAR_18 - 1) * *VAR_7 + 1;
 } else {
     VAR_15 = 1;
 }

 while(VAR_18 > 0 && VAR_6[VAR_15] == 0.f) {
     --VAR_18;
     VAR_15 -= *VAR_7;
 }
 if (VAR_16) {

     VAR_17 = FUNC_5(&VAR_18, VAR_5, &VAR_9[VAR_13], VAR_10);
 } else {

     VAR_17 = FUNC_0(VAR_4, &VAR_18, &VAR_9[VAR_13], VAR_10);
 }
    }




    if (VAR_16) {



 if (VAR_18 > 0) {



     FUNC_4("Transpose", &VAR_18, &VAR_17, &VAR_1, &VAR_9[VAR_13], VAR_10, &
      VAR_6[1], VAR_7, &VAR_2, &VAR_11[1], &VAR_0);



     VAR_14 = -(*VAR_8);
     FUNC_2(&VAR_18, &VAR_17, &VAR_14, &VAR_6[1], VAR_7, &VAR_11[1], &VAR_0, &VAR_9[
      VAR_13], VAR_10);
 }
    } else {



 if (VAR_18 > 0) {



     FUNC_4("No transpose", &VAR_17, &VAR_18, &VAR_1, &VAR_9[VAR_13],
      VAR_10, &VAR_6[1], VAR_7, &VAR_2, &VAR_11[1], &VAR_0);



     VAR_14 = -(*VAR_8);
     FUNC_2(&VAR_17, &VAR_18, &VAR_14, &VAR_11[1], &VAR_0, &VAR_6[1], VAR_7, &VAR_9[
      VAR_13], VAR_10);
 }
    }
    return 0;



}

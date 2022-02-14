
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;
typedef void* logical ;
typedef scalar_t__ integer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__*) ;

int FUNC_2(char *VAR_3, integer *VAR_4, integer *VAR_5, real *VAR_6,
 integer *VAR_7, integer *VAR_8, real *VAR_9, integer *VAR_10, integer *VAR_11)
{

    integer VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;


    extern logical FUNC_3(char *, char *);
    extern int FUNC_4(char *, char *, char *, char *,
     integer *, integer *, real *, real *, integer *, real *, integer *
     ), FUNC_1(char *, integer *);
    static logical VAR_17;
    extern int FUNC_5(integer *, real *, integer *, integer
     *, integer *, integer *, integer *);
    VAR_12 = *VAR_7;
    VAR_13 = 1 + VAR_12;
    VAR_6 -= VAR_13;
    --VAR_8;
    VAR_14 = *VAR_10;
    VAR_15 = 1 + VAR_14;
    VAR_9 -= VAR_15;


    *VAR_11 = 0;
    VAR_17 = FUNC_3(VAR_3, "N");
    if (! VAR_17 && ! FUNC_3(VAR_3, "T") && ! FUNC_3(
     VAR_3, "C")) {
 *VAR_11 = -1;
    } else if (*VAR_4 < 0) {
 *VAR_11 = -2;
    } else if (*VAR_5 < 0) {
 *VAR_11 = -3;
    } else if (*VAR_7 < FUNC_0(1,*VAR_4)) {
 *VAR_11 = -5;
    } else if (*VAR_10 < FUNC_0(1,*VAR_4)) {
 *VAR_11 = -8;
    }
    if (*VAR_11 != 0) {
 VAR_16 = -(*VAR_11);
 FUNC_1("SGETRS", &VAR_16);
 return 0;
    }



    if (*VAR_4 == 0 || *VAR_5 == 0) {
 return 0;
    }

    if (VAR_17) {







 FUNC_5(VAR_5, &VAR_9[VAR_15], VAR_10, &VAR_0, VAR_4, &VAR_8[1], &VAR_0);



 FUNC_4("Left", "Lower", "No transpose", "Unit", VAR_4, VAR_5, &VAR_1, &VAR_6[
  VAR_13], VAR_7, &VAR_9[VAR_15], VAR_10);



 FUNC_4("Left", "Upper", "No transpose", "Non-unit", VAR_4, VAR_5, &VAR_1, &
  VAR_6[VAR_13], VAR_7, &VAR_9[VAR_15], VAR_10);
    } else {







 FUNC_4("Left", "Upper", "Transpose", "Non-unit", VAR_4, VAR_5, &VAR_1, &VAR_6[
  VAR_13], VAR_7, &VAR_9[VAR_15], VAR_10);



 FUNC_4("Left", "Lower", "Transpose", "Unit", VAR_4, VAR_5, &VAR_1, &VAR_6[
  VAR_13], VAR_7, &VAR_9[VAR_15], VAR_10);



 FUNC_5(VAR_5, &VAR_9[VAR_15], VAR_10, &VAR_0, VAR_4, &VAR_8[1], &VAR_2);
    }

    return 0;



}

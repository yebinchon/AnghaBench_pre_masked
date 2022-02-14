
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* logical ;
typedef scalar_t__ integer ;
typedef int doublecomplex ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__*,int *,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (char*,char*,scalar_t__*,int *,scalar_t__*,scalar_t__*) ;

int FUNC_3(char *VAR_0, integer *VAR_1, doublecomplex *VAR_2,
 integer *VAR_3, integer *VAR_4)
{

    integer VAR_5, VAR_6, VAR_7;


    extern logical FUNC_4(char *, char *);
    extern int FUNC_5(char *, integer *), FUNC_1(
     char *, integer *, doublecomplex *, integer *, integer *),
      FUNC_2(char *, char *, integer *, doublecomplex *, integer *,
     integer *);
    VAR_5 = *VAR_3;
    VAR_6 = 1 + VAR_5;
    VAR_2 -= VAR_6;


    *VAR_4 = 0;
    if (! FUNC_4(VAR_0, "U") && ! FUNC_4(VAR_0, "L")) {
 *VAR_4 = -1;
    } else if (*VAR_1 < 0) {
 *VAR_4 = -2;
    } else if (*VAR_3 < FUNC_0(1,*VAR_1)) {
 *VAR_4 = -4;
    }
    if (*VAR_4 != 0) {
 VAR_7 = -(*VAR_4);
 FUNC_5("ZPOTRI", &VAR_7);
 return 0;
    }



    if (*VAR_1 == 0) {
 return 0;
    }



    FUNC_2(VAR_0, "Non-unit", VAR_1, &VAR_2[VAR_6], VAR_3, VAR_4);
    if (*VAR_4 > 0) {
 return 0;
    }



    FUNC_1(VAR_0, VAR_1, &VAR_2[VAR_6], VAR_3, VAR_4);

    return 0;



}

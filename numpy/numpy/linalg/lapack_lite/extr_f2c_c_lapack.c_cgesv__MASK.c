
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ integer ;
typedef int complex ;


 int FUNC_0 (char*,scalar_t__*,scalar_t__*,int *,scalar_t__*,scalar_t__*,int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__*) ;

int FUNC_3(integer *VAR_0, integer *VAR_1, complex *VAR_2, integer *
 VAR_3, integer *VAR_4, complex *VAR_5, integer *VAR_6, integer *VAR_7)
{

    integer VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;


    extern int FUNC_0(integer *, integer *, complex *,
     integer *, integer *, integer *), FUNC_2(char *, integer *), FUNC_0(char *, integer *, integer *, complex *, integer
     *, integer *, complex *, integer *, integer *);
    VAR_8 = *VAR_3;
    VAR_9 = 1 + VAR_8;
    VAR_2 -= VAR_9;
    --VAR_4;
    VAR_10 = *VAR_6;
    VAR_11 = 1 + VAR_10;
    VAR_5 -= VAR_11;


    *VAR_7 = 0;
    if (*VAR_0 < 0) {
 *VAR_7 = -1;
    } else if (*VAR_1 < 0) {
 *VAR_7 = -2;
    } else if (*VAR_3 < FUNC_1(1,*VAR_0)) {
 *VAR_7 = -4;
    } else if (*VAR_6 < FUNC_1(1,*VAR_0)) {
 *VAR_7 = -7;
    }
    if (*VAR_7 != 0) {
 VAR_12 = -(*VAR_7);
 FUNC_2("CGESV ", &VAR_12);
 return 0;
    }



    FUNC_0(VAR_0, VAR_0, &VAR_2[VAR_9], VAR_3, &VAR_4[1], VAR_7);
    if (*VAR_7 == 0) {



 FUNC_0("No transpose", VAR_0, VAR_1, &VAR_2[VAR_9], VAR_3, &VAR_4[1], &VAR_5[
  VAR_11], VAR_6, VAR_7);
    }
    return 0;



}

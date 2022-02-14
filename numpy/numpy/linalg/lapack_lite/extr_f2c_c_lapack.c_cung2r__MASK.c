
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int integer ;
struct TYPE_9__ {float r; float i; } ;
typedef TYPE_1__ complex ;


 int VAR_0 ;
 int FUNC_0 (char*,int*,int*,TYPE_1__*,int*,TYPE_1__*,TYPE_1__*,int*,TYPE_1__*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int*) ;

int FUNC_3(integer *VAR_1, integer *VAR_2, integer *VAR_3, complex *VAR_4,
 integer *VAR_5, complex *VAR_6, complex *VAR_7, integer *VAR_8)
{

    integer VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    complex VAR_14;


    static integer VAR_15, VAR_16, VAR_17;
    extern int FUNC_4(integer *, complex *, complex *,
     integer *), FUNC_0(char *, integer *, integer *, complex *,
     integer *, complex *, complex *, integer *, complex *),
     FUNC_2(char *, integer *);
    VAR_9 = *VAR_5;
    VAR_10 = 1 + VAR_9;
    VAR_4 -= VAR_10;
    --VAR_6;
    --VAR_7;


    *VAR_8 = 0;
    if (*VAR_1 < 0) {
 *VAR_8 = -1;
    } else if (*VAR_2 < 0 || *VAR_2 > *VAR_1) {
 *VAR_8 = -2;
    } else if (*VAR_3 < 0 || *VAR_3 > *VAR_2) {
 *VAR_8 = -3;
    } else if (*VAR_5 < FUNC_1(1,*VAR_1)) {
 *VAR_8 = -5;
    }
    if (*VAR_8 != 0) {
 VAR_11 = -(*VAR_8);
 FUNC_2("CUNG2R", &VAR_11);
 return 0;
    }



    if (*VAR_2 <= 0) {
 return 0;
    }



    VAR_11 = *VAR_2;
    for (VAR_16 = *VAR_3 + 1; VAR_16 <= VAR_11; ++VAR_16) {
 VAR_12 = *VAR_1;
 for (VAR_17 = 1; VAR_17 <= VAR_12; ++VAR_17) {
     VAR_13 = VAR_17 + VAR_16 * VAR_9;
     VAR_4[VAR_13].r = 0.f, VAR_4[VAR_13].i = 0.f;

 }
 VAR_12 = VAR_16 + VAR_16 * VAR_9;
 VAR_4[VAR_12].r = 1.f, VAR_4[VAR_12].i = 0.f;

    }

    for (VAR_15 = *VAR_3; VAR_15 >= 1; --VAR_15) {



 if (VAR_15 < *VAR_2) {
     VAR_11 = VAR_15 + VAR_15 * VAR_9;
     VAR_4[VAR_11].r = 1.f, VAR_4[VAR_11].i = 0.f;
     VAR_11 = *VAR_1 - VAR_15 + 1;
     VAR_12 = *VAR_2 - VAR_15;
     FUNC_0("Left", &VAR_11, &VAR_12, &VAR_4[VAR_15 + VAR_15 * VAR_9], &VAR_0, &VAR_6[
      VAR_15], &VAR_4[VAR_15 + (VAR_15 + 1) * VAR_9], VAR_5, &VAR_7[1]);
 }
 if (VAR_15 < *VAR_1) {
     VAR_11 = *VAR_1 - VAR_15;
     VAR_12 = VAR_15;
     VAR_14 = -VAR_6[VAR_12].r, VAR_14 = -VAR_6[VAR_12].i;
     FUNC_4(&VAR_11, &VAR_14, &VAR_4[VAR_15 + 1 + VAR_15 * VAR_9], &VAR_0);
 }
 VAR_11 = VAR_15 + VAR_15 * VAR_9;
 VAR_12 = VAR_15;
 VAR_14 = 1.f - VAR_6[VAR_12].r, VAR_14 = 0.f - VAR_6[VAR_12].i;
 VAR_4[VAR_11].r = VAR_14, VAR_4[VAR_11].i = VAR_14;



 VAR_11 = VAR_15 - 1;
 for (VAR_17 = 1; VAR_17 <= VAR_11; ++VAR_17) {
     VAR_12 = VAR_17 + VAR_15 * VAR_9;
     VAR_4[VAR_12].r = 0.f, VAR_4[VAR_12].i = 0.f;

 }

    }
    return 0;



}

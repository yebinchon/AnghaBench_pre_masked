
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int integer ;
struct TYPE_9__ {float r; float i; } ;
typedef TYPE_1__ complex ;


 int FUNC_0 (int*,TYPE_1__*,int*) ;
 int FUNC_1 (int*,TYPE_1__*,TYPE_1__*,int*,TYPE_1__*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int*) ;

int FUNC_5(integer *VAR_0, integer *VAR_1, complex *VAR_2, integer *VAR_3,
  complex *VAR_4, complex *VAR_5, integer *VAR_6)
{

    integer VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;


    static integer VAR_12, VAR_13;
    static complex VAR_14;
    extern int FUNC_6(char *, integer *, integer *, complex *
     , integer *, complex *, complex *, integer *, complex *),
     FUNC_1(integer *, complex *, complex *, integer *, complex *),
     FUNC_0(integer *, complex *, integer *), FUNC_4(char *, integer
     *);
    VAR_7 = *VAR_3;
    VAR_8 = 1 + VAR_7;
    VAR_2 -= VAR_8;
    --VAR_4;
    --VAR_5;


    *VAR_6 = 0;
    if (*VAR_0 < 0) {
 *VAR_6 = -1;
    } else if (*VAR_1 < 0) {
 *VAR_6 = -2;
    } else if (*VAR_3 < FUNC_2(1,*VAR_0)) {
 *VAR_6 = -4;
    }
    if (*VAR_6 != 0) {
 VAR_9 = -(*VAR_6);
 FUNC_4("CGELQ2", &VAR_9);
 return 0;
    }

    VAR_13 = FUNC_3(*VAR_0,*VAR_1);

    VAR_9 = VAR_13;
    for (VAR_12 = 1; VAR_12 <= VAR_9; ++VAR_12) {



 VAR_10 = *VAR_1 - VAR_12 + 1;
 FUNC_0(&VAR_10, &VAR_2[VAR_12 + VAR_12 * VAR_7], VAR_3);
 VAR_10 = VAR_12 + VAR_12 * VAR_7;
 VAR_14.r = VAR_2[VAR_10].r, VAR_14.i = VAR_2[VAR_10].i;
 VAR_10 = *VAR_1 - VAR_12 + 1;

 VAR_11 = VAR_12 + 1;
 FUNC_1(&VAR_10, &VAR_14, &VAR_2[VAR_12 + FUNC_3(VAR_11,*VAR_1) * VAR_7], VAR_3, &VAR_4[VAR_12]
  );
 if (VAR_12 < *VAR_0) {



     VAR_10 = VAR_12 + VAR_12 * VAR_7;
     VAR_2[VAR_10].r = 1.f, VAR_2[VAR_10].i = 0.f;
     VAR_10 = *VAR_0 - VAR_12;
     VAR_11 = *VAR_1 - VAR_12 + 1;
     FUNC_6("Right", &VAR_10, &VAR_11, &VAR_2[VAR_12 + VAR_12 * VAR_7], VAR_3, &VAR_4[
      VAR_12], &VAR_2[VAR_12 + 1 + VAR_12 * VAR_7], VAR_3, &VAR_5[1]);
 }
 VAR_10 = VAR_12 + VAR_12 * VAR_7;
 VAR_2[VAR_10].r = VAR_14.r, VAR_2[VAR_10].i = VAR_14.i;
 VAR_10 = *VAR_1 - VAR_12 + 1;
 FUNC_0(&VAR_10, &VAR_2[VAR_12 + VAR_12 * VAR_7], VAR_3);

    }
    return 0;



}

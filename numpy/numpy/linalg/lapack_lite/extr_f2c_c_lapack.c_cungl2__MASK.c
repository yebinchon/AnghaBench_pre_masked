
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int integer ;
struct TYPE_12__ {float r; float i; } ;
typedef TYPE_1__ complex ;


 int FUNC_0 (int*,TYPE_1__*,int*) ;
 int FUNC_1 (char*,int*,int*,TYPE_1__*,int*,TYPE_1__*,TYPE_1__*,int*,TYPE_1__*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (char*,int*) ;

int FUNC_5(integer *VAR_0, integer *VAR_1, integer *VAR_2, complex *VAR_3,
 integer *VAR_4, complex *VAR_5, complex *VAR_6, integer *VAR_7)
{

    integer VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    complex VAR_13, VAR_14;


    static integer VAR_15, VAR_16, VAR_17;
    extern int FUNC_6(integer *, complex *, complex *,
     integer *), FUNC_1(char *, integer *, integer *, complex *,
     integer *, complex *, complex *, integer *, complex *),
     FUNC_0(integer *, complex *, integer *), FUNC_4(char *, integer
     *);
    VAR_8 = *VAR_4;
    VAR_9 = 1 + VAR_8;
    VAR_3 -= VAR_9;
    --VAR_5;
    --VAR_6;


    *VAR_7 = 0;
    if (*VAR_0 < 0) {
 *VAR_7 = -1;
    } else if (*VAR_1 < *VAR_0) {
 *VAR_7 = -2;
    } else if (*VAR_2 < 0 || *VAR_2 > *VAR_0) {
 *VAR_7 = -3;
    } else if (*VAR_4 < FUNC_2(1,*VAR_0)) {
 *VAR_7 = -5;
    }
    if (*VAR_7 != 0) {
 VAR_10 = -(*VAR_7);
 FUNC_4("CUNGL2", &VAR_10);
 return 0;
    }



    if (*VAR_0 <= 0) {
 return 0;
    }

    if (*VAR_2 < *VAR_0) {



 VAR_10 = *VAR_1;
 for (VAR_16 = 1; VAR_16 <= VAR_10; ++VAR_16) {
     VAR_11 = *VAR_0;
     for (VAR_17 = *VAR_2 + 1; VAR_17 <= VAR_11; ++VAR_17) {
  VAR_12 = VAR_17 + VAR_16 * VAR_8;
  VAR_3[VAR_12].r = 0.f, VAR_3[VAR_12].i = 0.f;

     }
     if (VAR_16 > *VAR_2 && VAR_16 <= *VAR_0) {
  VAR_11 = VAR_16 + VAR_16 * VAR_8;
  VAR_3[VAR_11].r = 1.f, VAR_3[VAR_11].i = 0.f;
     }

 }
    }

    for (VAR_15 = *VAR_2; VAR_15 >= 1; --VAR_15) {



 if (VAR_15 < *VAR_1) {
     VAR_10 = *VAR_1 - VAR_15;
     FUNC_0(&VAR_10, &VAR_3[VAR_15 + (VAR_15 + 1) * VAR_8], VAR_4);
     if (VAR_15 < *VAR_0) {
  VAR_10 = VAR_15 + VAR_15 * VAR_8;
  VAR_3[VAR_10].r = 1.f, VAR_3[VAR_10].i = 0.f;
  VAR_10 = *VAR_0 - VAR_15;
  VAR_11 = *VAR_1 - VAR_15 + 1;
  FUNC_3(&VAR_13, &VAR_5[VAR_15]);
  FUNC_1("Right", &VAR_10, &VAR_11, &VAR_3[VAR_15 + VAR_15 * VAR_8], VAR_4, &
   VAR_13, &VAR_3[VAR_15 + 1 + VAR_15 * VAR_8], VAR_4, &VAR_6[1]);
     }
     VAR_10 = *VAR_1 - VAR_15;
     VAR_11 = VAR_15;
     VAR_13 = -VAR_5[VAR_11].r, VAR_13 = -VAR_5[VAR_11].i;
     FUNC_6(&VAR_10, &VAR_13, &VAR_3[VAR_15 + (VAR_15 + 1) * VAR_8], VAR_4);
     VAR_10 = *VAR_1 - VAR_15;
     FUNC_0(&VAR_10, &VAR_3[VAR_15 + (VAR_15 + 1) * VAR_8], VAR_4);
 }
 VAR_10 = VAR_15 + VAR_15 * VAR_8;
 FUNC_3(&VAR_14, &VAR_5[VAR_15]);
 VAR_13 = 1.f - VAR_14, VAR_13 = 0.f - VAR_14;
 VAR_3[VAR_10].r = VAR_13, VAR_3[VAR_10].i = VAR_13;



 VAR_10 = VAR_15 - 1;
 for (VAR_17 = 1; VAR_17 <= VAR_10; ++VAR_17) {
     VAR_11 = VAR_15 + VAR_17 * VAR_8;
     VAR_3[VAR_11].r = 0.f, VAR_3[VAR_11].i = 0.f;

 }

    }
    return 0;



}

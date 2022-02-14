
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int integer ;
struct TYPE_10__ {float r; float i; } ;
typedef TYPE_1__ complex ;


 int VAR_0 ;
 int FUNC_0 (int*,TYPE_1__*,TYPE_1__*,int*,TYPE_1__*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (char*,int*) ;

int FUNC_5(integer *VAR_1, integer *VAR_2, complex *VAR_3, integer *VAR_4,
  complex *VAR_5, complex *VAR_6, integer *VAR_7)
{

    integer VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    complex VAR_13;


    static integer VAR_14, VAR_15;
    static complex VAR_16;
    extern int FUNC_6(char *, integer *, integer *, complex *
     , integer *, complex *, complex *, integer *, complex *),
     FUNC_0(integer *, complex *, complex *, integer *, complex *),
     FUNC_4(char *, integer *);
    VAR_8 = *VAR_4;
    VAR_9 = 1 + VAR_8;
    VAR_3 -= VAR_9;
    --VAR_5;
    --VAR_6;


    *VAR_7 = 0;
    if (*VAR_1 < 0) {
 *VAR_7 = -1;
    } else if (*VAR_2 < 0) {
 *VAR_7 = -2;
    } else if (*VAR_4 < FUNC_1(1,*VAR_1)) {
 *VAR_7 = -4;
    }
    if (*VAR_7 != 0) {
 VAR_10 = -(*VAR_7);
 FUNC_4("CGEQR2", &VAR_10);
 return 0;
    }

    VAR_15 = FUNC_2(*VAR_1,*VAR_2);

    VAR_10 = VAR_15;
    for (VAR_14 = 1; VAR_14 <= VAR_10; ++VAR_14) {



 VAR_11 = *VAR_1 - VAR_14 + 1;

 VAR_12 = VAR_14 + 1;
 FUNC_0(&VAR_11, &VAR_3[VAR_14 + VAR_14 * VAR_8], &VAR_3[FUNC_2(VAR_12,*VAR_1) + VAR_14 * VAR_8]
  , &VAR_0, &VAR_5[VAR_14]);
 if (VAR_14 < *VAR_2) {



     VAR_11 = VAR_14 + VAR_14 * VAR_8;
     VAR_16.r = VAR_3[VAR_11].r, VAR_16.i = VAR_3[VAR_11].i;
     VAR_11 = VAR_14 + VAR_14 * VAR_8;
     VAR_3[VAR_11].r = 1.f, VAR_3[VAR_11].i = 0.f;
     VAR_11 = *VAR_1 - VAR_14 + 1;
     VAR_12 = *VAR_2 - VAR_14;
     FUNC_3(&VAR_13, &VAR_5[VAR_14]);
     FUNC_6("Left", &VAR_11, &VAR_12, &VAR_3[VAR_14 + VAR_14 * VAR_8], &VAR_0, &VAR_13,
       &VAR_3[VAR_14 + (VAR_14 + 1) * VAR_8], VAR_4, &VAR_6[1]);
     VAR_11 = VAR_14 + VAR_14 * VAR_8;
     VAR_3[VAR_11].r = VAR_16.r, VAR_3[VAR_11].i = VAR_16.i;
 }

    }
    return 0;



}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int integer ;
struct TYPE_6__ {float r; float i; } ;
typedef TYPE_1__ complex ;


 int FUNC_0 (int,int) ;

int FUNC_1(integer *VAR_0, integer *VAR_1, complex *VAR_2, complex *
 VAR_3, integer *VAR_4, complex *VAR_5, integer *VAR_6, complex *VAR_7, integer *VAR_8)
{

    integer VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    complex VAR_16, VAR_17;


    static integer VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    static complex VAR_24;
    extern int FUNC_2(char *, integer *);
    --VAR_3;
    --VAR_5;
    VAR_9 = *VAR_8;
    VAR_10 = 1 + VAR_9;
    VAR_7 -= VAR_10;


    VAR_23 = 0;
    if (*VAR_0 < 0) {
 VAR_23 = 1;
    } else if (*VAR_1 < 0) {
 VAR_23 = 2;
    } else if (*VAR_4 == 0) {
 VAR_23 = 5;
    } else if (*VAR_6 == 0) {
 VAR_23 = 7;
    } else if (*VAR_8 < FUNC_0(1,*VAR_0)) {
 VAR_23 = 9;
    }
    if (VAR_23 != 0) {
 FUNC_2("CGERU ", &VAR_23);
 return 0;
    }



    if (*VAR_0 == 0 || *VAR_1 == 0 || VAR_2->r == 0.f && VAR_2->i == 0.f) {
 return 0;
    }






    if (*VAR_6 > 0) {
 VAR_21 = 1;
    } else {
 VAR_21 = 1 - (*VAR_1 - 1) * *VAR_6;
    }
    if (*VAR_4 == 1) {
 VAR_11 = *VAR_1;
 for (VAR_19 = 1; VAR_19 <= VAR_11; ++VAR_19) {
     VAR_12 = VAR_21;
     if (VAR_5[VAR_12].r != 0.f || VAR_5[VAR_12].i != 0.f) {
  VAR_12 = VAR_21;
  VAR_16 = VAR_2->r * VAR_5[VAR_12].r - VAR_2->i * VAR_5[VAR_12].i, VAR_16 =
    VAR_2->r * VAR_5[VAR_12].i + VAR_2->i * VAR_5[VAR_12].r;
  VAR_24.r = VAR_16, VAR_24.i = VAR_16;
  VAR_12 = *VAR_0;
  for (VAR_18 = 1; VAR_18 <= VAR_12; ++VAR_18) {
      VAR_13 = VAR_18 + VAR_19 * VAR_9;
      VAR_14 = VAR_18 + VAR_19 * VAR_9;
      VAR_15 = VAR_18;
      VAR_17 = VAR_3[VAR_15].r * VAR_24.r - VAR_3[VAR_15].i * VAR_24.i, VAR_17 =
        VAR_3[VAR_15].r * VAR_24.i + VAR_3[VAR_15].i * VAR_24.r;
      VAR_16 = VAR_7[VAR_14].r + VAR_17, VAR_16 = VAR_7[VAR_14].i + VAR_17;
      VAR_7[VAR_13].r = VAR_16, VAR_7[VAR_13].i = VAR_16;

  }
     }
     VAR_21 += *VAR_6;

 }
    } else {
 if (*VAR_4 > 0) {
     VAR_22 = 1;
 } else {
     VAR_22 = 1 - (*VAR_0 - 1) * *VAR_4;
 }
 VAR_11 = *VAR_1;
 for (VAR_19 = 1; VAR_19 <= VAR_11; ++VAR_19) {
     VAR_12 = VAR_21;
     if (VAR_5[VAR_12].r != 0.f || VAR_5[VAR_12].i != 0.f) {
  VAR_12 = VAR_21;
  VAR_16 = VAR_2->r * VAR_5[VAR_12].r - VAR_2->i * VAR_5[VAR_12].i, VAR_16 =
    VAR_2->r * VAR_5[VAR_12].i + VAR_2->i * VAR_5[VAR_12].r;
  VAR_24.r = VAR_16, VAR_24.i = VAR_16;
  VAR_20 = VAR_22;
  VAR_12 = *VAR_0;
  for (VAR_18 = 1; VAR_18 <= VAR_12; ++VAR_18) {
      VAR_13 = VAR_18 + VAR_19 * VAR_9;
      VAR_14 = VAR_18 + VAR_19 * VAR_9;
      VAR_15 = VAR_20;
      VAR_17 = VAR_3[VAR_15].r * VAR_24.r - VAR_3[VAR_15].i * VAR_24.i, VAR_17 =
        VAR_3[VAR_15].r * VAR_24.i + VAR_3[VAR_15].i * VAR_24.r;
      VAR_16 = VAR_7[VAR_14].r + VAR_17, VAR_16 = VAR_7[VAR_14].i + VAR_17;
      VAR_7[VAR_13].r = VAR_16, VAR_7[VAR_13].i = VAR_16;
      VAR_20 += *VAR_4;

  }
     }
     VAR_21 += *VAR_6;

 }
    }

    return 0;



}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef int integer ;


 float FUNC_0 (float) ;
 int FUNC_1 (int,int) ;

int FUNC_2(integer *VAR_0, integer *VAR_1, integer *VAR_2, integer *
 VAR_3, integer *VAR_4, integer *VAR_5, integer *VAR_6)
{

    integer VAR_7, VAR_8;


    static integer VAR_9, VAR_10, VAR_11, VAR_12;
    static real VAR_13;
    static integer VAR_14, VAR_15, VAR_16;
    --VAR_5;
    --VAR_4;
    --VAR_3;


    VAR_12 = FUNC_1(1,*VAR_0);
    VAR_13 = FUNC_0((real) VAR_12 / (real) (*VAR_6 + 1)) / FUNC_0(2.f);
    *VAR_1 = (integer) VAR_13 + 1;

    VAR_9 = *VAR_0 / 2;
    VAR_3[1] = VAR_9 + 1;
    VAR_4[1] = VAR_9;
    VAR_5[1] = *VAR_0 - VAR_9 - 1;
    VAR_10 = 0;
    VAR_11 = 1;
    VAR_15 = 1;
    VAR_7 = *VAR_1 - 1;
    for (VAR_14 = 1; VAR_14 <= VAR_7; ++VAR_14) {






 VAR_8 = VAR_15 - 1;
 for (VAR_9 = 0; VAR_9 <= VAR_8; ++VAR_9) {
     VAR_10 += 2;
     VAR_11 += 2;
     VAR_16 = VAR_15 + VAR_9;
     VAR_4[VAR_10] = VAR_4[VAR_16] / 2;
     VAR_5[VAR_10] = VAR_4[VAR_16] - VAR_4[VAR_10] - 1;
     VAR_3[VAR_10] = VAR_3[VAR_16] - VAR_5[VAR_10] - 1;
     VAR_4[VAR_11] = VAR_5[VAR_16] / 2;
     VAR_5[VAR_11] = VAR_5[VAR_16] - VAR_4[VAR_11] - 1;
     VAR_3[VAR_11] = VAR_3[VAR_16] + VAR_4[VAR_11] + 1;

 }
 VAR_15 <<= 1;

    }
    *VAR_2 = (VAR_15 << 1) - 1;

    return 0;



}

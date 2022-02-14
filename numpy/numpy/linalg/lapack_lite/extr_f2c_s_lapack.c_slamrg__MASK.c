
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ real ;
typedef scalar_t__ integer ;



int FUNC_0(integer *VAR_0, integer *VAR_1, real *VAR_2, integer *
 VAR_3, integer *VAR_4, integer *VAR_5)
{

    integer VAR_6;


    static integer VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    --VAR_5;
    --VAR_2;


    VAR_10 = *VAR_0;
    VAR_11 = *VAR_1;
    if (*VAR_3 > 0) {
 VAR_8 = 1;
    } else {
 VAR_8 = *VAR_0;
    }
    if (*VAR_4 > 0) {
 VAR_9 = *VAR_0 + 1;
    } else {
 VAR_9 = *VAR_0 + *VAR_1;
    }
    VAR_7 = 1;

L10:
    if (VAR_10 > 0 && VAR_11 > 0) {
 if (VAR_2[VAR_8] <= VAR_2[VAR_9]) {
     VAR_5[VAR_7] = VAR_8;
     ++VAR_7;
     VAR_8 += *VAR_3;
     --VAR_10;
 } else {
     VAR_5[VAR_7] = VAR_9;
     ++VAR_7;
     VAR_9 += *VAR_4;
     --VAR_11;
 }
 goto L10;
    }

    if (VAR_10 == 0) {
 VAR_6 = VAR_11;
 for (VAR_10 = 1; VAR_10 <= VAR_6; ++VAR_10) {
     VAR_5[VAR_7] = VAR_9;
     ++VAR_7;
     VAR_9 += *VAR_4;

 }
    } else {

 VAR_6 = VAR_10;
 for (VAR_11 = 1; VAR_11 <= VAR_6; ++VAR_11) {
     VAR_5[VAR_7] = VAR_8;
     ++VAR_7;
     VAR_8 += *VAR_3;

 }
    }

    return 0;



}

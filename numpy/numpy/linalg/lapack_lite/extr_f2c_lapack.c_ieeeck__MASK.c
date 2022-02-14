
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;
typedef scalar_t__ integer ;



integer FUNC_0(integer *VAR_0, real *VAR_1, real *VAR_2)
{

    integer VAR_3;


    static real VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12,
     VAR_13;
    VAR_3 = 1;

    VAR_11 = *VAR_2 / *VAR_1;
    if (VAR_11 <= *VAR_2) {
 VAR_3 = 0;
 return VAR_3;
    }

    VAR_10 = -(*VAR_2) / *VAR_1;
    if (VAR_10 >= *VAR_1) {
 VAR_3 = 0;
 return VAR_3;
    }

    VAR_12 = *VAR_2 / (VAR_10 + *VAR_2);
    if (VAR_12 != *VAR_1) {
 VAR_3 = 0;
 return VAR_3;
    }

    VAR_10 = *VAR_2 / VAR_12;
    if (VAR_10 >= *VAR_1) {
 VAR_3 = 0;
 return VAR_3;
    }

    VAR_13 = VAR_12 + *VAR_1;
    if (VAR_13 != *VAR_1) {
 VAR_3 = 0;
 return VAR_3;
    }

    VAR_11 = *VAR_2 / VAR_13;
    if (VAR_11 <= *VAR_2) {
 VAR_3 = 0;
 return VAR_3;
    }

    VAR_10 *= VAR_11;
    if (VAR_10 >= *VAR_1) {
 VAR_3 = 0;
 return VAR_3;
    }

    VAR_11 *= VAR_11;
    if (VAR_11 <= *VAR_2) {
 VAR_3 = 0;
 return VAR_3;
    }




    if (*VAR_0 == 0) {
 return VAR_3;
    }

    VAR_4 = VAR_11 + VAR_10;

    VAR_5 = VAR_11 / VAR_10;

    VAR_6 = VAR_11 / VAR_11;

    VAR_7 = VAR_11 * *VAR_1;

    VAR_8 = VAR_10 * VAR_12;

    VAR_9 = VAR_8 * *VAR_1;

    if (VAR_4 == VAR_4) {
 VAR_3 = 0;
 return VAR_3;
    }

    if (VAR_5 == VAR_5) {
 VAR_3 = 0;
 return VAR_3;
    }

    if (VAR_6 == VAR_6) {
 VAR_3 = 0;
 return VAR_3;
    }

    if (VAR_7 == VAR_7) {
 VAR_3 = 0;
 return VAR_3;
    }

    if (VAR_8 == VAR_8) {
 VAR_3 = 0;
 return VAR_3;
    }

    if (VAR_9 == VAR_9) {
 VAR_3 = 0;
 return VAR_3;
    }

    return VAR_3;
}

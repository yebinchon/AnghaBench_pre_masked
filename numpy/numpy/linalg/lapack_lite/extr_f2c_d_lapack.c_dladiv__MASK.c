
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int doublereal ;


 scalar_t__ FUNC_0 (int) ;

int FUNC_1(doublereal *VAR_0, doublereal *VAR_1, doublereal *VAR_2,
 doublereal *VAR_3, doublereal *VAR_4, doublereal *VAR_5)
{
    static doublereal VAR_6, VAR_7;
    if (FUNC_0(*VAR_3) < FUNC_0(*VAR_2)) {
 VAR_6 = *VAR_3 / *VAR_2;
 VAR_7 = *VAR_2 + *VAR_3 * VAR_6;
 *VAR_4 = (*VAR_0 + *VAR_1 * VAR_6) / VAR_7;
 *VAR_5 = (*VAR_1 - *VAR_0 * VAR_6) / VAR_7;
    } else {
 VAR_6 = *VAR_2 / *VAR_3;
 VAR_7 = *VAR_3 + *VAR_2 * VAR_6;
 *VAR_4 = (*VAR_1 + *VAR_0 * VAR_6) / VAR_7;
 *VAR_5 = (-(*VAR_0) + *VAR_1 * VAR_6) / VAR_7;
    }

    return 0;



}

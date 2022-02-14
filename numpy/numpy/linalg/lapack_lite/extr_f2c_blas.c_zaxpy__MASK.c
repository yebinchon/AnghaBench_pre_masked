
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int integer ;
typedef int doublereal ;
struct TYPE_5__ {int r; int i; } ;
typedef TYPE_1__ doublecomplex ;



int FUNC_0(integer *VAR_0, doublecomplex *VAR_1, doublecomplex *VAR_2,
 integer *VAR_3, doublecomplex *VAR_4, integer *VAR_5)
{

    integer VAR_6, VAR_7, VAR_8, VAR_9;
    doublecomplex VAR_10, VAR_11;


    static integer VAR_12, VAR_13, VAR_14;
    extern doublereal FUNC_1(doublecomplex *);
    --VAR_4;
    --VAR_2;


    if (*VAR_0 <= 0) {
 return 0;
    }
    if (FUNC_1(VAR_1) == 0.) {
 return 0;
    }
    if (*VAR_3 == 1 && *VAR_5 == 1) {
 goto L20;
    }






    VAR_13 = 1;
    VAR_14 = 1;
    if (*VAR_3 < 0) {
 VAR_13 = (-(*VAR_0) + 1) * *VAR_3 + 1;
    }
    if (*VAR_5 < 0) {
 VAR_14 = (-(*VAR_0) + 1) * *VAR_5 + 1;
    }
    VAR_6 = *VAR_0;
    for (VAR_12 = 1; VAR_12 <= VAR_6; ++VAR_12) {
 VAR_7 = VAR_14;
 VAR_8 = VAR_14;
 VAR_9 = VAR_13;
 VAR_11 = VAR_1->r * VAR_2[VAR_9].r - VAR_1->i * VAR_2[VAR_9].i, VAR_11 = VAR_1->r * VAR_2[
  VAR_9].i + VAR_1->i * VAR_2[VAR_9].r;
 VAR_10 = VAR_4[VAR_8].r + VAR_11, VAR_10 = VAR_4[VAR_8].i + VAR_11;
 VAR_4[VAR_7].r = VAR_10, VAR_4[VAR_7].i = VAR_10;
 VAR_13 += *VAR_3;
 VAR_14 += *VAR_5;

    }
    return 0;



L20:
    VAR_6 = *VAR_0;
    for (VAR_12 = 1; VAR_12 <= VAR_6; ++VAR_12) {
 VAR_7 = VAR_12;
 VAR_8 = VAR_12;
 VAR_9 = VAR_12;
 VAR_11 = VAR_1->r * VAR_2[VAR_9].r - VAR_1->i * VAR_2[VAR_9].i, VAR_11 = VAR_1->r * VAR_2[
  VAR_9].i + VAR_1->i * VAR_2[VAR_9].r;
 VAR_10 = VAR_4[VAR_8].r + VAR_11, VAR_10 = VAR_4[VAR_8].i + VAR_11;
 VAR_4[VAR_7].r = VAR_10, VAR_4[VAR_7].i = VAR_10;

    }
    return 0;
}

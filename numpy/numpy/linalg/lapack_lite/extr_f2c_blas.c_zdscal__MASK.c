
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int integer ;
typedef void* doublereal ;
struct TYPE_3__ {int r; int i; } ;
typedef TYPE_1__ doublecomplex ;



int FUNC_0(integer *VAR_0, doublereal *VAR_1, doublecomplex *VAR_2,
 integer *VAR_3)
{

    integer VAR_4, VAR_5, VAR_6;
    doublecomplex VAR_7, VAR_8;


    static integer VAR_9, VAR_10;
    --VAR_2;


    if (*VAR_0 <= 0 || *VAR_3 <= 0) {
 return 0;
    }
    if (*VAR_3 == 1) {
 goto L20;
    }



    VAR_10 = 1;
    VAR_4 = *VAR_0;
    for (VAR_9 = 1; VAR_9 <= VAR_4; ++VAR_9) {
 VAR_5 = VAR_10;
 VAR_8 = *VAR_1, VAR_8 = 0.;
 VAR_6 = VAR_10;
 VAR_7 = VAR_8 * VAR_2[VAR_6].r - VAR_8 * VAR_2[VAR_6].i, VAR_7 = VAR_8 *
  VAR_2[VAR_6].i + VAR_8 * VAR_2[VAR_6].r;
 VAR_2[VAR_5].r = VAR_7, VAR_2[VAR_5].i = VAR_7;
 VAR_10 += *VAR_3;

    }
    return 0;



L20:
    VAR_4 = *VAR_0;
    for (VAR_9 = 1; VAR_9 <= VAR_4; ++VAR_9) {
 VAR_5 = VAR_9;
 VAR_8 = *VAR_1, VAR_8 = 0.;
 VAR_6 = VAR_9;
 VAR_7 = VAR_8 * VAR_2[VAR_6].r - VAR_8 * VAR_2[VAR_6].i, VAR_7 = VAR_8 *
  VAR_2[VAR_6].i + VAR_8 * VAR_2[VAR_6].r;
 VAR_2[VAR_5].r = VAR_7, VAR_2[VAR_5].i = VAR_7;

    }
    return 0;
}

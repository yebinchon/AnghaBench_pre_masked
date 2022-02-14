
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int integer ;
struct TYPE_4__ {int i; int r; } ;
typedef TYPE_1__ doublecomplex ;



int FUNC_0(integer *VAR_0, doublecomplex *VAR_1, integer *VAR_2,
 doublecomplex *VAR_3, integer *VAR_4)
{

    integer VAR_5, VAR_6, VAR_7;


    static integer VAR_8, VAR_9, VAR_10;
    --VAR_3;
    --VAR_1;


    if (*VAR_0 <= 0) {
 return 0;
    }
    if (*VAR_2 == 1 && *VAR_4 == 1) {
 goto L20;
    }






    VAR_9 = 1;
    VAR_10 = 1;
    if (*VAR_2 < 0) {
 VAR_9 = (-(*VAR_0) + 1) * *VAR_2 + 1;
    }
    if (*VAR_4 < 0) {
 VAR_10 = (-(*VAR_0) + 1) * *VAR_4 + 1;
    }
    VAR_5 = *VAR_0;
    for (VAR_8 = 1; VAR_8 <= VAR_5; ++VAR_8) {
 VAR_6 = VAR_10;
 VAR_7 = VAR_9;
 VAR_3[VAR_6].r = VAR_1[VAR_7].r, VAR_3[VAR_6].i = VAR_1[VAR_7].i;
 VAR_9 += *VAR_2;
 VAR_10 += *VAR_4;

    }
    return 0;



L20:
    VAR_5 = *VAR_0;
    for (VAR_8 = 1; VAR_8 <= VAR_5; ++VAR_8) {
 VAR_6 = VAR_8;
 VAR_7 = VAR_8;
 VAR_3[VAR_6].r = VAR_1[VAR_7].r, VAR_3[VAR_6].i = VAR_1[VAR_7].i;

    }
    return 0;
}

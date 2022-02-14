
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int integer ;
struct TYPE_4__ {int r; int i; } ;
typedef TYPE_1__ doublecomplex ;



int FUNC_0(integer *VAR_0, doublecomplex *VAR_1, doublecomplex *VAR_2,
 integer *VAR_3)
{

    integer VAR_4, VAR_5, VAR_6;
    doublecomplex VAR_7;


    static integer VAR_8, VAR_9;
    --VAR_2;


    if (*VAR_0 <= 0 || *VAR_3 <= 0) {
 return 0;
    }
    if (*VAR_3 == 1) {
 goto L20;
    }



    VAR_9 = 1;
    VAR_4 = *VAR_0;
    for (VAR_8 = 1; VAR_8 <= VAR_4; ++VAR_8) {
 VAR_5 = VAR_9;
 VAR_6 = VAR_9;
 VAR_7 = VAR_1->r * VAR_2[VAR_6].r - VAR_1->i * VAR_2[VAR_6].i, VAR_7 = VAR_1->r * VAR_2[
  VAR_6].i + VAR_1->i * VAR_2[VAR_6].r;
 VAR_2[VAR_5].r = VAR_7, VAR_2[VAR_5].i = VAR_7;
 VAR_9 += *VAR_3;

    }
    return 0;



L20:
    VAR_4 = *VAR_0;
    for (VAR_8 = 1; VAR_8 <= VAR_4; ++VAR_8) {
 VAR_5 = VAR_8;
 VAR_6 = VAR_8;
 VAR_7 = VAR_1->r * VAR_2[VAR_6].r - VAR_1->i * VAR_2[VAR_6].i, VAR_7 = VAR_1->r * VAR_2[
  VAR_6].i + VAR_1->i * VAR_2[VAR_6].r;
 VAR_2[VAR_5].r = VAR_7, VAR_2[VAR_5].i = VAR_7;

    }
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int integer ;
struct TYPE_4__ {int r; int i; } ;
typedef TYPE_1__ complex ;



int FUNC_0(integer *VAR_0, complex *VAR_1, complex *VAR_2, integer *
 VAR_3)
{

    integer VAR_4, VAR_5, VAR_6, VAR_7;
    complex VAR_8;


    static integer VAR_9, VAR_10;
    --VAR_2;


    if (*VAR_0 <= 0 || *VAR_3 <= 0) {
 return 0;
    }
    if (*VAR_3 == 1) {
 goto L20;
    }



    VAR_10 = *VAR_0 * *VAR_3;
    VAR_4 = VAR_10;
    VAR_5 = *VAR_3;
    for (VAR_9 = 1; VAR_5 < 0 ? VAR_9 >= VAR_4 : VAR_9 <= VAR_4; VAR_9 += VAR_5) {
 VAR_6 = VAR_9;
 VAR_7 = VAR_9;
 VAR_8 = VAR_1->r * VAR_2[VAR_7].r - VAR_1->i * VAR_2[VAR_7].i, VAR_8 = VAR_1->r * VAR_2[
  VAR_7].i + VAR_1->i * VAR_2[VAR_7].r;
 VAR_2[VAR_6].r = VAR_8, VAR_2[VAR_6].i = VAR_8;

    }
    return 0;



L20:
    VAR_5 = *VAR_0;
    for (VAR_9 = 1; VAR_9 <= VAR_5; ++VAR_9) {
 VAR_4 = VAR_9;
 VAR_6 = VAR_9;
 VAR_8 = VAR_1->r * VAR_2[VAR_6].r - VAR_1->i * VAR_2[VAR_6].i, VAR_8 = VAR_1->r * VAR_2[
  VAR_6].i + VAR_1->i * VAR_2[VAR_6].r;
 VAR_2[VAR_4].r = VAR_8, VAR_2[VAR_4].i = VAR_8;

    }
    return 0;
}

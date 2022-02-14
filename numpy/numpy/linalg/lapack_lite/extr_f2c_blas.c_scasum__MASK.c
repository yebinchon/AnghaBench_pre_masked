
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef float real ;
typedef int integer ;
typedef float doublereal ;
struct TYPE_4__ {float r; } ;
typedef TYPE_1__ complex ;


 int FUNC_0 (float) ;
 float FUNC_1 (TYPE_1__*) ;

doublereal FUNC_2(integer *VAR_0, complex *VAR_1, integer *VAR_2)
{

    integer VAR_3, VAR_4, VAR_5;
    real VAR_6, VAR_7, VAR_8;


    static integer VAR_9, VAR_10;
    static real VAR_11;
    --VAR_1;


    VAR_6 = 0.f;
    VAR_11 = 0.f;
    if (*VAR_0 <= 0 || *VAR_2 <= 0) {
 return VAR_6;
    }
    if (*VAR_2 == 1) {
 goto L20;
    }



    VAR_10 = *VAR_0 * *VAR_2;
    VAR_3 = VAR_10;
    VAR_4 = *VAR_2;
    for (VAR_9 = 1; VAR_4 < 0 ? VAR_9 >= VAR_3 : VAR_9 <= VAR_3; VAR_9 += VAR_4) {
 VAR_5 = VAR_9;
 VAR_11 = VAR_11 + (VAR_7 = VAR_1[VAR_5].r, FUNC_0(VAR_7)) + (VAR_8 = FUNC_1(&VAR_1[
  VAR_9]), FUNC_0(VAR_8));

    }
    VAR_6 = VAR_11;
    return VAR_6;



L20:
    VAR_4 = *VAR_0;
    for (VAR_9 = 1; VAR_9 <= VAR_4; ++VAR_9) {
 VAR_3 = VAR_9;
 VAR_11 = VAR_11 + (VAR_7 = VAR_1[VAR_3].r, FUNC_0(VAR_7)) + (VAR_8 = FUNC_1(&VAR_1[
  VAR_9]), FUNC_0(VAR_8));

    }
    VAR_6 = VAR_11;
    return VAR_6;
}

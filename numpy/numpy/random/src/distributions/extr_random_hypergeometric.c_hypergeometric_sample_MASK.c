
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int bitgen_t ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static int64_t FUNC_1(bitgen_t *VAR_0,
                                     int64_t VAR_1, int64_t VAR_2, int64_t VAR_3)
{
    int64_t VAR_4, VAR_5, VAR_6, VAR_7;
    int64_t VAR_8 = VAR_1 + VAR_2;

    if (VAR_3 > VAR_8/2) {
        VAR_7 = VAR_8 - VAR_3;
    }
    else {
        VAR_7 = VAR_3;
    }

    VAR_4 = VAR_8;
    VAR_5 = VAR_1;

    while ((VAR_7 > 0) && (VAR_5 > 0) &&
           (VAR_4 > VAR_5)) {



        --VAR_4;
        if ((int64_t) FUNC_0(VAR_0,
                                      VAR_4) < VAR_5) {

            --VAR_5;
        }
        --VAR_7;
    }

    if (VAR_4 == VAR_5) {

        VAR_5 -= VAR_7;
    }

    if (VAR_3 > VAR_8/2) {
        VAR_6 = VAR_5;
    }
    else {
        VAR_6 = VAR_1 - VAR_5;
    }

    return VAR_6;
}

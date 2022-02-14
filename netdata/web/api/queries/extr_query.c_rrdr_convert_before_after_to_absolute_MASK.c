
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long time_t ;


 int VAR_0 ;
 int FUNC_0 (long long) ;

__attribute__((used)) static int FUNC_1(
        long long *VAR_1
        , long long *VAR_2
        , int VAR_3
        , time_t VAR_4
        , time_t VAR_5
) {
    int VAR_6 = -1;
    long long VAR_7, VAR_8;

    VAR_8 = *VAR_2;
    VAR_7 = *VAR_1;

    if(VAR_8 == 0 && VAR_7 == 0) {

        VAR_8 = VAR_5;
        VAR_7 = VAR_4;
        VAR_6 = 0;
    }


    if(FUNC_0(VAR_8) <= VAR_0) {
        if(FUNC_0(VAR_8) % VAR_3) {

            if(VAR_8 < 0) VAR_8 = VAR_8 - VAR_3 -
                                                        VAR_8 % VAR_3;
            else VAR_8 = VAR_8 + VAR_3 - VAR_8 % VAR_3;
        }
        if(VAR_8 > 0) VAR_8 = VAR_4 + VAR_8;
        else VAR_8 = VAR_5 + VAR_8;

        VAR_6 = 0;
    }


    if(FUNC_0(VAR_7) <= VAR_0) {
        if(VAR_7 == 0) VAR_7 = -VAR_3;
        if(FUNC_0(VAR_7) % VAR_3) {

            if(VAR_7 < 0) VAR_7 = VAR_7 - VAR_3 - VAR_7 % VAR_3;
            else VAR_7 = VAR_7 + VAR_3 - VAR_7 % VAR_3;
        }
        VAR_7 = VAR_8 + VAR_7;
        VAR_6 = 0;
    }

    if(VAR_6 == -1)
        VAR_6 = 1;


    if(VAR_8 > VAR_5) VAR_8 = VAR_5;
    if(VAR_8 < VAR_4) VAR_8 = VAR_4;

    if(VAR_7 > VAR_5) VAR_7 = VAR_5;
    if(VAR_7 < VAR_4) VAR_7 = VAR_4;


    if(VAR_7 > VAR_8) {
        time_t VAR_9 = VAR_8;
        VAR_8 = VAR_7;
        VAR_7 = VAR_9;
    }

    *VAR_2 = VAR_8;
    *VAR_1 = VAR_7;

    return VAR_6;
}

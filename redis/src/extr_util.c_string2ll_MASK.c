
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(const char *VAR_3, size_t VAR_4, long long *VAR_5) {
    const char *VAR_6 = VAR_3;
    size_t VAR_7 = 0;
    int VAR_8 = 0;
    unsigned long long VAR_9;


    if (VAR_7 == VAR_4)
        return 0;


    if (VAR_4 == 1 && VAR_6[0] == '0') {
        if (VAR_5 != ((void*)0)) *VAR_5 = 0;
        return 1;
    }



    if (VAR_6[0] == '-') {
        VAR_8 = 1;
        VAR_6++; VAR_7++;


        if (VAR_7 == VAR_4)
            return 0;
    }


    if (VAR_6[0] >= '1' && VAR_6[0] <= '9') {
        VAR_9 = VAR_6[0]-'0';
        VAR_6++; VAR_7++;
    } else {
        return 0;
    }


    while (VAR_7 < VAR_4 && VAR_6[0] >= '0' && VAR_6[0] <= '9') {
        if (VAR_9 > (VAR_2 / 10))
            return 0;
        VAR_9 *= 10;

        if (VAR_9 > (VAR_2 - (VAR_6[0]-'0')))
            return 0;
        VAR_9 += VAR_6[0]-'0';

        VAR_6++; VAR_7++;
    }


    if (VAR_7 < VAR_4)
        return 0;



    if (VAR_8) {
        if (VAR_9 > ((unsigned long long)(-(VAR_1+1))+1))
            return 0;
        if (VAR_5 != ((void*)0)) *VAR_5 = -VAR_9;
    } else {
        if (VAR_9 > VAR_0)
            return 0;
        if (VAR_5 != ((void*)0)) *VAR_5 = VAR_9;
    }
    return 1;
}

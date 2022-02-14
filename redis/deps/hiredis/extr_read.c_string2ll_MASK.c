
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(const char *VAR_5, size_t VAR_6, long long *VAR_7) {
    const char *VAR_8 = VAR_5;
    size_t VAR_9 = 0;
    int VAR_10 = 0;
    unsigned long long VAR_11;

    if (VAR_9 == VAR_6)
        return VAR_2;


    if (VAR_6 == 1 && VAR_8[0] == '0') {
        if (VAR_7 != ((void*)0)) *VAR_7 = 0;
        return VAR_3;
    }

    if (VAR_8[0] == '-') {
        VAR_10 = 1;
        VAR_8++; VAR_9++;


        if (VAR_9 == VAR_6)
            return VAR_2;
    }


    if (VAR_8[0] >= '1' && VAR_8[0] <= '9') {
        VAR_11 = VAR_8[0]-'0';
        VAR_8++; VAR_9++;
    } else if (VAR_8[0] == '0' && VAR_6 == 1) {
        *VAR_7 = 0;
        return VAR_3;
    } else {
        return VAR_2;
    }

    while (VAR_9 < VAR_6 && VAR_8[0] >= '0' && VAR_8[0] <= '9') {
        if (VAR_11 > (VAR_4 / 10))
            return VAR_2;
        VAR_11 *= 10;

        if (VAR_11 > (VAR_4 - (VAR_8[0]-'0')))
            return VAR_2;
        VAR_11 += VAR_8[0]-'0';

        VAR_8++; VAR_9++;
    }


    if (VAR_9 < VAR_6)
        return VAR_2;

    if (VAR_10) {
        if (VAR_11 > ((unsigned long long)(-(VAR_1+1))+1))
            return VAR_2;
        if (VAR_7 != ((void*)0)) *VAR_7 = -VAR_11;
    } else {
        if (VAR_11 > VAR_0)
            return VAR_2;
        if (VAR_7 != ((void*)0)) *VAR_7 = VAR_11;
    }
    return VAR_3;
}

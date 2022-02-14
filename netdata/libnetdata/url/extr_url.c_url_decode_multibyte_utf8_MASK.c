
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (int) ;
 char FUNC_3 (char*) ;
 char FUNC_4 (char) ;

char FUNC_5(char *VAR_0, char *VAR_1, char *VAR_2) {
    char VAR_3 = FUNC_3(VAR_0);

    if(FUNC_2(!VAR_3 || !FUNC_1(VAR_3)))
        return 0;

    char VAR_4 = FUNC_4(VAR_3);

    if(FUNC_2(VAR_4 <= 0 || VAR_1+VAR_4 >= VAR_2))
        return 0;

    char VAR_5 = VAR_4;
    while(VAR_5 > 0) {
        char VAR_6 = FUNC_3(VAR_0);

        if(FUNC_2( !FUNC_0(VAR_6) ))
            return 0;
        if((VAR_5 != VAR_4) && FUNC_1(VAR_6))
            return 0;

        *VAR_1++ = VAR_6;
        VAR_0+=3;
        VAR_5--;
    }

    return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 long double VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (long double) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,char const*,size_t) ;
 long double FUNC_3 (char*,char**) ;

int FUNC_4(const char *VAR_5, size_t VAR_6, long double *VAR_7) {
    char VAR_8[VAR_3];
    long double VAR_9;
    char *VAR_10;

    if (VAR_6 >= sizeof(VAR_8)) return 0;
    FUNC_2(VAR_8,VAR_5,VAR_6);
    VAR_8[VAR_6] = '\0';

    VAR_4 = 0;
    VAR_9 = FUNC_3(VAR_8, &VAR_10);
    if (FUNC_1(VAR_8[0]) || VAR_10[0] != '\0' ||
        (VAR_4 == VAR_1 &&
            (VAR_9 == VAR_2 || VAR_9 == -VAR_2 || VAR_9 == 0)) ||
        VAR_4 == VAR_0 ||
        FUNC_0(VAR_9))
        return 0;

    if (VAR_7) *VAR_7 = VAR_9;
    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*,char const*,unsigned int) ;
 int FUNC_2 (char const*,char*) ;
 long long FUNC_3 (char*,char**,int) ;

long long FUNC_4(const char *VAR_2, int *VAR_3) {
    const char *VAR_4;
    char VAR_5[128];
    long VAR_6;
    long long VAR_7;
    unsigned int VAR_8;

    if (VAR_3) *VAR_3 = 0;


    VAR_4 = VAR_2;
    if (*VAR_4 == '-') VAR_4++;
    while(*VAR_4 && FUNC_0(*VAR_4)) VAR_4++;
    if (*VAR_4 == '\0' || !FUNC_2(VAR_4,"b")) {
        VAR_6 = 1;
    } else if (!FUNC_2(VAR_4,"k")) {
        VAR_6 = 1000;
    } else if (!FUNC_2(VAR_4,"kb")) {
        VAR_6 = 1024;
    } else if (!FUNC_2(VAR_4,"m")) {
        VAR_6 = 1000*1000;
    } else if (!FUNC_2(VAR_4,"mb")) {
        VAR_6 = 1024*1024;
    } else if (!FUNC_2(VAR_4,"g")) {
        VAR_6 = 1000L*1000*1000;
    } else if (!FUNC_2(VAR_4,"gb")) {
        VAR_6 = 1024L*1024*1024;
    } else {
        if (VAR_3) *VAR_3 = 1;
        return 0;
    }



    VAR_8 = VAR_4-VAR_2;
    if (VAR_8 >= sizeof(VAR_5)) {
        if (VAR_3) *VAR_3 = 1;
        return 0;
    }
    FUNC_1(VAR_5,VAR_2,VAR_8);
    VAR_5[VAR_8] = '\0';

    char *VAR_9;
    VAR_1 = 0;
    VAR_7 = FUNC_3(VAR_5,&VAR_9,10);
    if ((VAR_7 == 0 && VAR_1 == VAR_0) || *VAR_9 != '\0') {
        if (VAR_3) *VAR_3 = 1;
        return 0;
    }
    return VAR_7*VAR_6;
}

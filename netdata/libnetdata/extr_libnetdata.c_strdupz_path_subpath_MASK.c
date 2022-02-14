
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int,char const*,char*,char const*) ;
 char* FUNC_1 (char*) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int) ;

char *FUNC_4(const char *VAR_1, const char *VAR_2) {
    if(FUNC_3(!VAR_1 || !*VAR_1)) VAR_1 = ".";
    if(FUNC_3(!VAR_2)) VAR_2 = "";


    size_t VAR_3 = FUNC_2(VAR_1);
    while(VAR_3 > 0 && VAR_1[VAR_3 - 1] == '/') VAR_3--;


    while(VAR_2[0] == '/') VAR_2++;



    char *VAR_4 = "/";
    if(VAR_1[VAR_3] == '/' && (*VAR_2 || VAR_3 == 0)) {
        VAR_4 = "";
        VAR_3++;
    }
    else if(!*VAR_2) {


        VAR_4 = "";
    }

    char VAR_5[VAR_0 + 1];
    FUNC_0(VAR_5, VAR_0, "%.*s%s%s", (int)VAR_3, VAR_1, VAR_4, VAR_2);
    return FUNC_1(VAR_5);
}

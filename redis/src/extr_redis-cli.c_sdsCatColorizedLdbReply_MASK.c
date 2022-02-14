
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int ,char*,size_t,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

sds FUNC_3(sds VAR_0, char *VAR_1, size_t VAR_2) {
    char *VAR_3 = "white";

    if (FUNC_2(VAR_1,"<debug>")) VAR_3 = "bold";
    if (FUNC_2(VAR_1,"<redis>")) VAR_3 = "green";
    if (FUNC_2(VAR_1,"<reply>")) VAR_3 = "cyan";
    if (FUNC_2(VAR_1,"<error>")) VAR_3 = "red";
    if (FUNC_2(VAR_1,"<hint>")) VAR_3 = "bold";
    if (FUNC_2(VAR_1,"<value>") || FUNC_2(VAR_1,"<retval>")) VAR_3 = "magenta";
    if (VAR_2 > 4 && FUNC_0(VAR_1[3])) {
        if (VAR_1[1] == '>') VAR_3 = "yellow";
        else if (VAR_1[2] == '#') VAR_3 = "bold";
    }
    return FUNC_1(VAR_0,VAR_1,VAR_2,VAR_3);
}

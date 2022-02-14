
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,long long) ;

int FUNC_1(char *VAR_0, size_t VAR_1, long long VAR_2) {
    int VAR_3 = 1024*1024*1024;
    int VAR_4 = 1024*1024;
    int VAR_5 = 1024;

    if (VAR_2 && (VAR_2 % VAR_3) == 0) {
        return FUNC_0(VAR_0,VAR_1,"%lldgb",VAR_2/VAR_3);
    } else if (VAR_2 && (VAR_2 % VAR_4) == 0) {
        return FUNC_0(VAR_0,VAR_1,"%lldmb",VAR_2/VAR_4);
    } else if (VAR_2 && (VAR_2 % VAR_5) == 0) {
        return FUNC_0(VAR_0,VAR_1,"%lldkb",VAR_2/VAR_5);
    } else {
        return FUNC_0(VAR_0,VAR_1,"%lld",VAR_2);
    }
}

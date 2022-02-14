
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static inline int FUNC_2(const char **VAR_0) {
    const char *VAR_1 = *VAR_0;


    if((VAR_1[0] == 'A' || VAR_1[0] == 'a') && (VAR_1[1] == 'N' || VAR_1[1] == 'n') && (VAR_1[2] == 'D' || VAR_1[2] == 'd') && FUNC_1(VAR_1[3])) {
        *VAR_0 = &VAR_1[4];
        return 1;
    }


    if(VAR_1[0] == '&' && VAR_1[1] == '&' && FUNC_0(VAR_1[2])) {
        *VAR_0 = &VAR_1[2];
        return 1;
    }

    return 0;
}

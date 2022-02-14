
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static inline int FUNC_2(const char **VAR_0) {
    const char *VAR_1 = *VAR_0;


    if((VAR_1[0] == 'O' || VAR_1[0] == 'o') && (VAR_1[1] == 'R' || VAR_1[1] == 'r') && FUNC_1(VAR_1[2])) {
        *VAR_0 = &VAR_1[3];
        return 1;
    }


    if(VAR_1[0] == '|' && VAR_1[1] == '|' && FUNC_0(VAR_1[2])) {
        *VAR_0 = &VAR_1[2];
        return 1;
    }

    return 0;
}

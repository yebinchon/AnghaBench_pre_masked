
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(const char **VAR_0) {
    const char *VAR_1 = *VAR_0;


    if((VAR_1[0] == 'A' || VAR_1[0] == 'a') && (VAR_1[1] == 'B' || VAR_1[1] == 'b') && (VAR_1[2] == 'S' || VAR_1[2] == 's') && VAR_1[3] == '(') {
        *VAR_0 = &VAR_1[3];
        return 1;
    }

    return 0;
}

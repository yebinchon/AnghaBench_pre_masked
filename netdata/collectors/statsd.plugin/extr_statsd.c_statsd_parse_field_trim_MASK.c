
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline const char *FUNC_1(const char *VAR_0, char *VAR_1) {
    if(FUNC_0(!VAR_0)) {
        VAR_0 = VAR_1;
        return VAR_0;
    }

    while(VAR_0 <= VAR_1 && (*VAR_0 == ' ' || *VAR_0 == '\t'))
        VAR_0++;

    *VAR_1 = '\0';
    VAR_1--;
    while(VAR_1 >= VAR_0 && (*VAR_1 == ' ' || *VAR_1 == '\t'))
        *VAR_1-- = '\0';

    return VAR_0;
}

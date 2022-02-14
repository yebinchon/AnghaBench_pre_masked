
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static inline uint64_t FUNC_0(const char *VAR_0) {
    uint64_t VAR_1 = 0;
    char VAR_2;
    for(VAR_2 = *VAR_0; VAR_2 >= '0' && VAR_2 <= '9' ; VAR_2 = *(++VAR_0)) {
        VAR_1 *= 10;
        VAR_1 += VAR_2 - '0';
    }
    return VAR_1;
}

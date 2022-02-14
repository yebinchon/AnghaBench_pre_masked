
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static inline long FUNC_1(const char *VAR_0) {
    long VAR_1 = 0;
    char VAR_2, VAR_3 = (*VAR_0 == '-');

    for(VAR_2 = (VAR_3)?*(++VAR_0):*VAR_0; VAR_2 >= '0' && VAR_2 <= '9' ; VAR_2 = *(++VAR_0)) {
        VAR_1 *= 10;
        VAR_1 += VAR_2 - '0';
    }

    if(FUNC_0(VAR_3))
        return -VAR_1;

    return VAR_1;
}

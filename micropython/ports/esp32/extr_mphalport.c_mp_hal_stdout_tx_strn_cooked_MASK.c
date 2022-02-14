
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;

void FUNC_1(const char *VAR_0, size_t VAR_1) {
    const char *VAR_2 = VAR_0;
    while (VAR_1--) {
        if (*VAR_0 == '\n') {
            if (VAR_0 > VAR_2) {
                FUNC_0(VAR_2, VAR_0 - VAR_2);
            }
            FUNC_0("\r\n", 2);
            ++VAR_0;
            VAR_2 = VAR_0;
        } else {
            ++VAR_0;
        }
    }
    if (VAR_0 > VAR_2) {
        FUNC_0(VAR_2, VAR_0 - VAR_2);
    }
}

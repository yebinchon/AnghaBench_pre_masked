
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

void FUNC_1(const char *VAR_0, size_t VAR_1) {
    for (; VAR_1 > 0; --VAR_1) {
        if (*VAR_0 == '\n') {
            FUNC_0('\r');
        }
        FUNC_0(*VAR_0++);
    }
}

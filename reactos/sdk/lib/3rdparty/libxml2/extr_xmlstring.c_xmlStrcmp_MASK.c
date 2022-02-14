
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlChar ;



int
FUNC_0(const xmlChar *VAR_0, const xmlChar *VAR_1) {
    register int VAR_2;

    if (VAR_0 == VAR_1) return(0);
    if (VAR_0 == ((void*)0)) return(-1);
    if (VAR_1 == ((void*)0)) return(1);
    do {
        VAR_2 = *VAR_0++ - *VAR_1;
        if (VAR_2 != 0) return(VAR_2);
    } while (*VAR_1++ != 0);
    return 0;
}

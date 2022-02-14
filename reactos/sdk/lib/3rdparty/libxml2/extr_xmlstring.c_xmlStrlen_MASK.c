
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xmlChar ;



int
FUNC_0(const xmlChar *VAR_0) {
    int VAR_1 = 0;

    if (VAR_0 == ((void*)0)) return(0);
    while (*VAR_0 != 0) {
        VAR_0++;
        VAR_1++;
    }
    return(VAR_1);
}

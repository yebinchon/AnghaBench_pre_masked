
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xmlChar ;


 int FUNC_0 (scalar_t__ const*,scalar_t__ const*) ;

int
FUNC_1(const xmlChar *VAR_0, const xmlChar *VAR_1, const xmlChar *VAR_2) {
    if (VAR_0 == ((void*)0)) return(FUNC_0(VAR_1, VAR_2));
    if (VAR_1 == ((void*)0)) return(0);
    if (VAR_2 == ((void*)0)) return(0);

    do {
        if (*VAR_0++ != *VAR_2) return(0);
    } while ((*VAR_2++) && (*VAR_0));
    if (*VAR_2++ != ':') return(0);
    do {
        if (*VAR_1++ != *VAR_2) return(0);
    } while (*VAR_2++);
    return(1);
}

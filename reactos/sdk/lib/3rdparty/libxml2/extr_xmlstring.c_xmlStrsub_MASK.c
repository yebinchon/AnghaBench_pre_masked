
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xmlChar ;


 scalar_t__* FUNC_0 (scalar_t__ const*,int) ;

xmlChar *
FUNC_1(const xmlChar *VAR_0, int VAR_1, int VAR_2) {
    int VAR_3;

    if (VAR_0 == ((void*)0)) return(((void*)0));
    if (VAR_1 < 0) return(((void*)0));
    if (VAR_2 < 0) return(((void*)0));

    for (VAR_3 = 0;VAR_3 < VAR_1;VAR_3++) {
        if (*VAR_0 == 0) return(((void*)0));
        VAR_0++;
    }
    if (*VAR_0 == 0) return(((void*)0));
    return(FUNC_0(VAR_0, VAR_2));
}

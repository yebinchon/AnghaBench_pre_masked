
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t xmlChar ;


 int* VAR_0 ;

int
FUNC_0(const xmlChar *VAR_1, const xmlChar *VAR_2) {
    register int VAR_3;

    if (VAR_1 == VAR_2) return(0);
    if (VAR_1 == ((void*)0)) return(-1);
    if (VAR_2 == ((void*)0)) return(1);
    do {
        VAR_3 = VAR_0[*VAR_1++] - VAR_0[*VAR_2];
        if (VAR_3 != 0) return(VAR_3);
    } while (*VAR_2++ != 0);
    return 0;
}

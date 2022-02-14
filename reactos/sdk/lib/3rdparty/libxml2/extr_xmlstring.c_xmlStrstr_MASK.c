
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xmlChar ;


 int FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (scalar_t__ const*,scalar_t__ const*,int) ;

const xmlChar *
FUNC_2(const xmlChar *VAR_0, const xmlChar *VAR_1) {
    int VAR_2;

    if (VAR_0 == ((void*)0)) return(((void*)0));
    if (VAR_1 == ((void*)0)) return(((void*)0));
    VAR_2 = FUNC_0(VAR_1);

    if (VAR_2 == 0) return(VAR_0);
    while (*VAR_0 != 0) {
        if (*VAR_0 == *VAR_1) {
            if (!FUNC_1(VAR_0, VAR_1, VAR_2)) return((const xmlChar *) VAR_0);
        }
        VAR_0++;
    }
    return(((void*)0));
}

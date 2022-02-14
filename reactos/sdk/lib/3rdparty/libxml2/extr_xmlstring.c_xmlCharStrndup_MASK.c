
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xmlChar ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int) ;

xmlChar *
FUNC_2(const char *VAR_0, int VAR_1) {
    int VAR_2;
    xmlChar *VAR_3;

    if ((VAR_0 == ((void*)0)) || (VAR_1 < 0)) return(((void*)0));
    VAR_3 = (xmlChar *) FUNC_1((VAR_1 + 1) * sizeof(xmlChar));
    if (VAR_3 == ((void*)0)) {
        FUNC_0(((void*)0), ((void*)0));
        return(((void*)0));
    }
    for (VAR_2 = 0;VAR_2 < VAR_1;VAR_2++) {
        VAR_3[VAR_2] = (xmlChar) VAR_0[VAR_2];
        if (VAR_3[VAR_2] == 0) return(VAR_3);
    }
    VAR_3[VAR_1] = 0;
    return(VAR_3);
}

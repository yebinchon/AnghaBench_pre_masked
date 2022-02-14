
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char xmlChar ;



__attribute__((used)) static int
FUNC_0(const xmlChar *VAR_0, int VAR_1) {
    xmlChar VAR_2;

    if ((VAR_0 == ((void*)0)) || (VAR_1 < 0)) return(-1);
    if ((VAR_0[VAR_1] == '\'') || (VAR_0[VAR_1] == '"')) VAR_2 = VAR_0[VAR_1];
    else return(VAR_1);
    VAR_1++;
    while (VAR_0[VAR_1] != 0) {
        if (VAR_0[VAR_1] == VAR_2)
     return(VAR_1 + 1);
 VAR_1++;
    }
    return(-1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xmlChar ;


 int FUNC_0 (scalar_t__*,scalar_t__ const*,int) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int) ;

xmlChar *
FUNC_3(const xmlChar *VAR_0, int VAR_1) {
    xmlChar *VAR_2;

    if ((VAR_0 == ((void*)0)) || (VAR_1 < 0)) return(((void*)0));
    VAR_2 = (xmlChar *) FUNC_2((VAR_1 + 1) * sizeof(xmlChar));
    if (VAR_2 == ((void*)0)) {
        FUNC_1(((void*)0), ((void*)0));
        return(((void*)0));
    }
    FUNC_0(VAR_2, VAR_0, VAR_1 * sizeof(xmlChar));
    VAR_2[VAR_1] = 0;
    return(VAR_2);
}

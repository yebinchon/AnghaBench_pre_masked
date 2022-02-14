
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xmlChar ;


 scalar_t__* FUNC_0 (scalar_t__ const*) ;
 scalar_t__* FUNC_1 (scalar_t__*,scalar_t__ const*,int) ;

xmlChar *
FUNC_2(xmlChar *VAR_0, const xmlChar *VAR_1) {
    const xmlChar *VAR_2 = VAR_1;

    if (VAR_1 == ((void*)0)) return(VAR_0);
    if (VAR_0 == ((void*)0))
        return(FUNC_0(VAR_1));

    while (*VAR_2 != 0) VAR_2++;
    return(FUNC_1(VAR_0, VAR_1, VAR_2 - VAR_1));
}

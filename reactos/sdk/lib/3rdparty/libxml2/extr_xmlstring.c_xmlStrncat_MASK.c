
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xmlChar ;


 int FUNC_0 (scalar_t__*,scalar_t__ const*,int) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (scalar_t__ const*,int) ;

xmlChar *
FUNC_5(xmlChar *VAR_0, const xmlChar *VAR_1, int VAR_2) {
    int VAR_3;
    xmlChar *VAR_4;

    if ((VAR_1 == ((void*)0)) || (VAR_2 == 0))
        return(VAR_0);
    if (VAR_2 < 0)
 return(((void*)0));
    if (VAR_0 == ((void*)0))
        return(FUNC_4(VAR_1, VAR_2));

    VAR_3 = FUNC_3(VAR_0);
    if (VAR_3 < 0)
        return(((void*)0));
    VAR_4 = (xmlChar *) FUNC_2(VAR_0, (VAR_3 + VAR_2 + 1) * sizeof(xmlChar));
    if (VAR_4 == ((void*)0)) {
        FUNC_1(((void*)0), ((void*)0));
        return(VAR_0);
    }
    FUNC_0(&VAR_4[VAR_3], VAR_1, VAR_2 * sizeof(xmlChar));
    VAR_4[VAR_3 + VAR_2] = 0;
    return(VAR_4);
}

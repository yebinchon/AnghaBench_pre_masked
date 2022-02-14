
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlDictPtr ;
typedef char xmlChar ;


 char const* FUNC_0 (int *,char const*,int) ;

const xmlChar *
FUNC_1(xmlDictPtr VAR_0, const xmlChar *VAR_1, const xmlChar **VAR_2) {
    int VAR_3 = 0;
    const xmlChar *VAR_4 = ((void*)0);

    *VAR_2 = ((void*)0);
    if ((VAR_1 == ((void*)0)) || (VAR_0 == ((void*)0))) return(((void*)0));
    if (VAR_1[0] == ':')
        return(FUNC_0(VAR_0, VAR_1, -1));
    while ((VAR_1[VAR_3] != 0) && (VAR_1[VAR_3] != ':')) VAR_3++;
    if (VAR_1[VAR_3] == 0) return(FUNC_0(VAR_0, VAR_1, -1));
    *VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_3);
    VAR_4 = FUNC_0(VAR_0, &VAR_1[VAR_3 + 1], -1);
    return(VAR_4);
}

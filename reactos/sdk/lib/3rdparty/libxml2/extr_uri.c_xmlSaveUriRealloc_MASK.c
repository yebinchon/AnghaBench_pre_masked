
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlChar ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static xmlChar *
FUNC_2(xmlChar *VAR_1, int *VAR_2) {
    xmlChar *VAR_3;
    int VAR_4;

    if (*VAR_2 > VAR_0) {
        FUNC_1("reaching arbitrary MAX_URI_LENGTH limit\n");
        return(((void*)0));
    }
    VAR_4 = *VAR_2 * 2;
    VAR_3 = (xmlChar *) FUNC_0(VAR_1, (VAR_4 + 1));
    if (VAR_3 == ((void*)0)) {
        FUNC_1("saving URI\n");
        return(((void*)0));
    }
    *VAR_2 = VAR_4;
    return(VAR_3);
}

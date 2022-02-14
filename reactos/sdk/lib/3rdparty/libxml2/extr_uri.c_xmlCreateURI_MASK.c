
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlURIPtr ;
typedef int xmlURI ;


 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;

xmlURIPtr
FUNC_3(void) {
    xmlURIPtr VAR_0;

    VAR_0 = (xmlURIPtr) FUNC_1(sizeof(xmlURI));
    if (VAR_0 == ((void*)0)) {
        FUNC_2("creating URI structure\n");
 return(((void*)0));
    }
    FUNC_0(VAR_0, 0, sizeof(xmlURI));
    return(VAR_0);
}

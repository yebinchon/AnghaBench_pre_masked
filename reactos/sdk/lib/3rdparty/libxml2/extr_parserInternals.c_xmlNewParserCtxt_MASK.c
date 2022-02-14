
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlParserCtxtPtr ;
typedef int xmlParserCtxt ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

xmlParserCtxtPtr
FUNC_5(void)
{
    xmlParserCtxtPtr VAR_0;

    VAR_0 = (xmlParserCtxtPtr) FUNC_4(sizeof(xmlParserCtxt));
    if (VAR_0 == ((void*)0)) {
 FUNC_1(((void*)0), "cannot allocate parser context\n");
 return(((void*)0));
    }
    FUNC_0(VAR_0, 0, sizeof(xmlParserCtxt));
    if (FUNC_3(VAR_0) < 0) {
        FUNC_2(VAR_0);
 return(((void*)0));
    }
    return(VAR_0);
}

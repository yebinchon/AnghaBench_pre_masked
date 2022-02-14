
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlDOMWrapCtxtPtr ;
typedef int xmlDOMWrapCtxt ;


 int FUNC_0 (int *,int ,int) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (char*) ;

xmlDOMWrapCtxtPtr
FUNC_3(void)
{
    xmlDOMWrapCtxtPtr VAR_0;

    VAR_0 = FUNC_1(sizeof(xmlDOMWrapCtxt));
    if (VAR_0 == ((void*)0)) {
 FUNC_2("allocating DOM-wrapper context");
 return (((void*)0));
    }
    FUNC_0(VAR_0, 0, sizeof(xmlDOMWrapCtxt));
    return (VAR_0);
}

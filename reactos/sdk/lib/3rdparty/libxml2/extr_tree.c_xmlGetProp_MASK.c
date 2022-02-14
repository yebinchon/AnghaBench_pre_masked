
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlNode ;
typedef int xmlChar ;
typedef int * xmlAttrPtr ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int const*,int const*) ;

xmlChar *
FUNC_2(const xmlNode *VAR_0, const xmlChar *VAR_1) {
    xmlAttrPtr VAR_2;

    VAR_2 = FUNC_1(VAR_0, VAR_1);
    if (VAR_2 == ((void*)0))
 return(((void*)0));
    return(FUNC_0(VAR_2));
}

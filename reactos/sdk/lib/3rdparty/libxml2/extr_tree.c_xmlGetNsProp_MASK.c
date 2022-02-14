
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlNode ;
typedef int xmlChar ;
typedef int * xmlAttrPtr ;


 int VAR_0 ;
 int * FUNC_0 (int const*,int const*,int const*,int ) ;
 int * FUNC_1 (int *) ;

xmlChar *
FUNC_2(const xmlNode *VAR_1, const xmlChar *VAR_2, const xmlChar *VAR_3) {
    xmlAttrPtr VAR_4;

    VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0);
    if (VAR_4 == ((void*)0))
 return(((void*)0));
    return(FUNC_1(VAR_4));
}

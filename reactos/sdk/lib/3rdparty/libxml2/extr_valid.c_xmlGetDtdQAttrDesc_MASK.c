
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlDtdPtr ;
typedef int xmlChar ;
typedef scalar_t__ xmlAttributeTablePtr ;
typedef int * xmlAttributePtr ;
struct TYPE_3__ {int * attributes; } ;


 int * FUNC_0 (scalar_t__,int const*,int const*,int const*) ;

xmlAttributePtr
FUNC_1(xmlDtdPtr VAR_0, const xmlChar *VAR_1, const xmlChar *VAR_2,
           const xmlChar *VAR_3) {
    xmlAttributeTablePtr VAR_4;

    if (VAR_0 == ((void*)0)) return(((void*)0));
    if (VAR_0->attributes == ((void*)0)) return(((void*)0));
    VAR_4 = (xmlAttributeTablePtr) VAR_0->attributes;

    return(FUNC_0(VAR_4, VAR_2, VAR_3, VAR_1));
}

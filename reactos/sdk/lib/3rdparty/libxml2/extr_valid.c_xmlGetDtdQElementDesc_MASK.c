
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xmlElementTablePtr ;
typedef int * xmlElementPtr ;
typedef TYPE_1__* xmlDtdPtr ;
typedef int xmlChar ;
struct TYPE_3__ {int * elements; } ;


 int * FUNC_0 (scalar_t__,int const*,int const*) ;

xmlElementPtr
FUNC_1(xmlDtdPtr VAR_0, const xmlChar *VAR_1,
               const xmlChar *VAR_2) {
    xmlElementTablePtr VAR_3;

    if (VAR_0 == ((void*)0)) return(((void*)0));
    if (VAR_0->elements == ((void*)0)) return(((void*)0));
    VAR_3 = (xmlElementTablePtr) VAR_0->elements;

    return(FUNC_0(VAR_3, VAR_1, VAR_2));
}
